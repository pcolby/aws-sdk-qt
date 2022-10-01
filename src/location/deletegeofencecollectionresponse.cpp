// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegeofencecollectionresponse.h"
#include "deletegeofencecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteGeofenceCollectionResponse
 * \brief The DeleteGeofenceCollectionResponse class provides an interace for Location DeleteGeofenceCollection responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteGeofenceCollection
 */

/*!
 * Constructs a DeleteGeofenceCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGeofenceCollectionResponse::DeleteGeofenceCollectionResponse(
        const DeleteGeofenceCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DeleteGeofenceCollectionResponsePrivate(this), parent)
{
    setRequest(new DeleteGeofenceCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGeofenceCollectionRequest * DeleteGeofenceCollectionResponse::request() const
{
    Q_D(const DeleteGeofenceCollectionResponse);
    return static_cast<const DeleteGeofenceCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DeleteGeofenceCollection \a response.
 */
void DeleteGeofenceCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGeofenceCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DeleteGeofenceCollectionResponsePrivate
 * \brief The DeleteGeofenceCollectionResponsePrivate class provides private implementation for DeleteGeofenceCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteGeofenceCollectionResponsePrivate object with public implementation \a q.
 */
DeleteGeofenceCollectionResponsePrivate::DeleteGeofenceCollectionResponsePrivate(
    DeleteGeofenceCollectionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DeleteGeofenceCollection response element from \a xml.
 */
void DeleteGeofenceCollectionResponsePrivate::parseDeleteGeofenceCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGeofenceCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
