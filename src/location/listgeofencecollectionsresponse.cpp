// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgeofencecollectionsresponse.h"
#include "listgeofencecollectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListGeofenceCollectionsResponse
 * \brief The ListGeofenceCollectionsResponse class provides an interace for Location ListGeofenceCollections responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listGeofenceCollections
 */

/*!
 * Constructs a ListGeofenceCollectionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeofenceCollectionsResponse::ListGeofenceCollectionsResponse(
        const ListGeofenceCollectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListGeofenceCollectionsResponsePrivate(this), parent)
{
    setRequest(new ListGeofenceCollectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeofenceCollectionsRequest * ListGeofenceCollectionsResponse::request() const
{
    Q_D(const ListGeofenceCollectionsResponse);
    return static_cast<const ListGeofenceCollectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListGeofenceCollections \a response.
 */
void ListGeofenceCollectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGeofenceCollectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListGeofenceCollectionsResponsePrivate
 * \brief The ListGeofenceCollectionsResponsePrivate class provides private implementation for ListGeofenceCollectionsResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListGeofenceCollectionsResponsePrivate object with public implementation \a q.
 */
ListGeofenceCollectionsResponsePrivate::ListGeofenceCollectionsResponsePrivate(
    ListGeofenceCollectionsResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListGeofenceCollections response element from \a xml.
 */
void ListGeofenceCollectionsResponsePrivate::parseListGeofenceCollectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeofenceCollectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
