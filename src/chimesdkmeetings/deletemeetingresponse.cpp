// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemeetingresponse.h"
#include "deletemeetingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteMeetingResponse
 * \brief The DeleteMeetingResponse class provides an interace for ChimeSdkMeetings DeleteMeeting responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::deleteMeeting
 */

/*!
 * Constructs a DeleteMeetingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMeetingResponse::DeleteMeetingResponse(
        const DeleteMeetingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new DeleteMeetingResponsePrivate(this), parent)
{
    setRequest(new DeleteMeetingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMeetingRequest * DeleteMeetingResponse::request() const
{
    Q_D(const DeleteMeetingResponse);
    return static_cast<const DeleteMeetingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings DeleteMeeting \a response.
 */
void DeleteMeetingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMeetingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::DeleteMeetingResponsePrivate
 * \brief The DeleteMeetingResponsePrivate class provides private implementation for DeleteMeetingResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a DeleteMeetingResponsePrivate object with public implementation \a q.
 */
DeleteMeetingResponsePrivate::DeleteMeetingResponsePrivate(
    DeleteMeetingResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings DeleteMeeting response element from \a xml.
 */
void DeleteMeetingResponsePrivate::parseDeleteMeetingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMeetingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
