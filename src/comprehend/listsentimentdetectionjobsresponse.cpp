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

#include "listsentimentdetectionjobsresponse.h"
#include "listsentimentdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListSentimentDetectionJobsResponse
 * \brief The ListSentimentDetectionJobsResponse class provides an interace for Comprehend ListSentimentDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listSentimentDetectionJobs
 */

/*!
 * Constructs a ListSentimentDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSentimentDetectionJobsResponse::ListSentimentDetectionJobsResponse(
        const ListSentimentDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListSentimentDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListSentimentDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSentimentDetectionJobsRequest * ListSentimentDetectionJobsResponse::request() const
{
    Q_D(const ListSentimentDetectionJobsResponse);
    return static_cast<const ListSentimentDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListSentimentDetectionJobs \a response.
 */
void ListSentimentDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSentimentDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListSentimentDetectionJobsResponsePrivate
 * \brief The ListSentimentDetectionJobsResponsePrivate class provides private implementation for ListSentimentDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListSentimentDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListSentimentDetectionJobsResponsePrivate::ListSentimentDetectionJobsResponsePrivate(
    ListSentimentDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListSentimentDetectionJobs response element from \a xml.
 */
void ListSentimentDetectionJobsResponsePrivate::parseListSentimentDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSentimentDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
