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

#include "batchupdateattendeecapabilitiesexceptresponse.h"
#include "batchupdateattendeecapabilitiesexceptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::BatchUpdateAttendeeCapabilitiesExceptResponse
 * \brief The BatchUpdateAttendeeCapabilitiesExceptResponse class provides an interace for ChimeSdkMeetings BatchUpdateAttendeeCapabilitiesExcept responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::batchUpdateAttendeeCapabilitiesExcept
 */

/*!
 * Constructs a BatchUpdateAttendeeCapabilitiesExceptResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpdateAttendeeCapabilitiesExceptResponse::BatchUpdateAttendeeCapabilitiesExceptResponse(
        const BatchUpdateAttendeeCapabilitiesExceptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new BatchUpdateAttendeeCapabilitiesExceptResponsePrivate(this), parent)
{
    setRequest(new BatchUpdateAttendeeCapabilitiesExceptRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpdateAttendeeCapabilitiesExceptRequest * BatchUpdateAttendeeCapabilitiesExceptResponse::request() const
{
    Q_D(const BatchUpdateAttendeeCapabilitiesExceptResponse);
    return static_cast<const BatchUpdateAttendeeCapabilitiesExceptRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings BatchUpdateAttendeeCapabilitiesExcept \a response.
 */
void BatchUpdateAttendeeCapabilitiesExceptResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpdateAttendeeCapabilitiesExceptResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::BatchUpdateAttendeeCapabilitiesExceptResponsePrivate
 * \brief The BatchUpdateAttendeeCapabilitiesExceptResponsePrivate class provides private implementation for BatchUpdateAttendeeCapabilitiesExceptResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a BatchUpdateAttendeeCapabilitiesExceptResponsePrivate object with public implementation \a q.
 */
BatchUpdateAttendeeCapabilitiesExceptResponsePrivate::BatchUpdateAttendeeCapabilitiesExceptResponsePrivate(
    BatchUpdateAttendeeCapabilitiesExceptResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings BatchUpdateAttendeeCapabilitiesExcept response element from \a xml.
 */
void BatchUpdateAttendeeCapabilitiesExceptResponsePrivate::parseBatchUpdateAttendeeCapabilitiesExceptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpdateAttendeeCapabilitiesExceptResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
