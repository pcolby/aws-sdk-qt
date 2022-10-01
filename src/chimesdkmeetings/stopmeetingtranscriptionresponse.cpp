// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopmeetingtranscriptionresponse.h"
#include "stopmeetingtranscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::StopMeetingTranscriptionResponse
 * \brief The StopMeetingTranscriptionResponse class provides an interace for ChimeSdkMeetings StopMeetingTranscription responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::stopMeetingTranscription
 */

/*!
 * Constructs a StopMeetingTranscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
StopMeetingTranscriptionResponse::StopMeetingTranscriptionResponse(
        const StopMeetingTranscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new StopMeetingTranscriptionResponsePrivate(this), parent)
{
    setRequest(new StopMeetingTranscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopMeetingTranscriptionRequest * StopMeetingTranscriptionResponse::request() const
{
    Q_D(const StopMeetingTranscriptionResponse);
    return static_cast<const StopMeetingTranscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings StopMeetingTranscription \a response.
 */
void StopMeetingTranscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopMeetingTranscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::StopMeetingTranscriptionResponsePrivate
 * \brief The StopMeetingTranscriptionResponsePrivate class provides private implementation for StopMeetingTranscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a StopMeetingTranscriptionResponsePrivate object with public implementation \a q.
 */
StopMeetingTranscriptionResponsePrivate::StopMeetingTranscriptionResponsePrivate(
    StopMeetingTranscriptionResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings StopMeetingTranscription response element from \a xml.
 */
void StopMeetingTranscriptionResponsePrivate::parseStopMeetingTranscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopMeetingTranscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
