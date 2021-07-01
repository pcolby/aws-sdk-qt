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

#include "listdominantlanguagedetectionjobsresponse.h"
#include "listdominantlanguagedetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsResponse
 * \brief The ListDominantLanguageDetectionJobsResponse class provides an interace for Comprehend ListDominantLanguageDetectionJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDominantLanguageDetectionJobs
 */

/*!
 * Constructs a ListDominantLanguageDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDominantLanguageDetectionJobsResponse::ListDominantLanguageDetectionJobsResponse(
        const ListDominantLanguageDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListDominantLanguageDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListDominantLanguageDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDominantLanguageDetectionJobsRequest * ListDominantLanguageDetectionJobsResponse::request() const
{
    Q_D(const ListDominantLanguageDetectionJobsResponse);
    return static_cast<const ListDominantLanguageDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListDominantLanguageDetectionJobs \a response.
 */
void ListDominantLanguageDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDominantLanguageDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsResponsePrivate
 * \brief The ListDominantLanguageDetectionJobsResponsePrivate class provides private implementation for ListDominantLanguageDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDominantLanguageDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListDominantLanguageDetectionJobsResponsePrivate::ListDominantLanguageDetectionJobsResponsePrivate(
    ListDominantLanguageDetectionJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListDominantLanguageDetectionJobs response element from \a xml.
 */
void ListDominantLanguageDetectionJobsResponsePrivate::parseListDominantLanguageDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDominantLanguageDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
