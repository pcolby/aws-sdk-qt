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

#include "listtargetedsentimentdetectionjobsresponse.h"
#include "listtargetedsentimentdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListTargetedSentimentDetectionJobsResponse
 * \brief The ListTargetedSentimentDetectionJobsResponse class provides an interace for Comprehend ListTargetedSentimentDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listTargetedSentimentDetectionJobs
 */

/*!
 * Constructs a ListTargetedSentimentDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTargetedSentimentDetectionJobsResponse::ListTargetedSentimentDetectionJobsResponse(
        const ListTargetedSentimentDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListTargetedSentimentDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListTargetedSentimentDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTargetedSentimentDetectionJobsRequest * ListTargetedSentimentDetectionJobsResponse::request() const
{
    Q_D(const ListTargetedSentimentDetectionJobsResponse);
    return static_cast<const ListTargetedSentimentDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListTargetedSentimentDetectionJobs \a response.
 */
void ListTargetedSentimentDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTargetedSentimentDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListTargetedSentimentDetectionJobsResponsePrivate
 * \brief The ListTargetedSentimentDetectionJobsResponsePrivate class provides private implementation for ListTargetedSentimentDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListTargetedSentimentDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListTargetedSentimentDetectionJobsResponsePrivate::ListTargetedSentimentDetectionJobsResponsePrivate(
    ListTargetedSentimentDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListTargetedSentimentDetectionJobs response element from \a xml.
 */
void ListTargetedSentimentDetectionJobsResponsePrivate::parseListTargetedSentimentDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTargetedSentimentDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
