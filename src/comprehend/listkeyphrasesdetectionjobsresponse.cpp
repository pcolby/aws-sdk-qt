// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listkeyphrasesdetectionjobsresponse.h"
#include "listkeyphrasesdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListKeyPhrasesDetectionJobsResponse
 * \brief The ListKeyPhrasesDetectionJobsResponse class provides an interace for Comprehend ListKeyPhrasesDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listKeyPhrasesDetectionJobs
 */

/*!
 * Constructs a ListKeyPhrasesDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListKeyPhrasesDetectionJobsResponse::ListKeyPhrasesDetectionJobsResponse(
        const ListKeyPhrasesDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListKeyPhrasesDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListKeyPhrasesDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListKeyPhrasesDetectionJobsRequest * ListKeyPhrasesDetectionJobsResponse::request() const
{
    Q_D(const ListKeyPhrasesDetectionJobsResponse);
    return static_cast<const ListKeyPhrasesDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListKeyPhrasesDetectionJobs \a response.
 */
void ListKeyPhrasesDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListKeyPhrasesDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListKeyPhrasesDetectionJobsResponsePrivate
 * \brief The ListKeyPhrasesDetectionJobsResponsePrivate class provides private implementation for ListKeyPhrasesDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListKeyPhrasesDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListKeyPhrasesDetectionJobsResponsePrivate::ListKeyPhrasesDetectionJobsResponsePrivate(
    ListKeyPhrasesDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListKeyPhrasesDetectionJobs response element from \a xml.
 */
void ListKeyPhrasesDetectionJobsResponsePrivate::parseListKeyPhrasesDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListKeyPhrasesDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
