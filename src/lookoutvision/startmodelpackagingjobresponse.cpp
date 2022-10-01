// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmodelpackagingjobresponse.h"
#include "startmodelpackagingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::StartModelPackagingJobResponse
 * \brief The StartModelPackagingJobResponse class provides an interace for LookoutVision StartModelPackagingJob responses.
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
 * \sa LookoutVisionClient::startModelPackagingJob
 */

/*!
 * Constructs a StartModelPackagingJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartModelPackagingJobResponse::StartModelPackagingJobResponse(
        const StartModelPackagingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new StartModelPackagingJobResponsePrivate(this), parent)
{
    setRequest(new StartModelPackagingJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartModelPackagingJobRequest * StartModelPackagingJobResponse::request() const
{
    Q_D(const StartModelPackagingJobResponse);
    return static_cast<const StartModelPackagingJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision StartModelPackagingJob \a response.
 */
void StartModelPackagingJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartModelPackagingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::StartModelPackagingJobResponsePrivate
 * \brief The StartModelPackagingJobResponsePrivate class provides private implementation for StartModelPackagingJobResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a StartModelPackagingJobResponsePrivate object with public implementation \a q.
 */
StartModelPackagingJobResponsePrivate::StartModelPackagingJobResponsePrivate(
    StartModelPackagingJobResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision StartModelPackagingJob response element from \a xml.
 */
void StartModelPackagingJobResponsePrivate::parseStartModelPackagingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartModelPackagingJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
