// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TEXTRACTCLIENT_H
#define QTAWS_TEXTRACTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstextractglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Textract {

class TextractClientPrivate;
class AnalyzeDocumentRequest;
class AnalyzeDocumentResponse;
class AnalyzeExpenseRequest;
class AnalyzeExpenseResponse;
class AnalyzeIDRequest;
class AnalyzeIDResponse;
class DetectDocumentTextRequest;
class DetectDocumentTextResponse;
class GetDocumentAnalysisRequest;
class GetDocumentAnalysisResponse;
class GetDocumentTextDetectionRequest;
class GetDocumentTextDetectionResponse;
class GetExpenseAnalysisRequest;
class GetExpenseAnalysisResponse;
class StartDocumentAnalysisRequest;
class StartDocumentAnalysisResponse;
class StartDocumentTextDetectionRequest;
class StartDocumentTextDetectionResponse;
class StartExpenseAnalysisRequest;
class StartExpenseAnalysisResponse;

class QTAWSTEXTRACT_EXPORT TextractClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TextractClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TextractClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AnalyzeDocumentResponse * analyzeDocument(const AnalyzeDocumentRequest &request);
    AnalyzeExpenseResponse * analyzeExpense(const AnalyzeExpenseRequest &request);
    AnalyzeIDResponse * analyzeID(const AnalyzeIDRequest &request);
    DetectDocumentTextResponse * detectDocumentText(const DetectDocumentTextRequest &request);
    GetDocumentAnalysisResponse * getDocumentAnalysis(const GetDocumentAnalysisRequest &request);
    GetDocumentTextDetectionResponse * getDocumentTextDetection(const GetDocumentTextDetectionRequest &request);
    GetExpenseAnalysisResponse * getExpenseAnalysis(const GetExpenseAnalysisRequest &request);
    StartDocumentAnalysisResponse * startDocumentAnalysis(const StartDocumentAnalysisRequest &request);
    StartDocumentTextDetectionResponse * startDocumentTextDetection(const StartDocumentTextDetectionRequest &request);
    StartExpenseAnalysisResponse * startExpenseAnalysis(const StartExpenseAnalysisRequest &request);

private:
    Q_DECLARE_PRIVATE(TextractClient)
    Q_DISABLE_COPY(TextractClient)

};

} // namespace Textract
} // namespace QtAws

#endif
