// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convertReactions
int convertReactions(SEXP infile, SEXP outfile);
RcppExport SEXP Rcppsbml_convertReactions(SEXP infileSEXP, SEXP outfileSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type outfile(outfileSEXP);
    __result = Rcpp::wrap(convertReactions(infile, outfile));
    return __result;
END_RCPP
}
// getModel
SEXP getModel(SEXP filename);
RcppExport SEXP Rcppsbml_getModel(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type filename(filenameSEXP);
    __result = Rcpp::wrap(getModel(filename));
    return __result;
END_RCPP
}
// printSBML
int printSBML(SEXP filename);
RcppExport SEXP Rcppsbml_printSBML(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type filename(filenameSEXP);
    __result = Rcpp::wrap(printSBML(filename));
    return __result;
END_RCPP
}
// echoSBML
int echoSBML(SEXP filename);
RcppExport SEXP Rcppsbml_echoSBML(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type filename(filenameSEXP);
    __result = Rcpp::wrap(echoSBML(filename));
    return __result;
END_RCPP
}
