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
    return static_cast<const ListKeyPhrasesDetectionJobsRequest *>(ComprehendResponse::request());
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
