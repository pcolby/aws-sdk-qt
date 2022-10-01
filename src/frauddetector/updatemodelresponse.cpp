// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemodelresponse.h"
#include "updatemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateModelResponse
 * \brief The UpdateModelResponse class provides an interace for FraudDetector UpdateModel responses.
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
 * \sa FraudDetectorClient::updateModel
 */

/*!
 * Constructs a UpdateModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateModelResponse::UpdateModelResponse(
        const UpdateModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateModelResponsePrivate(this), parent)
{
    setRequest(new UpdateModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateModelRequest * UpdateModelResponse::request() const
{
    Q_D(const UpdateModelResponse);
    return static_cast<const UpdateModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateModel \a response.
 */
void UpdateModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateModelResponsePrivate
 * \brief The UpdateModelResponsePrivate class provides private implementation for UpdateModelResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateModelResponsePrivate object with public implementation \a q.
 */
UpdateModelResponsePrivate::UpdateModelResponsePrivate(
    UpdateModelResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateModel response element from \a xml.
 */
void UpdateModelResponsePrivate::parseUpdateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
