// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectanomaliesresponse.h"
#include "detectanomaliesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DetectAnomaliesResponse
 * \brief The DetectAnomaliesResponse class provides an interace for LookoutVision DetectAnomalies responses.
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
 * \sa LookoutVisionClient::detectAnomalies
 */

/*!
 * Constructs a DetectAnomaliesResponse object for \a reply to \a request, with parent \a parent.
 */
DetectAnomaliesResponse::DetectAnomaliesResponse(
        const DetectAnomaliesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new DetectAnomaliesResponsePrivate(this), parent)
{
    setRequest(new DetectAnomaliesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectAnomaliesRequest * DetectAnomaliesResponse::request() const
{
    Q_D(const DetectAnomaliesResponse);
    return static_cast<const DetectAnomaliesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision DetectAnomalies \a response.
 */
void DetectAnomaliesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectAnomaliesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::DetectAnomaliesResponsePrivate
 * \brief The DetectAnomaliesResponsePrivate class provides private implementation for DetectAnomaliesResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DetectAnomaliesResponsePrivate object with public implementation \a q.
 */
DetectAnomaliesResponsePrivate::DetectAnomaliesResponsePrivate(
    DetectAnomaliesResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision DetectAnomalies response element from \a xml.
 */
void DetectAnomaliesResponsePrivate::parseDetectAnomaliesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectAnomaliesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
