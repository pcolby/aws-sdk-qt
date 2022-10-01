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

#include "createmeetingwithattendeesresponse.h"
#include "createmeetingwithattendeesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::CreateMeetingWithAttendeesResponse
 * \brief The CreateMeetingWithAttendeesResponse class provides an interace for ChimeSdkMeetings CreateMeetingWithAttendees responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::createMeetingWithAttendees
 */

/*!
 * Constructs a CreateMeetingWithAttendeesResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMeetingWithAttendeesResponse::CreateMeetingWithAttendeesResponse(
        const CreateMeetingWithAttendeesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new CreateMeetingWithAttendeesResponsePrivate(this), parent)
{
    setRequest(new CreateMeetingWithAttendeesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMeetingWithAttendeesRequest * CreateMeetingWithAttendeesResponse::request() const
{
    Q_D(const CreateMeetingWithAttendeesResponse);
    return static_cast<const CreateMeetingWithAttendeesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings CreateMeetingWithAttendees \a response.
 */
void CreateMeetingWithAttendeesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMeetingWithAttendeesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::CreateMeetingWithAttendeesResponsePrivate
 * \brief The CreateMeetingWithAttendeesResponsePrivate class provides private implementation for CreateMeetingWithAttendeesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a CreateMeetingWithAttendeesResponsePrivate object with public implementation \a q.
 */
CreateMeetingWithAttendeesResponsePrivate::CreateMeetingWithAttendeesResponsePrivate(
    CreateMeetingWithAttendeesResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings CreateMeetingWithAttendees response element from \a xml.
 */
void CreateMeetingWithAttendeesResponsePrivate::parseCreateMeetingWithAttendeesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMeetingWithAttendeesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
