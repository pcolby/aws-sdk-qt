// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategeofencecollectionresponse.h"
#include "creategeofencecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateGeofenceCollectionResponse
 * \brief The CreateGeofenceCollectionResponse class provides an interace for Location CreateGeofenceCollection responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createGeofenceCollection
 */

/*!
 * Constructs a CreateGeofenceCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGeofenceCollectionResponse::CreateGeofenceCollectionResponse(
        const CreateGeofenceCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new CreateGeofenceCollectionResponsePrivate(this), parent)
{
    setRequest(new CreateGeofenceCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGeofenceCollectionRequest * CreateGeofenceCollectionResponse::request() const
{
    Q_D(const CreateGeofenceCollectionResponse);
    return static_cast<const CreateGeofenceCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location CreateGeofenceCollection \a response.
 */
void CreateGeofenceCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGeofenceCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::CreateGeofenceCollectionResponsePrivate
 * \brief The CreateGeofenceCollectionResponsePrivate class provides private implementation for CreateGeofenceCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateGeofenceCollectionResponsePrivate object with public implementation \a q.
 */
CreateGeofenceCollectionResponsePrivate::CreateGeofenceCollectionResponsePrivate(
    CreateGeofenceCollectionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location CreateGeofenceCollection response element from \a xml.
 */
void CreateGeofenceCollectionResponsePrivate::parseCreateGeofenceCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGeofenceCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
