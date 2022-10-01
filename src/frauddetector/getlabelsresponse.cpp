// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlabelsresponse.h"
#include "getlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetLabelsResponse
 * \brief The GetLabelsResponse class provides an interace for FraudDetector GetLabels responses.
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
 * \sa FraudDetectorClient::getLabels
 */

/*!
 * Constructs a GetLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetLabelsResponse::GetLabelsResponse(
        const GetLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetLabelsResponsePrivate(this), parent)
{
    setRequest(new GetLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLabelsRequest * GetLabelsResponse::request() const
{
    Q_D(const GetLabelsResponse);
    return static_cast<const GetLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetLabels \a response.
 */
void GetLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetLabelsResponsePrivate
 * \brief The GetLabelsResponsePrivate class provides private implementation for GetLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetLabelsResponsePrivate object with public implementation \a q.
 */
GetLabelsResponsePrivate::GetLabelsResponsePrivate(
    GetLabelsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetLabels response element from \a xml.
 */
void GetLabelsResponsePrivate::parseGetLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
