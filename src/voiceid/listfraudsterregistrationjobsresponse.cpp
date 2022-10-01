// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
