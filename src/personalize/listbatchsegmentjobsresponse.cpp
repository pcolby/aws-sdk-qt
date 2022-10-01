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

#include "listbatchsegmentjobsresponse.h"
#include "listbatchsegmentjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsResponse
 * \brief The ListBatchSegmentJobsResponse class provides an interace for Personalize ListBatchSegmentJobs responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listBatchSegmentJobs
 */

/*!
 * Constructs a ListBatchSegmentJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBatchSegmentJobsResponse::ListBatchSegmentJobsResponse(
        const ListBatchSegmentJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListBatchSegmentJobsResponsePrivate(this), parent)
{
    setRequest(new ListBatchSegmentJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBatchSegmentJobsRequest * ListBatchSegmentJobsResponse::request() const
{
    Q_D(const ListBatchSegmentJobsResponse);
    return static_cast<const ListBatchSegmentJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListBatchSegmentJobs \a response.
 */
void ListBatchSegmentJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBatchSegmentJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsResponsePrivate
 * \brief The ListBatchSegmentJobsResponsePrivate class provides private implementation for ListBatchSegmentJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListBatchSegmentJobsResponsePrivate object with public implementation \a q.
 */
ListBatchSegmentJobsResponsePrivate::ListBatchSegmentJobsResponsePrivate(
    ListBatchSegmentJobsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListBatchSegmentJobs response element from \a xml.
 */
void ListBatchSegmentJobsResponsePrivate::parseListBatchSegmentJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBatchSegmentJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
