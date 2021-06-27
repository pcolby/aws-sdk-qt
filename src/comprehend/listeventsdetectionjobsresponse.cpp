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
    return static_cast<const ListEventsDetectionJobsRequest *>(ComprehendResponse::request());
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
