// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategeofencecollectionresponse.h"
#include "updategeofencecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateGeofenceCollectionResponse
 * \brief The UpdateGeofenceCollectionResponse class provides an interace for Location UpdateGeofenceCollection responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateGeofenceCollection
 */

/*!
 * Constructs a UpdateGeofenceCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGeofenceCollectionResponse::UpdateGeofenceCollectionResponse(
        const UpdateGeofenceCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new UpdateGeofenceCollectionResponsePrivate(this), parent)
{
    setRequest(new UpdateGeofenceCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGeofenceCollectionRequest * UpdateGeofenceCollectionResponse::request() const
{
    Q_D(const UpdateGeofenceCollectionResponse);
    return static_cast<const UpdateGeofenceCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location UpdateGeofenceCollection \a response.
 */
void UpdateGeofenceCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGeofenceCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::UpdateGeofenceCollectionResponsePrivate
 * \brief The UpdateGeofenceCollectionResponsePrivate class provides private implementation for UpdateGeofenceCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateGeofenceCollectionResponsePrivate object with public implementation \a q.
 */
UpdateGeofenceCollectionResponsePrivate::UpdateGeofenceCollectionResponsePrivate(
    UpdateGeofenceCollectionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location UpdateGeofenceCollection response element from \a xml.
 */
void UpdateGeofenceCollectionResponsePrivate::parseUpdateGeofenceCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGeofenceCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
