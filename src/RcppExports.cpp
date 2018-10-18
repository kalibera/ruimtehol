// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// textspace_help
void textspace_help(std::string type);
RcppExport SEXP _ruimtehol_textspace_help(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    textspace_help(type);
    return R_NilValue;
END_RCPP
}
// textspace_args
Rcpp::List textspace_args(SEXP textspacemodel);
RcppExport SEXP _ruimtehol_textspace_args(SEXP textspacemodelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_args(textspacemodel));
    return rcpp_result_gen;
END_RCPP
}
// textspace
Rcpp::List textspace(std::string model, bool save, /* Arguments specific for training */                      std::string trainFile, std::string initModel, std::string validationFile, /* Arguments specific for test  */                      std::string testFile, std::string basedoc, std::string predictionFile, /* Rest are the starspace defaults from Starspace/src/utils/args */                      std::string fileFormat, std::string label, std::string loss, std::string similarity, double lr, double termLr, double norm, double margin, double initRandSd, double p, double dropoutLHS, double dropoutRHS, double wordWeight, size_t dim, int epoch, int ws, int maxTrainTime, int validationPatience, int thread, int maxNegSamples, int negSearchLimit, int minCount, int minCountLabel, int bucket, int ngrams, int trainMode, int K, bool verbose, bool debug, bool adagrad, bool normalizeText, bool saveEveryEpoch, bool saveTempModel, bool shareEmb, bool useWeight, bool trainWord, bool excludeLHS);
RcppExport SEXP _ruimtehol_textspace(SEXP modelSEXP, SEXP saveSEXP, SEXP trainFileSEXP, SEXP initModelSEXP, SEXP validationFileSEXP, SEXP testFileSEXP, SEXP basedocSEXP, SEXP predictionFileSEXP, SEXP fileFormatSEXP, SEXP labelSEXP, SEXP lossSEXP, SEXP similaritySEXP, SEXP lrSEXP, SEXP termLrSEXP, SEXP normSEXP, SEXP marginSEXP, SEXP initRandSdSEXP, SEXP pSEXP, SEXP dropoutLHSSEXP, SEXP dropoutRHSSEXP, SEXP wordWeightSEXP, SEXP dimSEXP, SEXP epochSEXP, SEXP wsSEXP, SEXP maxTrainTimeSEXP, SEXP validationPatienceSEXP, SEXP threadSEXP, SEXP maxNegSamplesSEXP, SEXP negSearchLimitSEXP, SEXP minCountSEXP, SEXP minCountLabelSEXP, SEXP bucketSEXP, SEXP ngramsSEXP, SEXP trainModeSEXP, SEXP KSEXP, SEXP verboseSEXP, SEXP debugSEXP, SEXP adagradSEXP, SEXP normalizeTextSEXP, SEXP saveEveryEpochSEXP, SEXP saveTempModelSEXP, SEXP shareEmbSEXP, SEXP useWeightSEXP, SEXP trainWordSEXP, SEXP excludeLHSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< bool >::type save(saveSEXP);
    Rcpp::traits::input_parameter< /* Arguments specific for training */                      std::string >::type trainFile(trainFileSEXP);
    Rcpp::traits::input_parameter< std::string >::type initModel(initModelSEXP);
    Rcpp::traits::input_parameter< std::string >::type validationFile(validationFileSEXP);
    Rcpp::traits::input_parameter< /* Arguments specific for test  */                      std::string >::type testFile(testFileSEXP);
    Rcpp::traits::input_parameter< std::string >::type basedoc(basedocSEXP);
    Rcpp::traits::input_parameter< std::string >::type predictionFile(predictionFileSEXP);
    Rcpp::traits::input_parameter< /* Rest are the starspace defaults from Starspace/src/utils/args */                      std::string >::type fileFormat(fileFormatSEXP);
    Rcpp::traits::input_parameter< std::string >::type label(labelSEXP);
    Rcpp::traits::input_parameter< std::string >::type loss(lossSEXP);
    Rcpp::traits::input_parameter< std::string >::type similarity(similaritySEXP);
    Rcpp::traits::input_parameter< double >::type lr(lrSEXP);
    Rcpp::traits::input_parameter< double >::type termLr(termLrSEXP);
    Rcpp::traits::input_parameter< double >::type norm(normSEXP);
    Rcpp::traits::input_parameter< double >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< double >::type initRandSd(initRandSdSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type dropoutLHS(dropoutLHSSEXP);
    Rcpp::traits::input_parameter< double >::type dropoutRHS(dropoutRHSSEXP);
    Rcpp::traits::input_parameter< double >::type wordWeight(wordWeightSEXP);
    Rcpp::traits::input_parameter< size_t >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type epoch(epochSEXP);
    Rcpp::traits::input_parameter< int >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< int >::type maxTrainTime(maxTrainTimeSEXP);
    Rcpp::traits::input_parameter< int >::type validationPatience(validationPatienceSEXP);
    Rcpp::traits::input_parameter< int >::type thread(threadSEXP);
    Rcpp::traits::input_parameter< int >::type maxNegSamples(maxNegSamplesSEXP);
    Rcpp::traits::input_parameter< int >::type negSearchLimit(negSearchLimitSEXP);
    Rcpp::traits::input_parameter< int >::type minCount(minCountSEXP);
    Rcpp::traits::input_parameter< int >::type minCountLabel(minCountLabelSEXP);
    Rcpp::traits::input_parameter< int >::type bucket(bucketSEXP);
    Rcpp::traits::input_parameter< int >::type ngrams(ngramsSEXP);
    Rcpp::traits::input_parameter< int >::type trainMode(trainModeSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    Rcpp::traits::input_parameter< bool >::type adagrad(adagradSEXP);
    Rcpp::traits::input_parameter< bool >::type normalizeText(normalizeTextSEXP);
    Rcpp::traits::input_parameter< bool >::type saveEveryEpoch(saveEveryEpochSEXP);
    Rcpp::traits::input_parameter< bool >::type saveTempModel(saveTempModelSEXP);
    Rcpp::traits::input_parameter< bool >::type shareEmb(shareEmbSEXP);
    Rcpp::traits::input_parameter< bool >::type useWeight(useWeightSEXP);
    Rcpp::traits::input_parameter< bool >::type trainWord(trainWordSEXP);
    Rcpp::traits::input_parameter< bool >::type excludeLHS(excludeLHSSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace(model, save, trainFile, initModel, validationFile, testFile, basedoc, predictionFile, fileFormat, label, loss, similarity, lr, termLr, norm, margin, initRandSd, p, dropoutLHS, dropoutRHS, wordWeight, dim, epoch, ws, maxTrainTime, validationPatience, thread, maxNegSamples, negSearchLimit, minCount, minCountLabel, bucket, ngrams, trainMode, K, verbose, debug, adagrad, normalizeText, saveEveryEpoch, saveTempModel, shareEmb, useWeight, trainWord, excludeLHS));
    return rcpp_result_gen;
END_RCPP
}
// textspace_evaluate
Rcpp::List textspace_evaluate(SEXP textspacemodel, std::string testFile, std::string basedoc, std::string predictionFile, int K);
RcppExport SEXP _ruimtehol_textspace_evaluate(SEXP textspacemodelSEXP, SEXP testFileSEXP, SEXP basedocSEXP, SEXP predictionFileSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    Rcpp::traits::input_parameter< std::string >::type testFile(testFileSEXP);
    Rcpp::traits::input_parameter< std::string >::type basedoc(basedocSEXP);
    Rcpp::traits::input_parameter< std::string >::type predictionFile(predictionFileSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_evaluate(textspacemodel, testFile, basedoc, predictionFile, K));
    return rcpp_result_gen;
END_RCPP
}
// textspace_load_model
Rcpp::List textspace_load_model(const std::string file_model, bool is_tsv);
RcppExport SEXP _ruimtehol_textspace_load_model(SEXP file_modelSEXP, SEXP is_tsvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type file_model(file_modelSEXP);
    Rcpp::traits::input_parameter< bool >::type is_tsv(is_tsvSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_load_model(file_model, is_tsv));
    return rcpp_result_gen;
END_RCPP
}
// textspace_save_model
std::string textspace_save_model(SEXP textspacemodel, std::string file, bool as_tsv);
RcppExport SEXP _ruimtehol_textspace_save_model(SEXP textspacemodelSEXP, SEXP fileSEXP, SEXP as_tsvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< bool >::type as_tsv(as_tsvSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_save_model(textspacemodel, file, as_tsv));
    return rcpp_result_gen;
END_RCPP
}
// textspace_dictionary
Rcpp::List textspace_dictionary(SEXP textspacemodel);
RcppExport SEXP _ruimtehol_textspace_dictionary(SEXP textspacemodelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_dictionary(textspacemodel));
    return rcpp_result_gen;
END_RCPP
}
// textspace_embedding_doc
Rcpp::NumericMatrix textspace_embedding_doc(SEXP textspacemodel, Rcpp::StringVector x);
RcppExport SEXP _ruimtehol_textspace_embedding_doc(SEXP textspacemodelSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_embedding_doc(textspacemodel, x));
    return rcpp_result_gen;
END_RCPP
}
// textspace_embedding_ngram
Rcpp::NumericMatrix textspace_embedding_ngram(SEXP textspacemodel, Rcpp::StringVector x);
RcppExport SEXP _ruimtehol_textspace_embedding_ngram(SEXP textspacemodelSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_embedding_ngram(textspacemodel, x));
    return rcpp_result_gen;
END_RCPP
}
// textspace_predict
Rcpp::List textspace_predict(SEXP textspacemodel, std::string input, Rcpp::StringVector basedoc, std::string sep);
RcppExport SEXP _ruimtehol_textspace_predict(SEXP textspacemodelSEXP, SEXP inputSEXP, SEXP basedocSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type basedoc(basedocSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_predict(textspacemodel, input, basedoc, sep));
    return rcpp_result_gen;
END_RCPP
}
// textspace_knn
Rcpp::List textspace_knn(SEXP textspacemodel, const std::string line, int k);
RcppExport SEXP _ruimtehol_textspace_knn(SEXP textspacemodelSEXP, SEXP lineSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type textspacemodel(textspacemodelSEXP);
    Rcpp::traits::input_parameter< const std::string >::type line(lineSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(textspace_knn(textspacemodel, line, k));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ruimtehol_textspace_help", (DL_FUNC) &_ruimtehol_textspace_help, 1},
    {"_ruimtehol_textspace_args", (DL_FUNC) &_ruimtehol_textspace_args, 1},
    {"_ruimtehol_textspace", (DL_FUNC) &_ruimtehol_textspace, 45},
    {"_ruimtehol_textspace_evaluate", (DL_FUNC) &_ruimtehol_textspace_evaluate, 5},
    {"_ruimtehol_textspace_load_model", (DL_FUNC) &_ruimtehol_textspace_load_model, 2},
    {"_ruimtehol_textspace_save_model", (DL_FUNC) &_ruimtehol_textspace_save_model, 3},
    {"_ruimtehol_textspace_dictionary", (DL_FUNC) &_ruimtehol_textspace_dictionary, 1},
    {"_ruimtehol_textspace_embedding_doc", (DL_FUNC) &_ruimtehol_textspace_embedding_doc, 2},
    {"_ruimtehol_textspace_embedding_ngram", (DL_FUNC) &_ruimtehol_textspace_embedding_ngram, 2},
    {"_ruimtehol_textspace_predict", (DL_FUNC) &_ruimtehol_textspace_predict, 4},
    {"_ruimtehol_textspace_knn", (DL_FUNC) &_ruimtehol_textspace_knn, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ruimtehol(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
