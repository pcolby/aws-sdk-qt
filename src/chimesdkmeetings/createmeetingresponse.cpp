// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmeetingresponse.h"
#include "createmeetingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::CreateMeetingResponse
 * \brief The CreateMeetingResponse class provides an interace for ChimeSdkMeetings CreateMeeting responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::createMeeting
 */

/*!
 * Constructs a CreateMeetingResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMeetingResponse::CreateMeetingResponse(
        const CreateMeetingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new CreateMeetingResponsePrivate(this), parent)
{
    setRequest(new CreateMeetingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMeetingRequest * CreateMeetingResponse::request() const
{
    Q_D(const CreateMeetingResponse);
    return static_cast<const CreateMeetingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings CreateMeeting \a response.
 */
void CreateMeetingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMeetingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::CreateMeetingResponsePrivate
 * \brief The CreateMeetingResponsePrivate class provides private implementation for CreateMeetingResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a CreateMeetingResponsePrivate object with public implementation \a q.
 */
CreateMeetingResponsePrivate::CreateMeetingResponsePrivate(
    CreateMeetingResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings CreateMeeting response element from \a xml.
 */
void CreateMeetingResponsePrivate::parseCreateMeetingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMeetingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
