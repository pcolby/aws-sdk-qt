// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmeetingtranscriptionresponse.h"
#include "startmeetingtranscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::StartMeetingTranscriptionResponse
 * \brief The StartMeetingTranscriptionResponse class provides an interace for ChimeSdkMeetings StartMeetingTranscription responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::startMeetingTranscription
 */

/*!
 * Constructs a StartMeetingTranscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
StartMeetingTranscriptionResponse::StartMeetingTranscriptionResponse(
        const StartMeetingTranscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new StartMeetingTranscriptionResponsePrivate(this), parent)
{
    setRequest(new StartMeetingTranscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMeetingTranscriptionRequest * StartMeetingTranscriptionResponse::request() const
{
    Q_D(const StartMeetingTranscriptionResponse);
    return static_cast<const StartMeetingTranscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings StartMeetingTranscription \a response.
 */
void StartMeetingTranscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMeetingTranscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::StartMeetingTranscriptionResponsePrivate
 * \brief The StartMeetingTranscriptionResponsePrivate class provides private implementation for StartMeetingTranscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a StartMeetingTranscriptionResponsePrivate object with public implementation \a q.
 */
StartMeetingTranscriptionResponsePrivate::StartMeetingTranscriptionResponsePrivate(
    StartMeetingTranscriptionResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings StartMeetingTranscription response element from \a xml.
 */
void StartMeetingTranscriptionResponsePrivate::parseStartMeetingTranscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMeetingTranscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
