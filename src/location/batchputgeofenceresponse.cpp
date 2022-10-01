// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputgeofenceresponse.h"
#include "batchputgeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchPutGeofenceResponse
 * \brief The BatchPutGeofenceResponse class provides an interace for Location BatchPutGeofence responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchPutGeofence
 */

/*!
 * Constructs a BatchPutGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutGeofenceResponse::BatchPutGeofenceResponse(
        const BatchPutGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new BatchPutGeofenceResponsePrivate(this), parent)
{
    setRequest(new BatchPutGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutGeofenceRequest * BatchPutGeofenceResponse::request() const
{
    Q_D(const BatchPutGeofenceResponse);
    return static_cast<const BatchPutGeofenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location BatchPutGeofence \a response.
 */
void BatchPutGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::BatchPutGeofenceResponsePrivate
 * \brief The BatchPutGeofenceResponsePrivate class provides private implementation for BatchPutGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchPutGeofenceResponsePrivate object with public implementation \a q.
 */
BatchPutGeofenceResponsePrivate::BatchPutGeofenceResponsePrivate(
    BatchPutGeofenceResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location BatchPutGeofence response element from \a xml.
 */
void BatchPutGeofenceResponsePrivate::parseBatchPutGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
