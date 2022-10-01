// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putgeofenceresponse.h"
#include "putgeofenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::PutGeofenceResponse
 * \brief The PutGeofenceResponse class provides an interace for Location PutGeofence responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::putGeofence
 */

/*!
 * Constructs a PutGeofenceResponse object for \a reply to \a request, with parent \a parent.
 */
PutGeofenceResponse::PutGeofenceResponse(
        const PutGeofenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new PutGeofenceResponsePrivate(this), parent)
{
    setRequest(new PutGeofenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutGeofenceRequest * PutGeofenceResponse::request() const
{
    Q_D(const PutGeofenceResponse);
    return static_cast<const PutGeofenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location PutGeofence \a response.
 */
void PutGeofenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutGeofenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::PutGeofenceResponsePrivate
 * \brief The PutGeofenceResponsePrivate class provides private implementation for PutGeofenceResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a PutGeofenceResponsePrivate object with public implementation \a q.
 */
PutGeofenceResponsePrivate::PutGeofenceResponsePrivate(
    PutGeofenceResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location PutGeofence response element from \a xml.
 */
void PutGeofenceResponsePrivate::parsePutGeofenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutGeofenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
