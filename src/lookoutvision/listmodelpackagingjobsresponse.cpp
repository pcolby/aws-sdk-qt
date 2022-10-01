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

#include "listmodelpackagingjobsresponse.h"
#include "listmodelpackagingjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::ListModelPackagingJobsResponse
 * \brief The ListModelPackagingJobsResponse class provides an interace for LookoutVision ListModelPackagingJobs responses.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::listModelPackagingJobs
 */

/*!
 * Constructs a ListModelPackagingJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelPackagingJobsResponse::ListModelPackagingJobsResponse(
        const ListModelPackagingJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new ListModelPackagingJobsResponsePrivate(this), parent)
{
    setRequest(new ListModelPackagingJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelPackagingJobsRequest * ListModelPackagingJobsResponse::request() const
{
    Q_D(const ListModelPackagingJobsResponse);
    return static_cast<const ListModelPackagingJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision ListModelPackagingJobs \a response.
 */
void ListModelPackagingJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelPackagingJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::ListModelPackagingJobsResponsePrivate
 * \brief The ListModelPackagingJobsResponsePrivate class provides private implementation for ListModelPackagingJobsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a ListModelPackagingJobsResponsePrivate object with public implementation \a q.
 */
ListModelPackagingJobsResponsePrivate::ListModelPackagingJobsResponsePrivate(
    ListModelPackagingJobsResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision ListModelPackagingJobs response element from \a xml.
 */
void ListModelPackagingJobsResponsePrivate::parseListModelPackagingJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelPackagingJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
