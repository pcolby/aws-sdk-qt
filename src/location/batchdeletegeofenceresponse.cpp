// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletegeofenceresponse.h"
#include "batchdeletegeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchDeleteGeofenceResponse
 * \brief The BatchDeleteGeofenceResponse class provides an interace for Location BatchDeleteGeofence responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchDeleteGeofence
 */

/*!
 * Constructs a BatchDeleteGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteGeofenceResponse::BatchDeleteGeofenceResponse(
        const BatchDeleteGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new BatchDeleteGeofenceResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteGeofenceRequest * BatchDeleteGeofenceResponse::request() const
{
    Q_D(const BatchDeleteGeofenceResponse);
    return static_cast<const BatchDeleteGeofenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location BatchDeleteGeofence \a response.
 */
void BatchDeleteGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::BatchDeleteGeofenceResponsePrivate
 * \brief The BatchDeleteGeofenceResponsePrivate class provides private implementation for BatchDeleteGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchDeleteGeofenceResponsePrivate object with public implementation \a q.
 */
BatchDeleteGeofenceResponsePrivate::BatchDeleteGeofenceResponsePrivate(
    BatchDeleteGeofenceResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location BatchDeleteGeofence response element from \a xml.
 */
void BatchDeleteGeofenceResponsePrivate::parseBatchDeleteGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
