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

#include "listfraudsterregistrationjobsresponse.h"
#include "listfraudsterregistrationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::ListFraudsterRegistrationJobsResponse
 * \brief The ListFraudsterRegistrationJobsResponse class provides an interace for VoiceId ListFraudsterRegistrationJobs responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::listFraudsterRegistrationJobs
 */

/*!
 * Constructs a ListFraudsterRegistrationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFraudsterRegistrationJobsResponse::ListFraudsterRegistrationJobsResponse(
        const ListFraudsterRegistrationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new ListFraudsterRegistrationJobsResponsePrivate(this), parent)
{
    setRequest(new ListFraudsterRegistrationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFraudsterRegistrationJobsRequest * ListFraudsterRegistrationJobsResponse::request() const
{
    Q_D(const ListFraudsterRegistrationJobsResponse);
    return static_cast<const ListFraudsterRegistrationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId ListFraudsterRegistrationJobs \a response.
 */
void ListFraudsterRegistrationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFraudsterRegistrationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::ListFraudsterRegistrationJobsResponsePrivate
 * \brief The ListFraudsterRegistrationJobsResponsePrivate class provides private implementation for ListFraudsterRegistrationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a ListFraudsterRegistrationJobsResponsePrivate object with public implementation \a q.
 */
ListFraudsterRegistrationJobsResponsePrivate::ListFraudsterRegistrationJobsResponsePrivate(
    ListFraudsterRegistrationJobsResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId ListFraudsterRegistrationJobs response element from \a xml.
 */
void ListFraudsterRegistrationJobsResponsePrivate::parseListFraudsterRegistrationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFraudsterRegistrationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
