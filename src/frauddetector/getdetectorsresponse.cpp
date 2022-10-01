// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdetectorsresponse.h"
#include "getdetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetDetectorsResponse
 * \brief The GetDetectorsResponse class provides an interace for FraudDetector GetDetectors responses.
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
 * \sa FraudDetectorClient::getDetectors
 */

/*!
 * Constructs a GetDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDetectorsResponse::GetDetectorsResponse(
        const GetDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetDetectorsResponsePrivate(this), parent)
{
    setRequest(new GetDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDetectorsRequest * GetDetectorsResponse::request() const
{
    Q_D(const GetDetectorsResponse);
    return static_cast<const GetDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetDetectors \a response.
 */
void GetDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetDetectorsResponsePrivate
 * \brief The GetDetectorsResponsePrivate class provides private implementation for GetDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetDetectorsResponsePrivate object with public implementation \a q.
 */
GetDetectorsResponsePrivate::GetDetectorsResponsePrivate(
    GetDetectorsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetDetectors response element from \a xml.
 */
void GetDetectorsResponsePrivate::parseGetDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
