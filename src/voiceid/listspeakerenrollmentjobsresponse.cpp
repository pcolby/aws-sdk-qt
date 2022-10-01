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

#include "listspeakerenrollmentjobsresponse.h"
#include "listspeakerenrollmentjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::ListSpeakerEnrollmentJobsResponse
 * \brief The ListSpeakerEnrollmentJobsResponse class provides an interace for VoiceId ListSpeakerEnrollmentJobs responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::listSpeakerEnrollmentJobs
 */

/*!
 * Constructs a ListSpeakerEnrollmentJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSpeakerEnrollmentJobsResponse::ListSpeakerEnrollmentJobsResponse(
        const ListSpeakerEnrollmentJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new ListSpeakerEnrollmentJobsResponsePrivate(this), parent)
{
    setRequest(new ListSpeakerEnrollmentJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSpeakerEnrollmentJobsRequest * ListSpeakerEnrollmentJobsResponse::request() const
{
    Q_D(const ListSpeakerEnrollmentJobsResponse);
    return static_cast<const ListSpeakerEnrollmentJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId ListSpeakerEnrollmentJobs \a response.
 */
void ListSpeakerEnrollmentJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSpeakerEnrollmentJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::ListSpeakerEnrollmentJobsResponsePrivate
 * \brief The ListSpeakerEnrollmentJobsResponsePrivate class provides private implementation for ListSpeakerEnrollmentJobsResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a ListSpeakerEnrollmentJobsResponsePrivate object with public implementation \a q.
 */
ListSpeakerEnrollmentJobsResponsePrivate::ListSpeakerEnrollmentJobsResponsePrivate(
    ListSpeakerEnrollmentJobsResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId ListSpeakerEnrollmentJobs response element from \a xml.
 */
void ListSpeakerEnrollmentJobsResponsePrivate::parseListSpeakerEnrollmentJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSpeakerEnrollmentJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
