// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventsdetectionjobsresponse.h"
#include "listeventsdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEventsDetectionJobsResponse
 * \brief The ListEventsDetectionJobsResponse class provides an interace for Comprehend ListEventsDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEventsDetectionJobs
 */

/*!
 * Constructs a ListEventsDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventsDetectionJobsResponse::ListEventsDetectionJobsResponse(
        const ListEventsDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListEventsDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListEventsDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventsDetectionJobsRequest * ListEventsDetectionJobsResponse::request() const
{
    Q_D(const ListEventsDetectionJobsResponse);
    return static_cast<const ListEventsDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListEventsDetectionJobs \a response.
 */
void ListEventsDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventsDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListEventsDetectionJobsResponsePrivate
 * \brief The ListEventsDetectionJobsResponsePrivate class provides private implementation for ListEventsDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEventsDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListEventsDetectionJobsResponsePrivate::ListEventsDetectionJobsResponsePrivate(
    ListEventsDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListEventsDetectionJobs response element from \a xml.
 */
void ListEventsDetectionJobsResponsePrivate::parseListEventsDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventsDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
