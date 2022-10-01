// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebatchimportjobresponse.h"
#include "deletebatchimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteBatchImportJobResponse
 * \brief The DeleteBatchImportJobResponse class provides an interace for FraudDetector DeleteBatchImportJob responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 * 
 *  Guide</a>>
 * 
 *  We provide the Query API as well as AWS software development kits (SDK) for Amazon Fraud Detector in Java and Python
 *  programming
 * 
 *  languages>
 * 
 *  The Amazon Fraud Detector Query API provides HTTPS requests that use the HTTP verb GET or POST and a Query parameter
 *  <code>Action</code>. AWS SDK provides libraries, sample code, tutorials, and other resources for software developers who
 *  prefer to build applications using language-specific APIs instead of submitting a request over HTTP or HTTPS. These
 *  libraries provide basic functions that automatically take care of tasks such as cryptographically signing your requests,
 *  retrying requests, and handling error responses, so that it is easier for you to get started. For more information about
 *  the AWS SDKs, see <a href="https://docs.aws.amazon.com/https:/aws.amazon.com/tools/">Tools to build on AWS</a>.
 *
 * \sa FraudDetectorClient::deleteBatchImportJob
 */

/*!
 * Constructs a DeleteBatchImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBatchImportJobResponse::DeleteBatchImportJobResponse(
        const DeleteBatchImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteBatchImportJobResponsePrivate(this), parent)
{
    setRequest(new DeleteBatchImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBatchImportJobRequest * DeleteBatchImportJobResponse::request() const
{
    Q_D(const DeleteBatchImportJobResponse);
    return static_cast<const DeleteBatchImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteBatchImportJob \a response.
 */
void DeleteBatchImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBatchImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteBatchImportJobResponsePrivate
 * \brief The DeleteBatchImportJobResponsePrivate class provides private implementation for DeleteBatchImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteBatchImportJobResponsePrivate object with public implementation \a q.
 */
DeleteBatchImportJobResponsePrivate::DeleteBatchImportJobResponsePrivate(
    DeleteBatchImportJobResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteBatchImportJob response element from \a xml.
 */
void DeleteBatchImportJobResponsePrivate::parseDeleteBatchImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBatchImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
