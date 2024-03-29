// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpparma_hello_world
arma::mat rcpparma_hello_world();
RcppExport SEXP _MMIntAdd_rcpparma_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpparma_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_outerproduct
arma::mat rcpparma_outerproduct(const arma::colvec& x);
RcppExport SEXP _MMIntAdd_rcpparma_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_outerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_innerproduct
double rcpparma_innerproduct(const arma::colvec& x);
RcppExport SEXP _MMIntAdd_rcpparma_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_innerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_bothproducts
Rcpp::List rcpparma_bothproducts(const arma::colvec& x);
RcppExport SEXP _MMIntAdd_rcpparma_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}
// elementwise_pow
arma::vec elementwise_pow(const arma::vec& A, const arma::vec& p);
RcppExport SEXP _MMIntAdd_elementwise_pow(SEXP ASEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(elementwise_pow(A, p));
    return rcpp_result_gen;
END_RCPP
}
// TmatL
arma::umat TmatL(const arma::mat& Inspec, const arma::vec& Timepoints);
RcppExport SEXP _MMIntAdd_TmatL(SEXP InspecSEXP, SEXP TimepointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Timepoints(TimepointsSEXP);
    rcpp_result_gen = Rcpp::wrap(TmatL(Inspec, Timepoints));
    return rcpp_result_gen;
END_RCPP
}
// TmatR
arma::umat TmatR(const arma::mat& Inspec, const arma::vec& Timepoints);
RcppExport SEXP _MMIntAdd_TmatR(SEXP InspecSEXP, SEXP TimepointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Timepoints(TimepointsSEXP);
    rcpp_result_gen = Rcpp::wrap(TmatR(Inspec, Timepoints));
    return rcpp_result_gen;
END_RCPP
}
// TmatLR
arma::umat TmatLR(const arma::mat& Inspec, const arma::vec& Timepoints);
RcppExport SEXP _MMIntAdd_TmatLR(SEXP InspecSEXP, SEXP TimepointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Timepoints(TimepointsSEXP);
    rcpp_result_gen = Rcpp::wrap(TmatLR(Inspec, Timepoints));
    return rcpp_result_gen;
END_RCPP
}
// Log_likelihood
double Log_likelihood(const arma::mat& X, const arma::mat& Delta, const arma::mat& mimic, const arma::umat& tL, const arma::umat& tLR, const arma::umat& tR, const arma::vec& beta0, const arma::vec& lambda0);
RcppExport SEXP _MMIntAdd_Log_likelihood(SEXP XSEXP, SEXP DeltaSEXP, SEXP mimicSEXP, SEXP tLSEXP, SEXP tLRSEXP, SEXP tRSEXP, SEXP beta0SEXP, SEXP lambda0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tL(tLSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tLR(tLRSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tR(tRSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda0(lambda0SEXP);
    rcpp_result_gen = Rcpp::wrap(Log_likelihood(X, Delta, mimic, tL, tLR, tR, beta0, lambda0));
    return rcpp_result_gen;
END_RCPP
}
// Update_cpp_Zero
arma::field<arma::mat> Update_cpp_Zero(const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const arma::umat& tL, const arma::umat& tLR, const arma::umat& tR, const arma::mat& beta0, const arma::mat& lambda0);
RcppExport SEXP _MMIntAdd_Update_cpp_Zero(SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP tLSEXP, SEXP tLRSEXP, SEXP tRSEXP, SEXP beta0SEXP, SEXP lambda0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tL(tLSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tLR(tLRSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tR(tRSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    rcpp_result_gen = Rcpp::wrap(Update_cpp_Zero(X, Delta, Inspec, mimic, tL, tLR, tR, beta0, lambda0));
    return rcpp_result_gen;
END_RCPP
}
// Main_func_cpp
arma::field<arma::mat> Main_func_cpp(const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol);
RcppExport SEXP _MMIntAdd_Main_func_cpp(SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    rcpp_result_gen = Rcpp::wrap(Main_func_cpp(X, Delta, Inspec, mimic, Max_iter, Tol));
    return rcpp_result_gen;
END_RCPP
}
// Profile_Update_cpp
arma::mat Profile_Update_cpp(const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const arma::umat& tL, const arma::umat& tLR, const arma::umat& tR, const arma::mat& beta0, const arma::mat& lambda0);
RcppExport SEXP _MMIntAdd_Profile_Update_cpp(SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP tLSEXP, SEXP tLRSEXP, SEXP tRSEXP, SEXP beta0SEXP, SEXP lambda0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tL(tLSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tLR(tLRSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tR(tRSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    rcpp_result_gen = Rcpp::wrap(Profile_Update_cpp(X, Delta, Inspec, mimic, tL, tLR, tR, beta0, lambda0));
    return rcpp_result_gen;
END_RCPP
}
// Profile_Main_cpp
double Profile_Main_cpp(const arma::mat& beta0, const arma::mat& lambda0, const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol);
RcppExport SEXP _MMIntAdd_Profile_Main_cpp(SEXP beta0SEXP, SEXP lambda0SEXP, SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    rcpp_result_gen = Rcpp::wrap(Profile_Main_cpp(beta0, lambda0, X, Delta, Inspec, mimic, Max_iter, Tol));
    return rcpp_result_gen;
END_RCPP
}
// SE_cal_cpp_one
arma::mat SE_cal_cpp_one(const arma::mat& beta0, const arma::mat& lambda0, const double& lgvalue, const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol, const double& hn);
RcppExport SEXP _MMIntAdd_SE_cal_cpp_one(SEXP beta0SEXP, SEXP lambda0SEXP, SEXP lgvalueSEXP, SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP, SEXP hnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< const double& >::type lgvalue(lgvalueSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< const double& >::type hn(hnSEXP);
    rcpp_result_gen = Rcpp::wrap(SE_cal_cpp_one(beta0, lambda0, lgvalue, X, Delta, Inspec, mimic, Max_iter, Tol, hn));
    return rcpp_result_gen;
END_RCPP
}
// SE_cal_cpp
arma::mat SE_cal_cpp(const arma::mat& beta0, const arma::mat& lambda0, const double& lgvalue, const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol, const double& hn);
RcppExport SEXP _MMIntAdd_SE_cal_cpp(SEXP beta0SEXP, SEXP lambda0SEXP, SEXP lgvalueSEXP, SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP, SEXP hnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< const double& >::type lgvalue(lgvalueSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< const double& >::type hn(hnSEXP);
    rcpp_result_gen = Rcpp::wrap(SE_cal_cpp(beta0, lambda0, lgvalue, X, Delta, Inspec, mimic, Max_iter, Tol, hn));
    return rcpp_result_gen;
END_RCPP
}
// SE_cal_cpp_gen
arma::mat SE_cal_cpp_gen(const arma::mat& beta0, const arma::mat& lambda0, const double& lgvalue, const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol, const double& hn);
RcppExport SEXP _MMIntAdd_SE_cal_cpp_gen(SEXP beta0SEXP, SEXP lambda0SEXP, SEXP lgvalueSEXP, SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP, SEXP hnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< const double& >::type lgvalue(lgvalueSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< const double& >::type hn(hnSEXP);
    rcpp_result_gen = Rcpp::wrap(SE_cal_cpp_gen(beta0, lambda0, lgvalue, X, Delta, Inspec, mimic, Max_iter, Tol, hn));
    return rcpp_result_gen;
END_RCPP
}
// Log_likelihood_test
double Log_likelihood_test(const arma::vec& parameter, const arma::mat& X, const arma::mat& Delta, const arma::mat& mimic, const arma::umat& tL, const arma::umat& tLR, const arma::umat& tR);
RcppExport SEXP _MMIntAdd_Log_likelihood_test(SEXP parameterSEXP, SEXP XSEXP, SEXP DeltaSEXP, SEXP mimicSEXP, SEXP tLSEXP, SEXP tLRSEXP, SEXP tRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tL(tLSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tLR(tLRSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tR(tRSEXP);
    rcpp_result_gen = Rcpp::wrap(Log_likelihood_test(parameter, X, Delta, mimic, tL, tLR, tR));
    return rcpp_result_gen;
END_RCPP
}
// Log_likelihood_Dep2
double Log_likelihood_Dep2(const arma::mat& X, const arma::mat& Delta, const arma::mat& mimic, const arma::umat& tL, const arma::umat& tLR, const arma::umat& tR, const arma::vec& beta0, const arma::vec& lambda0);
RcppExport SEXP _MMIntAdd_Log_likelihood_Dep2(SEXP XSEXP, SEXP DeltaSEXP, SEXP mimicSEXP, SEXP tLSEXP, SEXP tLRSEXP, SEXP tRSEXP, SEXP beta0SEXP, SEXP lambda0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tL(tLSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tLR(tLRSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tR(tRSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda0(lambda0SEXP);
    rcpp_result_gen = Rcpp::wrap(Log_likelihood_Dep2(X, Delta, mimic, tL, tLR, tR, beta0, lambda0));
    return rcpp_result_gen;
END_RCPP
}
// Update_cpp_Dep2
arma::field<arma::mat> Update_cpp_Dep2(const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const arma::umat& tL, const arma::umat& tLR, const arma::umat& tR, const arma::mat& beta0, const arma::mat& lambda0);
RcppExport SEXP _MMIntAdd_Update_cpp_Dep2(SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP tLSEXP, SEXP tLRSEXP, SEXP tRSEXP, SEXP beta0SEXP, SEXP lambda0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tL(tLSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tLR(tLRSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tR(tRSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    rcpp_result_gen = Rcpp::wrap(Update_cpp_Dep2(X, Delta, Inspec, mimic, tL, tLR, tR, beta0, lambda0));
    return rcpp_result_gen;
END_RCPP
}
// Main_func_Dep
arma::field<arma::mat> Main_func_Dep(const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol);
RcppExport SEXP _MMIntAdd_Main_func_Dep(SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    rcpp_result_gen = Rcpp::wrap(Main_func_Dep(X, Delta, Inspec, mimic, Max_iter, Tol));
    return rcpp_result_gen;
END_RCPP
}
// Profile_Update_Dep2
arma::mat Profile_Update_Dep2(const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const arma::umat& tL, const arma::umat& tLR, const arma::umat& tR, const arma::mat& beta0, const arma::mat& lambda0);
RcppExport SEXP _MMIntAdd_Profile_Update_Dep2(SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP tLSEXP, SEXP tLRSEXP, SEXP tRSEXP, SEXP beta0SEXP, SEXP lambda0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tL(tLSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tLR(tLRSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type tR(tRSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    rcpp_result_gen = Rcpp::wrap(Profile_Update_Dep2(X, Delta, Inspec, mimic, tL, tLR, tR, beta0, lambda0));
    return rcpp_result_gen;
END_RCPP
}
// Profile_Main_Dep2
double Profile_Main_Dep2(const arma::mat& beta0, const arma::mat& lambda0, const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol);
RcppExport SEXP _MMIntAdd_Profile_Main_Dep2(SEXP beta0SEXP, SEXP lambda0SEXP, SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    rcpp_result_gen = Rcpp::wrap(Profile_Main_Dep2(beta0, lambda0, X, Delta, Inspec, mimic, Max_iter, Tol));
    return rcpp_result_gen;
END_RCPP
}
// SE_cal_Dep_one
arma::mat SE_cal_Dep_one(const arma::mat& beta0, const arma::mat& lambda0, const double& lgvalue, const arma::mat& X, const arma::mat& Delta, const arma::mat& Inspec, const arma::mat& mimic, const int& Max_iter, const double& Tol, const double& hn);
RcppExport SEXP _MMIntAdd_SE_cal_Dep_one(SEXP beta0SEXP, SEXP lambda0SEXP, SEXP lgvalueSEXP, SEXP XSEXP, SEXP DeltaSEXP, SEXP InspecSEXP, SEXP mimicSEXP, SEXP Max_iterSEXP, SEXP TolSEXP, SEXP hnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< const double& >::type lgvalue(lgvalueSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Inspec(InspecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mimic(mimicSEXP);
    Rcpp::traits::input_parameter< const int& >::type Max_iter(Max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type Tol(TolSEXP);
    Rcpp::traits::input_parameter< const double& >::type hn(hnSEXP);
    rcpp_result_gen = Rcpp::wrap(SE_cal_Dep_one(beta0, lambda0, lgvalue, X, Delta, Inspec, mimic, Max_iter, Tol, hn));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MMIntAdd_rcpparma_hello_world", (DL_FUNC) &_MMIntAdd_rcpparma_hello_world, 0},
    {"_MMIntAdd_rcpparma_outerproduct", (DL_FUNC) &_MMIntAdd_rcpparma_outerproduct, 1},
    {"_MMIntAdd_rcpparma_innerproduct", (DL_FUNC) &_MMIntAdd_rcpparma_innerproduct, 1},
    {"_MMIntAdd_rcpparma_bothproducts", (DL_FUNC) &_MMIntAdd_rcpparma_bothproducts, 1},
    {"_MMIntAdd_elementwise_pow", (DL_FUNC) &_MMIntAdd_elementwise_pow, 2},
    {"_MMIntAdd_TmatL", (DL_FUNC) &_MMIntAdd_TmatL, 2},
    {"_MMIntAdd_TmatR", (DL_FUNC) &_MMIntAdd_TmatR, 2},
    {"_MMIntAdd_TmatLR", (DL_FUNC) &_MMIntAdd_TmatLR, 2},
    {"_MMIntAdd_Log_likelihood", (DL_FUNC) &_MMIntAdd_Log_likelihood, 8},
    {"_MMIntAdd_Update_cpp_Zero", (DL_FUNC) &_MMIntAdd_Update_cpp_Zero, 9},
    {"_MMIntAdd_Main_func_cpp", (DL_FUNC) &_MMIntAdd_Main_func_cpp, 6},
    {"_MMIntAdd_Profile_Update_cpp", (DL_FUNC) &_MMIntAdd_Profile_Update_cpp, 9},
    {"_MMIntAdd_Profile_Main_cpp", (DL_FUNC) &_MMIntAdd_Profile_Main_cpp, 8},
    {"_MMIntAdd_SE_cal_cpp_one", (DL_FUNC) &_MMIntAdd_SE_cal_cpp_one, 10},
    {"_MMIntAdd_SE_cal_cpp", (DL_FUNC) &_MMIntAdd_SE_cal_cpp, 10},
    {"_MMIntAdd_SE_cal_cpp_gen", (DL_FUNC) &_MMIntAdd_SE_cal_cpp_gen, 10},
    {"_MMIntAdd_Log_likelihood_test", (DL_FUNC) &_MMIntAdd_Log_likelihood_test, 7},
    {"_MMIntAdd_Log_likelihood_Dep2", (DL_FUNC) &_MMIntAdd_Log_likelihood_Dep2, 8},
    {"_MMIntAdd_Update_cpp_Dep2", (DL_FUNC) &_MMIntAdd_Update_cpp_Dep2, 9},
    {"_MMIntAdd_Main_func_Dep", (DL_FUNC) &_MMIntAdd_Main_func_Dep, 6},
    {"_MMIntAdd_Profile_Update_Dep2", (DL_FUNC) &_MMIntAdd_Profile_Update_Dep2, 9},
    {"_MMIntAdd_Profile_Main_Dep2", (DL_FUNC) &_MMIntAdd_Profile_Main_Dep2, 8},
    {"_MMIntAdd_SE_cal_Dep_one", (DL_FUNC) &_MMIntAdd_SE_cal_Dep_one, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_MMIntAdd(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
