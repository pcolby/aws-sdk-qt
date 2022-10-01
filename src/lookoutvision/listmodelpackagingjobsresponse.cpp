// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
