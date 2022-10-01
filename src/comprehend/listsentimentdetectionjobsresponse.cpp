// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
