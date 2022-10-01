// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelpackagingjobresponse.h"
#include "describemodelpackagingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DescribeModelPackagingJobResponse
 * \brief The DescribeModelPackagingJobResponse class provides an interace for LookoutVision DescribeModelPackagingJob responses.
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
 * \sa LookoutVisionClient::describeModelPackagingJob
 */

/*!
 * Constructs a DescribeModelPackagingJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelPackagingJobResponse::DescribeModelPackagingJobResponse(
        const DescribeModelPackagingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new DescribeModelPackagingJobResponsePrivate(this), parent)
{
    setRequest(new DescribeModelPackagingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelPackagingJobRequest * DescribeModelPackagingJobResponse::request() const
{
    Q_D(const DescribeModelPackagingJobResponse);
    return static_cast<const DescribeModelPackagingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision DescribeModelPackagingJob \a response.
 */
void DescribeModelPackagingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelPackagingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::DescribeModelPackagingJobResponsePrivate
 * \brief The DescribeModelPackagingJobResponsePrivate class provides private implementation for DescribeModelPackagingJobResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DescribeModelPackagingJobResponsePrivate object with public implementation \a q.
 */
DescribeModelPackagingJobResponsePrivate::DescribeModelPackagingJobResponsePrivate(
    DescribeModelPackagingJobResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision DescribeModelPackagingJob response element from \a xml.
 */
void DescribeModelPackagingJobResponsePrivate::parseDescribeModelPackagingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelPackagingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
