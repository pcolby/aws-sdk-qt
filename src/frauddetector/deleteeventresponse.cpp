/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteeventresponse.h"
#include "deleteeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEventResponse
 * \brief The DeleteEventResponse class provides an interace for FraudDetector DeleteEvent responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteEvent
 */

/*!
 * Constructs a DeleteEventResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventResponse::DeleteEventResponse(
        const DeleteEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteEventResponsePrivate(this), parent)
{
    setRequest(new DeleteEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventRequest * DeleteEventResponse::request() const
{
    return static_cast<const DeleteEventRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteEvent \a response.
 */
void DeleteEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteEventResponsePrivate
 * \brief The DeleteEventResponsePrivate class provides private implementation for DeleteEventResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEventResponsePrivate object with public implementation \a q.
 */
DeleteEventResponsePrivate::DeleteEventResponsePrivate(
    DeleteEventResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteEvent response element from \a xml.
 */
void DeleteEventResponsePrivate::parseDeleteEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
