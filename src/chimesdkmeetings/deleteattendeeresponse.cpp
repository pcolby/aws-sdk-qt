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

#include "deleteattendeeresponse.h"
#include "deleteattendeeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteAttendeeResponse
 * \brief The DeleteAttendeeResponse class provides an interace for ChimeSdkMeetings DeleteAttendee responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::deleteAttendee
 */

/*!
 * Constructs a DeleteAttendeeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAttendeeResponse::DeleteAttendeeResponse(
        const DeleteAttendeeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new DeleteAttendeeResponsePrivate(this), parent)
{
    setRequest(new DeleteAttendeeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAttendeeRequest * DeleteAttendeeResponse::request() const
{
    Q_D(const DeleteAttendeeResponse);
    return static_cast<const DeleteAttendeeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings DeleteAttendee \a response.
 */
void DeleteAttendeeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAttendeeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteAttendeeResponsePrivate
 * \brief The DeleteAttendeeResponsePrivate class provides private implementation for DeleteAttendeeResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a DeleteAttendeeResponsePrivate object with public implementation \a q.
 */
DeleteAttendeeResponsePrivate::DeleteAttendeeResponsePrivate(
    DeleteAttendeeResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings DeleteAttendee response element from \a xml.
 */
void DeleteAttendeeResponsePrivate::parseDeleteAttendeeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAttendeeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
