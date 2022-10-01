// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoutcomesresponse.h"
#include "getoutcomesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetOutcomesResponse
 * \brief The GetOutcomesResponse class provides an interace for FraudDetector GetOutcomes responses.
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
 * \sa FraudDetectorClient::getOutcomes
 */

/*!
 * Constructs a GetOutcomesResponse object for \a reply to \a request, with parent \a parent.
 */
GetOutcomesResponse::GetOutcomesResponse(
        const GetOutcomesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetOutcomesResponsePrivate(this), parent)
{
    setRequest(new GetOutcomesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOutcomesRequest * GetOutcomesResponse::request() const
{
    Q_D(const GetOutcomesResponse);
    return static_cast<const GetOutcomesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetOutcomes \a response.
 */
void GetOutcomesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOutcomesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetOutcomesResponsePrivate
 * \brief The GetOutcomesResponsePrivate class provides private implementation for GetOutcomesResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetOutcomesResponsePrivate object with public implementation \a q.
 */
GetOutcomesResponsePrivate::GetOutcomesResponsePrivate(
    GetOutcomesResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetOutcomes response element from \a xml.
 */
void GetOutcomesResponsePrivate::parseGetOutcomesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOutcomesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
