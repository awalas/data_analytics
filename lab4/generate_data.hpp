
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace generate_data_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 25> locations_array__ = 
{" (found before start of program)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 10, column 3 to column 18)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 11, column 3 to column 19)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 13, column 3 to column 18)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 21, column 12 to column 42)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 19, column 16 to column 44)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 17, column 16 to column 43)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 16, column 12 to line 19, column 44)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 15, column 8 to line 21, column 42)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 14, column 16 to line 22, column 4)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 14, column 3 to line 22, column 4)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 26, column 12 to column 37)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 25, column 8 to line 26, column 37)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 27, column 8 to column 59)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 24, column 17 to line 28, column 5)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 24, column 4 to line 28, column 5)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 2, column 3 to column 24)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 3, column 3 to column 24)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 4, column 3 to column 18)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 5, column 3 to column 18)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 6, column 3 to column 42)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 10, column 10 to column 11)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 10, column 13 to column 14)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 11, column 9 to column 10)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab4/generate_data.stan', line 13, column 10 to column 11)"};




class generate_data_model final : public model_base_crtp<generate_data_model> {

 private:
  int M;
  int N;
  double alpha;
  double sigma;
  double sig_prob; 
  
 
 public:
  ~generate_data_model() { }
  
  inline std::string model_name() const final { return "generate_data_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  generate_data_model(stan::io::var_context& context__,
                      unsigned int random_seed__ = 0,
                      std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "generate_data_model_namespace::generate_data_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 16;
      M = std::numeric_limits<int>::min();
      
      
      current_statement__ = 16;
      M = 200;
      current_statement__ = 17;
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 17;
      N = 100;
      current_statement__ = 18;
      alpha = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 18;
      alpha = 3;
      current_statement__ = 19;
      sigma = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 19;
      sigma = 1;
      current_statement__ = 20;
      sig_prob = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 20;
      sig_prob = 0.05;
      current_statement__ = 16;
      stan::math::check_greater_or_equal(function__, "M", M, 0);
      current_statement__ = 17;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 20;
      stan::math::check_greater_or_equal(function__, "sig_prob", sig_prob, 0);
      current_statement__ = 20;
      stan::math::check_less_or_equal(function__, "sig_prob", sig_prob, 1);
      current_statement__ = 21;
      stan::math::validate_non_negative_index("X", "M", M);
      current_statement__ = 22;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 23;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 24;
      stan::math::validate_non_negative_index("beta", "M", M);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 0U;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "generate_data_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "generate_data_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      Eigen::Matrix<double, -1, -1> X =
         Eigen::Matrix<double, -1, -1>::Constant(M, N,
           std::numeric_limits<double>::quiet_NaN());
      std::vector<double> y =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double, -1, 1> beta =
         Eigen::Matrix<double, -1, 1>::Constant(M,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 10;
      for (int m = 1; m <= M; ++m) {
        current_statement__ = 8;
        if (stan::math::bernoulli_rng(sig_prob, base_rng__)) {
          current_statement__ = 7;
          if (stan::math::bernoulli_rng(0.5, base_rng__)) {
            current_statement__ = 6;
            stan::model::assign(beta,
              stan::math::normal_rng(10, 1, base_rng__),
              "assigning variable beta", stan::model::index_uni(m));
          } else {
            current_statement__ = 5;
            stan::model::assign(beta,
              stan::math::normal_rng(-10, 1, base_rng__),
              "assigning variable beta", stan::model::index_uni(m));
          }
        } else {
          current_statement__ = 4;
          stan::model::assign(beta,
            stan::math::normal_rng(0, 0.25, base_rng__),
            "assigning variable beta", stan::model::index_uni(m));
        }
      }
      current_statement__ = 15;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 12;
        for (int m = 1; m <= M; ++m) {
          current_statement__ = 11;
          stan::model::assign(X, stan::math::normal_rng(0, 1, base_rng__),
            "assigning variable X", stan::model::index_uni(m),
                                      stan::model::index_uni(n));
        }
        current_statement__ = 13;
        stan::model::assign(y,
          stan::math::normal_rng(
            (stan::math::multiply(
               stan::math::transpose(
                 stan::model::rvalue(X, "X",
                   stan::model::index_min_max(1, M),
                     stan::model::index_uni(n))), beta) + alpha), sigma,
            base_rng__), "assigning variable y", stan::model::index_uni(n));
      }
      out__.write(X);
      out__.write(y);
      out__.write(beta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"X", "y", "beta"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{
                                                                   static_cast<size_t>(M)
                                                                   ,
                                                                   static_cast<size_t>(N)
                                                                   },
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(M)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          for (int sym2__ = 1; sym2__ <= M; ++sym2__) {
            {
              param_names__.emplace_back(std::string() + "X" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
            } 
          }
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= M; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          for (int sym2__ = 1; sym2__ <= M; ++sym2__) {
            {
              param_names__.emplace_back(std::string() + "X" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
            } 
          }
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= M; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"X\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(M) + ",\"cols\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(M) + "},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"X\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(M) + ",\"cols\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(M) + "},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (((M * N) + N) + M);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (((M * N) + N) + M);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 0> names__{};
      const std::array<Eigen::Index, 0> constrain_param_sizes__{};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = generate_data_model_namespace::generate_data_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return generate_data_model_namespace::profiles__;
}

#endif


