
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace gaussian_process_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 26> locations_array__ = 
{" (found before start of program)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 20, column 3 to column 29)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 24, column 3 to column 49)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 32, column 3 to column 60)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 27, column 4 to column 27)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 28, column 4 to column 51)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 2, column 4 to column 27)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 3, column 19 to column 28)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 3, column 4 to column 30)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 5, column 4 to column 23)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 6, column 15 to column 20)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 6, column 4 to column 22)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 7, column 47 to column 52)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 7, column 4 to column 54)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 9, column 4 to column 22)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 10, column 4 to column 24)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 11, column 4 to column 24)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 15, column 11 to column 20)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 15, column 22 to column 31)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 15, column 4 to column 119)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 16, column 11 to column 20)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 16, column 22 to column 31)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 16, column 4 to column 65)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 20, column 10 to column 19)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 24, column 10 to column 19)",
 " (in 'D:/Studia/MAGISTERKA/semestr_1/data_analytics/lab6/gaussian_process.stan', line 32, column 18 to column 27)"};




class gaussian_process_model final : public model_base_crtp<gaussian_process_model> {

 private:
  int N_predict;
  std::vector<double> x_predict;
  int N_obs;
  std::vector<double> y_obs;
  std::vector<int> observed_idx;
  double rho;
  double alpha;
  double sigma;
  Eigen::Matrix<double, -1, -1> cov__;
  Eigen::Matrix<double, -1, -1> L_cov__; 
  Eigen::Map<Eigen::Matrix<double, -1, -1>> cov{nullptr, 0, 0};
  Eigen::Map<Eigen::Matrix<double, -1, -1>> L_cov{nullptr, 0, 0};
 
 public:
  ~gaussian_process_model() { }
  
  inline std::string model_name() const final { return "gaussian_process_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  gaussian_process_model(stan::io::var_context& context__,
                         unsigned int random_seed__ = 0,
                         std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "gaussian_process_model_namespace::gaussian_process_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 6;
      context__.validate_dims("data initialization","N_predict","int",
           std::vector<size_t>{});
      N_predict = std::numeric_limits<int>::min();
      
      
      current_statement__ = 6;
      N_predict = context__.vals_i("N_predict")[(1 - 1)];
      current_statement__ = 6;
      stan::math::check_greater_or_equal(function__, "N_predict", N_predict,
                                            1);
      current_statement__ = 7;
      stan::math::validate_non_negative_index("x_predict", "N_predict",
                                              N_predict);
      current_statement__ = 8;
      context__.validate_dims("data initialization","x_predict","double",
           std::vector<size_t>{static_cast<size_t>(N_predict)});
      x_predict = 
        std::vector<double>(N_predict, 
          std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 8;
      x_predict = context__.vals_r("x_predict");
      current_statement__ = 9;
      context__.validate_dims("data initialization","N_obs","int",
           std::vector<size_t>{});
      N_obs = std::numeric_limits<int>::min();
      
      
      current_statement__ = 9;
      N_obs = context__.vals_i("N_obs")[(1 - 1)];
      current_statement__ = 9;
      stan::math::check_greater_or_equal(function__, "N_obs", N_obs, 1);
      current_statement__ = 10;
      stan::math::validate_non_negative_index("y_obs", "N_obs", N_obs);
      current_statement__ = 11;
      context__.validate_dims("data initialization","y_obs","double",
           std::vector<size_t>{static_cast<size_t>(N_obs)});
      y_obs = 
        std::vector<double>(N_obs, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 11;
      y_obs = context__.vals_r("y_obs");
      current_statement__ = 12;
      stan::math::validate_non_negative_index("observed_idx", "N_obs", N_obs);
      current_statement__ = 13;
      context__.validate_dims("data initialization","observed_idx","int",
           std::vector<size_t>{static_cast<size_t>(N_obs)});
      observed_idx = 
        std::vector<int>(N_obs, std::numeric_limits<int>::min());
      
      
      current_statement__ = 13;
      observed_idx = context__.vals_i("observed_idx");
      current_statement__ = 13;
      stan::math::check_greater_or_equal(function__, "observed_idx",
                                            observed_idx, 1);
      current_statement__ = 13;
      stan::math::check_less_or_equal(function__, "observed_idx",
                                         observed_idx, N_predict);
      current_statement__ = 14;
      context__.validate_dims("data initialization","rho","double",
           std::vector<size_t>{});
      rho = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 14;
      rho = context__.vals_r("rho")[(1 - 1)];
      current_statement__ = 14;
      stan::math::check_greater_or_equal(function__, "rho", rho, 0);
      current_statement__ = 15;
      context__.validate_dims("data initialization","alpha","double",
           std::vector<size_t>{});
      alpha = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 15;
      alpha = context__.vals_r("alpha")[(1 - 1)];
      current_statement__ = 15;
      stan::math::check_greater_or_equal(function__, "alpha", alpha, 0);
      current_statement__ = 16;
      context__.validate_dims("data initialization","sigma","double",
           std::vector<size_t>{});
      sigma = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 16;
      sigma = context__.vals_r("sigma")[(1 - 1)];
      current_statement__ = 16;
      stan::math::check_greater_or_equal(function__, "sigma", sigma, 0);
      current_statement__ = 17;
      stan::math::validate_non_negative_index("cov", "N_predict", N_predict);
      current_statement__ = 18;
      stan::math::validate_non_negative_index("cov", "N_predict", N_predict);
      current_statement__ = 19;
      cov__ = 
        Eigen::Matrix<double, -1, -1>::Constant(N_predict, N_predict,
          std::numeric_limits<double>::quiet_NaN());
      new (&cov) Eigen::Map<Eigen::Matrix<double, -1, -1>>(cov__.data(), N_predict, N_predict);
        
      
      current_statement__ = 19;
      stan::model::assign(cov,
        stan::math::add(stan::math::cov_exp_quad(x_predict, alpha, rho),
          stan::math::diag_matrix(stan::math::rep_vector(1e-10, N_predict))),
        "assigning variable cov");
      current_statement__ = 20;
      stan::math::validate_non_negative_index("L_cov", "N_predict", N_predict);
      current_statement__ = 21;
      stan::math::validate_non_negative_index("L_cov", "N_predict", N_predict);
      current_statement__ = 22;
      L_cov__ = 
        Eigen::Matrix<double, -1, -1>::Constant(N_predict, N_predict,
          std::numeric_limits<double>::quiet_NaN());
      new (&L_cov) Eigen::Map<Eigen::Matrix<double, -1, -1>>(L_cov__.data(), N_predict, N_predict);
        
      
      current_statement__ = 22;
      stan::model::assign(L_cov, stan::math::cholesky_decompose(cov),
        "assigning variable L_cov");
      current_statement__ = 23;
      stan::math::validate_non_negative_index("f_tilde", "N_predict",
                                              N_predict);
      current_statement__ = 24;
      stan::math::validate_non_negative_index("f_predict", "N_predict",
                                              N_predict);
      current_statement__ = 25;
      stan::math::validate_non_negative_index("y_predict", "N_predict",
                                              N_predict);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = N_predict;
    
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
    static constexpr const char* function__ = "gaussian_process_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<local_scalar_t__, -1, 1> f_tilde =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N_predict,
           DUMMY_VAR__);
      current_statement__ = 1;
      f_tilde = in__.template read<Eigen::Matrix<local_scalar_t__, -1, 1>>(
                  N_predict);
      Eigen::Matrix<local_scalar_t__, -1, 1> f_predict =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N_predict,
           DUMMY_VAR__);
      current_statement__ = 2;
      stan::model::assign(f_predict, stan::math::multiply(L_cov, f_tilde),
        "assigning variable f_predict");
      {
        current_statement__ = 4;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(f_tilde, 0, 1));
        current_statement__ = 5;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(y_obs,
            stan::model::rvalue(f_predict, "f_predict",
              stan::model::index_multi(observed_idx)), sigma));
      }
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
    static constexpr const char* function__ = "gaussian_process_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<double, -1, 1> f_tilde =
         Eigen::Matrix<double, -1, 1>::Constant(N_predict,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      f_tilde = in__.template read<Eigen::Matrix<local_scalar_t__, -1, 1>>(
                  N_predict);
      Eigen::Matrix<double, -1, 1> f_predict =
         Eigen::Matrix<double, -1, 1>::Constant(N_predict,
           std::numeric_limits<double>::quiet_NaN());
      out__.write(f_tilde);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 2;
      stan::model::assign(f_predict, stan::math::multiply(L_cov, f_tilde),
        "assigning variable f_predict");
      if (emit_transformed_parameters__) {
        out__.write(f_predict);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<double> y_predict =
         std::vector<double>(N_predict, 
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 3;
      stan::model::assign(y_predict,
        stan::math::normal_rng(f_predict, sigma, base_rng__),
        "assigning variable y_predict");
      out__.write(y_predict);
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
      Eigen::Matrix<local_scalar_t__, -1, 1> f_tilde =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N_predict,
           DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= N_predict; ++sym1__) {
        stan::model::assign(f_tilde, in__.read<local_scalar_t__>(),
          "assigning variable f_tilde", stan::model::index_uni(sym1__));
      }
      out__.write(f_tilde);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"f_tilde", "f_predict", "y_predict"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{
                                                                   static_cast<size_t>(N_predict)
                                                                   },
      std::vector<size_t>{static_cast<size_t>(N_predict)},
      std::vector<size_t>{static_cast<size_t>(N_predict)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= N_predict; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "f_tilde" + '.' + std::to_string(sym1__));
      } 
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_predict; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "f_predict" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N_predict; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_predict" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= N_predict; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "f_tilde" + '.' + std::to_string(sym1__));
      } 
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_predict; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "f_predict" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N_predict; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_predict" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"f_tilde\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N_predict) + "},\"block\":\"parameters\"},{\"name\":\"f_predict\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N_predict) + "},\"block\":\"transformed_parameters\"},{\"name\":\"y_predict\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_predict) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"f_tilde\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N_predict) + "},\"block\":\"parameters\"},{\"name\":\"f_predict\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N_predict) + "},\"block\":\"transformed_parameters\"},{\"name\":\"y_predict\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_predict) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = N_predict;
      const size_t num_transformed = N_predict;
      const size_t num_gen_quantities = N_predict;
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
      const size_t num_params__ = N_predict;
      const size_t num_transformed = N_predict;
      const size_t num_gen_quantities = N_predict;
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
     constexpr std::array<const char*, 1> names__{"f_tilde"};
      const std::array<Eigen::Index, 1> constrain_param_sizes__{N_predict};
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
using stan_model = gaussian_process_model_namespace::gaussian_process_model;

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
  return gaussian_process_model_namespace::profiles__;
}

#endif

