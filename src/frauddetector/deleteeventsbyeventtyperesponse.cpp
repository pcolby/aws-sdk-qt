// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventsbyeventtyperesponse.h"
#include "deleteeventsbyeventtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEventsByEventTypeResponse
 * \brief The DeleteEventsByEventTypeResponse class provides an interace for FraudDetector DeleteEventsByEventType responses.
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
 * \sa FraudDetectorClient::deleteEventsByEventType
 */

/*!
 * Constructs a DeleteEventsByEventTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventsByEventTypeResponse::DeleteEventsByEventTypeResponse(
        const DeleteEventsByEventTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteEventsByEventTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteEventsByEventTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventsByEventTypeRequest * DeleteEventsByEventTypeResponse::request() const
{
    Q_D(const DeleteEventsByEventTypeResponse);
    return static_cast<const DeleteEventsByEventTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteEventsByEventType \a response.
 */
void DeleteEventsByEventTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventsByEventTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteEventsByEventTypeResponsePrivate
 * \brief The DeleteEventsByEventTypeResponsePrivate class provides private implementation for DeleteEventsByEventTypeResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEventsByEventTypeResponsePrivate object with public implementation \a q.
 */
DeleteEventsByEventTypeResponsePrivate::DeleteEventsByEventTypeResponsePrivate(
    DeleteEventsByEventTypeResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteEventsByEventType response element from \a xml.
 */
void DeleteEventsByEventTypeResponsePrivate::parseDeleteEventsByEventTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventsByEventTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
