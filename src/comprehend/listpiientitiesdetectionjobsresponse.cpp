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

#include "listpiientitiesdetectionjobsresponse.h"
#include "listpiientitiesdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListPiiEntitiesDetectionJobsResponse
 * \brief The ListPiiEntitiesDetectionJobsResponse class provides an interace for Comprehend ListPiiEntitiesDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listPiiEntitiesDetectionJobs
 */

/*!
 * Constructs a ListPiiEntitiesDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPiiEntitiesDetectionJobsResponse::ListPiiEntitiesDetectionJobsResponse(
        const ListPiiEntitiesDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListPiiEntitiesDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListPiiEntitiesDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPiiEntitiesDetectionJobsRequest * ListPiiEntitiesDetectionJobsResponse::request() const
{
    Q_D(const ListPiiEntitiesDetectionJobsResponse);
    return static_cast<const ListPiiEntitiesDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListPiiEntitiesDetectionJobs \a response.
 */
void ListPiiEntitiesDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPiiEntitiesDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListPiiEntitiesDetectionJobsResponsePrivate
 * \brief The ListPiiEntitiesDetectionJobsResponsePrivate class provides private implementation for ListPiiEntitiesDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListPiiEntitiesDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListPiiEntitiesDetectionJobsResponsePrivate::ListPiiEntitiesDetectionJobsResponsePrivate(
    ListPiiEntitiesDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListPiiEntitiesDetectionJobs response element from \a xml.
 */
void ListPiiEntitiesDetectionJobsResponsePrivate::parseListPiiEntitiesDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPiiEntitiesDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
