// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchcreateattendeeresponse.h"
#include "batchcreateattendeeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::BatchCreateAttendeeResponse
 * \brief The BatchCreateAttendeeResponse class provides an interace for ChimeSdkMeetings BatchCreateAttendee responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::batchCreateAttendee
 */

/*!
 * Constructs a BatchCreateAttendeeResponse object for \a reply to \a request, with parent \a parent.
 */
BatchCreateAttendeeResponse::BatchCreateAttendeeResponse(
        const BatchCreateAttendeeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new BatchCreateAttendeeResponsePrivate(this), parent)
{
    setRequest(new BatchCreateAttendeeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchCreateAttendeeRequest * BatchCreateAttendeeResponse::request() const
{
    Q_D(const BatchCreateAttendeeResponse);
    return static_cast<const BatchCreateAttendeeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings BatchCreateAttendee \a response.
 */
void BatchCreateAttendeeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchCreateAttendeeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::BatchCreateAttendeeResponsePrivate
 * \brief The BatchCreateAttendeeResponsePrivate class provides private implementation for BatchCreateAttendeeResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a BatchCreateAttendeeResponsePrivate object with public implementation \a q.
 */
BatchCreateAttendeeResponsePrivate::BatchCreateAttendeeResponsePrivate(
    BatchCreateAttendeeResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings BatchCreateAttendee response element from \a xml.
 */
void BatchCreateAttendeeResponsePrivate::parseBatchCreateAttendeeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCreateAttendeeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
