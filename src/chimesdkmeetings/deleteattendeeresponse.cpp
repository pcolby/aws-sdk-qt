// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
