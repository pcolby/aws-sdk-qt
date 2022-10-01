// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattendeesresponse.h"
#include "listattendeesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::ListAttendeesResponse
 * \brief The ListAttendeesResponse class provides an interace for ChimeSdkMeetings ListAttendees responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::listAttendees
 */

/*!
 * Constructs a ListAttendeesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAttendeesResponse::ListAttendeesResponse(
        const ListAttendeesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new ListAttendeesResponsePrivate(this), parent)
{
    setRequest(new ListAttendeesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAttendeesRequest * ListAttendeesResponse::request() const
{
    Q_D(const ListAttendeesResponse);
    return static_cast<const ListAttendeesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings ListAttendees \a response.
 */
void ListAttendeesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAttendeesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::ListAttendeesResponsePrivate
 * \brief The ListAttendeesResponsePrivate class provides private implementation for ListAttendeesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a ListAttendeesResponsePrivate object with public implementation \a q.
 */
ListAttendeesResponsePrivate::ListAttendeesResponsePrivate(
    ListAttendeesResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings ListAttendees response element from \a xml.
 */
void ListAttendeesResponsePrivate::parseListAttendeesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttendeesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
