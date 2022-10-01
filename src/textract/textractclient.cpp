// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "textractclient.h"
#include "textractclient_p.h"

#include "core/awssignaturev4.h"
#include "analyzedocumentrequest.h"
#include "analyzedocumentresponse.h"
#include "analyzeexpenserequest.h"
#include "analyzeexpenseresponse.h"
#include "analyzeidrequest.h"
#include "analyzeidresponse.h"
#include "detectdocumenttextrequest.h"
#include "detectdocumenttextresponse.h"
#include "getdocumentanalysisrequest.h"
#include "getdocumentanalysisresponse.h"
#include "getdocumenttextdetectionrequest.h"
#include "getdocumenttextdetectionresponse.h"
#include "getexpenseanalysisrequest.h"
#include "getexpenseanalysisresponse.h"
#include "startdocumentanalysisrequest.h"
#include "startdocumentanalysisresponse.h"
#include "startdocumenttextdetectionrequest.h"
#include "startdocumenttextdetectionresponse.h"
#include "startexpenseanalysisrequest.h"
#include "startexpenseanalysisresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Textract
 * \brief Contains classess for accessing Amazon Textract.
 *
 * \inmodule QtAwsTextract
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::TextractClient
 * \brief The TextractClient class provides access to the Amazon Textract service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTextract
 *
 *  Amazon Textract detects and analyzes text in documents and converts it into machine-readable text. This is the API
 *  reference documentation for Amazon
 */

/*!
 * \brief Constructs a TextractClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TextractClient::TextractClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TextractClientPrivate(this), parent)
{
    Q_D(TextractClient);
    d->apiVersion = QStringLiteral("2018-06-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("textract");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Textract");
    d->serviceName = QStringLiteral("textract");
}

/*!
 * \overload TextractClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TextractClient::TextractClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TextractClientPrivate(this), parent)
{
    Q_D(TextractClient);
    d->apiVersion = QStringLiteral("2018-06-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("textract");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Textract");
    d->serviceName = QStringLiteral("textract");
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * AnalyzeDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Analyzes an input document for relationships between detected items.
 *
 * </p
 *
 * The types of information returned are as follows:
 *
 * </p <ul> <li>
 *
 * Form data (key-value pairs). The related information is returned in two <a>Block</a> objects, each of type
 * <code>KEY_VALUE_SET</code>: a KEY <code>Block</code> object and a VALUE <code>Block</code> object. For example, <i>Name:
 * Ana Silva Carolina</i> contains a key and value. <i>Name:</i> is the key. <i>Ana Silva Carolina</i> is the
 *
 * value> </li> <li>
 *
 * Table and table cell data. A TABLE <code>Block</code> object contains information about a detected table. A CELL
 * <code>Block</code> object is returned for each cell in a
 *
 * table> </li> <li>
 *
 * Lines and words of text. A LINE <code>Block</code> object contains one or more WORD <code>Block</code> objects. All
 * lines and words that are detected in the document are returned (including text that doesn't have a relationship with the
 * value of <code>FeatureTypes</code>).
 *
 * </p </li> <li>
 *
 * Queries.A QUERIES_RESULT Block object contains the answer to the query, the alias associated and an ID that connect it
 * to the query asked. This Block also contains a location and attached confidence
 *
 * score> </li> </ul>
 *
 * Selection elements such as check boxes and option buttons (radio buttons) can be detected in form data and in tables. A
 * SELECTION_ELEMENT <code>Block</code> object contains information about a selection element, including the selection
 *
 * status>
 *
 * You can choose which type of analysis to perform by specifying the <code>FeatureTypes</code> list.
 *
 * </p
 *
 * The output is returned in a list of <code>Block</code>
 *
 * objects>
 *
 * <code>AnalyzeDocument</code> is a synchronous operation. To analyze documents asynchronously, use
 *
 * <a>StartDocumentAnalysis</a>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
 * Text
 */
AnalyzeDocumentResponse * TextractClient::analyzeDocument(const AnalyzeDocumentRequest &request)
{
    return qobject_cast<AnalyzeDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * AnalyzeExpenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>AnalyzeExpense</code> synchronously analyzes an input document for financially related relationships between
 *
 * text>
 *
 * Information is returned as <code>ExpenseDocuments</code> and seperated as
 *
 * follows> <ul> <li>
 *
 * <code>LineItemGroups</code>- A data set containing <code>LineItems</code> which store information about the lines of
 * text, such as an item purchased and its price on a
 *
 * receipt> </li> <li>
 *
 * <code>SummaryFields</code>- Contains all other information a receipt, such as header information or the vendors
 */
AnalyzeExpenseResponse * TextractClient::analyzeExpense(const AnalyzeExpenseRequest &request)
{
    return qobject_cast<AnalyzeExpenseResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * AnalyzeIDResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Analyzes identity documents for relevant information. This information is extracted and returned as
 * <code>IdentityDocumentFields</code>, which records both the normalized field and value of the extracted text.Unlike
 * other Amazon Textract operations, <code>AnalyzeID</code> doesn't return any Geometry
 */
AnalyzeIDResponse * TextractClient::analyzeID(const AnalyzeIDRequest &request)
{
    return qobject_cast<AnalyzeIDResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * DetectDocumentTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects text in the input document. Amazon Textract can detect lines of text and the words that make up a line of text.
 * The input document must be an image in JPEG, PNG, PDF, or TIFF format. <code>DetectDocumentText</code> returns the
 * detected text in an array of <a>Block</a> objects.
 *
 * </p
 *
 * Each document page has as an associated <code>Block</code> of type PAGE. Each PAGE <code>Block</code> object is the
 * parent of LINE <code>Block</code> objects that represent the lines of detected text on a page. A LINE <code>Block</code>
 * object is a parent for each word that makes up the line. Words are represented by <code>Block</code> objects of type
 *
 * WORD>
 *
 * <code>DetectDocumentText</code> is a synchronous operation. To analyze documents asynchronously, use
 *
 * <a>StartDocumentTextDetection</a>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
 * Text
 */
DetectDocumentTextResponse * TextractClient::detectDocumentText(const DetectDocumentTextRequest &request)
{
    return qobject_cast<DetectDocumentTextResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * GetDocumentAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the results for an Amazon Textract asynchronous operation that analyzes text in a
 *
 * document>
 *
 * You start asynchronous text analysis by calling <a>StartDocumentAnalysis</a>, which returns a job identifier
 * (<code>JobId</code>). When the text analysis operation finishes, Amazon Textract publishes a completion status to the
 * Amazon Simple Notification Service (Amazon SNS) topic that's registered in the initial call to
 * <code>StartDocumentAnalysis</code>. To get the results of the text-detection operation, first check that the status
 * value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <code>GetDocumentAnalysis</code>, and
 * pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * <code>StartDocumentAnalysis</code>>
 *
 * <code>GetDocumentAnalysis</code> returns an array of <a>Block</a> objects. The following types of information are
 * returned:
 *
 * </p <ul> <li>
 *
 * Form data (key-value pairs). The related information is returned in two <a>Block</a> objects, each of type
 * <code>KEY_VALUE_SET</code>: a KEY <code>Block</code> object and a VALUE <code>Block</code> object. For example, <i>Name:
 * Ana Silva Carolina</i> contains a key and value. <i>Name:</i> is the key. <i>Ana Silva Carolina</i> is the
 *
 * value> </li> <li>
 *
 * Table and table cell data. A TABLE <code>Block</code> object contains information about a detected table. A CELL
 * <code>Block</code> object is returned for each cell in a
 *
 * table> </li> <li>
 *
 * Lines and words of text. A LINE <code>Block</code> object contains one or more WORD <code>Block</code> objects. All
 * lines and words that are detected in the document are returned (including text that doesn't have a relationship with the
 * value of the <code>StartDocumentAnalysis</code> <code>FeatureTypes</code> input parameter).
 *
 * </p </li> <li>
 *
 * Queries. A QUERIES_RESULT Block object contains the answer to the query, the alias associated and an ID that connect it
 * to the query asked. This Block also contains a location and attached confidence
 *
 * scor> </li> </ul>
 *
 * Selection elements such as check boxes and option buttons (radio buttons) can be detected in form data and in tables. A
 * SELECTION_ELEMENT <code>Block</code> object contains information about a selection element, including the selection
 *
 * status>
 *
 * Use the <code>MaxResults</code> parameter to limit the number of blocks that are returned. If there are more results
 * than specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a
 * pagination token for getting the next set of results. To get the next page of results, call
 * <code>GetDocumentAnalysis</code>, and populate the <code>NextToken</code> request parameter with the token value that's
 * returned from the previous call to
 *
 * <code>GetDocumentAnalysis</code>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
 * Text
 */
GetDocumentAnalysisResponse * TextractClient::getDocumentAnalysis(const GetDocumentAnalysisRequest &request)
{
    return qobject_cast<GetDocumentAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * GetDocumentTextDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the results for an Amazon Textract asynchronous operation that detects text in a document. Amazon Textract can
 * detect lines of text and the words that make up a line of
 *
 * text>
 *
 * You start asynchronous text detection by calling <a>StartDocumentTextDetection</a>, which returns a job identifier
 * (<code>JobId</code>). When the text detection operation finishes, Amazon Textract publishes a completion status to the
 * Amazon Simple Notification Service (Amazon SNS) topic that's registered in the initial call to
 * <code>StartDocumentTextDetection</code>. To get the results of the text-detection operation, first check that the status
 * value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <code>GetDocumentTextDetection</code>,
 * and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * <code>StartDocumentTextDetection</code>>
 *
 * <code>GetDocumentTextDetection</code> returns an array of <a>Block</a> objects.
 *
 * </p
 *
 * Each document page has as an associated <code>Block</code> of type PAGE. Each PAGE <code>Block</code> object is the
 * parent of LINE <code>Block</code> objects that represent the lines of detected text on a page. A LINE <code>Block</code>
 * object is a parent for each word that makes up the line. Words are represented by <code>Block</code> objects of type
 *
 * WORD>
 *
 * Use the MaxResults parameter to limit the number of blocks that are returned. If there are more results than specified
 * in <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token
 * for getting the next set of results. To get the next page of results, call <code>GetDocumentTextDetection</code>, and
 * populate the <code>NextToken</code> request parameter with the token value that's returned from the previous call to
 *
 * <code>GetDocumentTextDetection</code>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
 * Text
 */
GetDocumentTextDetectionResponse * TextractClient::getDocumentTextDetection(const GetDocumentTextDetectionRequest &request)
{
    return qobject_cast<GetDocumentTextDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * GetExpenseAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the results for an Amazon Textract asynchronous operation that analyzes invoices and receipts. Amazon Textract
 * finds contact information, items purchased, and vendor name, from input invoices and
 *
 * receipts>
 *
 * You start asynchronous invoice/receipt analysis by calling <a>StartExpenseAnalysis</a>, which returns a job identifier
 * (<code>JobId</code>). Upon completion of the invoice/receipt analysis, Amazon Textract publishes the completion status
 * to the Amazon Simple Notification Service (Amazon SNS) topic. This topic must be registered in the initial call to
 * <code>StartExpenseAnalysis</code>. To get the results of the invoice/receipt analysis operation, first ensure that the
 * status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call <code>GetExpenseAnalysis</code>,
 * and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * <code>StartExpenseAnalysis</code>>
 *
 * Use the MaxResults parameter to limit the number of blocks that are returned. If there are more results than specified
 * in <code>MaxResults</code>, the value of <code>NextToken</code> in the operation response contains a pagination token
 * for getting the next set of results. To get the next page of results, call <code>GetExpenseAnalysis</code>, and populate
 * the <code>NextToken</code> request parameter with the token value that's returned from the previous call to
 *
 * <code>GetExpenseAnalysis</code>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/invoices-receipts.html">Analyzing
 * Invoices and
 */
GetExpenseAnalysisResponse * TextractClient::getExpenseAnalysis(const GetExpenseAnalysisRequest &request)
{
    return qobject_cast<GetExpenseAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * StartDocumentAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the asynchronous analysis of an input document for relationships between detected items such as key-value pairs,
 * tables, and selection
 *
 * elements>
 *
 * <code>StartDocumentAnalysis</code> can analyze text in documents that are in JPEG, PNG, TIFF, and PDF format. The
 * documents are stored in an Amazon S3 bucket. Use <a>DocumentLocation</a> to specify the bucket name and file name of the
 * document.
 *
 * </p
 *
 * <code>StartDocumentAnalysis</code> returns a job identifier (<code>JobId</code>) that you use to get the results of the
 * operation. When text analysis is finished, Amazon Textract publishes a completion status to the Amazon Simple
 * Notification Service (Amazon SNS) topic that you specify in <code>NotificationChannel</code>. To get the results of the
 * text analysis operation, first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>.
 * If so, call <a>GetDocumentAnalysis</a>, and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * <code>StartDocumentAnalysis</code>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
 * Text
 */
StartDocumentAnalysisResponse * TextractClient::startDocumentAnalysis(const StartDocumentAnalysisRequest &request)
{
    return qobject_cast<StartDocumentAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * StartDocumentTextDetectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the asynchronous detection of text in a document. Amazon Textract can detect lines of text and the words that
 * make up a line of
 *
 * text>
 *
 * <code>StartDocumentTextDetection</code> can analyze text in documents that are in JPEG, PNG, TIFF, and PDF format. The
 * documents are stored in an Amazon S3 bucket. Use <a>DocumentLocation</a> to specify the bucket name and file name of the
 * document.
 *
 * </p
 *
 * <code>StartTextDetection</code> returns a job identifier (<code>JobId</code>) that you use to get the results of the
 * operation. When text detection is finished, Amazon Textract publishes a completion status to the Amazon Simple
 * Notification Service (Amazon SNS) topic that you specify in <code>NotificationChannel</code>. To get the results of the
 * text detection operation, first check that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>.
 * If so, call <a>GetDocumentTextDetection</a>, and pass the job identifier (<code>JobId</code>) from the initial call to
 *
 * <code>StartDocumentTextDetection</code>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
 * Text
 */
StartDocumentTextDetectionResponse * TextractClient::startDocumentTextDetection(const StartDocumentTextDetectionRequest &request)
{
    return qobject_cast<StartDocumentTextDetectionResponse *>(send(request));
}

/*!
 * Sends \a request to the TextractClient service, and returns a pointer to an
 * StartExpenseAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the asynchronous analysis of invoices or receipts for data like contact information, items purchased, and vendor
 *
 * names>
 *
 * <code>StartExpenseAnalysis</code> can analyze text in documents that are in JPEG, PNG, and PDF format. The documents
 * must be stored in an Amazon S3 bucket. Use the <a>DocumentLocation</a> parameter to specify the name of your S3 bucket
 * and the name of the document in that bucket.
 *
 * </p
 *
 * <code>StartExpenseAnalysis</code> returns a job identifier (<code>JobId</code>) that you will provide to
 * <code>GetExpenseAnalysis</code> to retrieve the results of the operation. When the analysis of the input
 * invoices/receipts is finished, Amazon Textract publishes a completion status to the Amazon Simple Notification Service
 * (Amazon SNS) topic that you provide to the <code>NotificationChannel</code>. To obtain the results of the invoice and
 * receipt analysis operation, ensure that the status value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If
 * so, call <a>GetExpenseAnalysis</a>, and pass the job identifier (<code>JobId</code>) that was returned by your call to
 *
 * <code>StartExpenseAnalysis</code>>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/textract/latest/dg/invoice-receipts.html">Analyzing
 * Invoices and
 */
StartExpenseAnalysisResponse * TextractClient::startExpenseAnalysis(const StartExpenseAnalysisRequest &request)
{
    return qobject_cast<StartExpenseAnalysisResponse *>(send(request));
}

/*!
 * \class QtAws::Textract::TextractClientPrivate
 * \brief The TextractClientPrivate class provides private implementation for TextractClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a TextractClientPrivate object with public implementation \a q.
 */
TextractClientPrivate::TextractClientPrivate(TextractClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Textract
} // namespace QtAws
