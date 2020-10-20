/*
    Copyright 2013-2020 Paul Colby

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

#include "listentitiesdetectionjobsresponse.h"
#include "listentitiesdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntitiesDetectionJobsResponse
 * \brief The ListEntitiesDetectionJobsResponse class provides an interace for Comprehend ListEntitiesDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntitiesDetectionJobs
 */

/*!
 * Constructs a ListEntitiesDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitiesDetectionJobsResponse::ListEntitiesDetectionJobsResponse(
        const ListEntitiesDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListEntitiesDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListEntitiesDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitiesDetectionJobsRequest * ListEntitiesDetectionJobsResponse::request() const
{
    Q_D(const ListEntitiesDetectionJobsResponse);
    return static_cast<const ListEntitiesDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListEntitiesDetectionJobs \a response.
 */
void ListEntitiesDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitiesDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListEntitiesDetectionJobsResponsePrivate
 * \brief The ListEntitiesDetectionJobsResponsePrivate class provides private implementation for ListEntitiesDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntitiesDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListEntitiesDetectionJobsResponsePrivate::ListEntitiesDetectionJobsResponsePrivate(
    ListEntitiesDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListEntitiesDetectionJobs response element from \a xml.
 */
void ListEntitiesDetectionJobsResponsePrivate::parseListEntitiesDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitiesDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
