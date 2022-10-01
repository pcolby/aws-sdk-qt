// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
