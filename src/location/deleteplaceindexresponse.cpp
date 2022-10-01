// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplaceindexresponse.h"
#include "deleteplaceindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeletePlaceIndexResponse
 * \brief The DeletePlaceIndexResponse class provides an interace for Location DeletePlaceIndex responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deletePlaceIndex
 */

/*!
 * Constructs a DeletePlaceIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePlaceIndexResponse::DeletePlaceIndexResponse(
        const DeletePlaceIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DeletePlaceIndexResponsePrivate(this), parent)
{
    setRequest(new DeletePlaceIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePlaceIndexRequest * DeletePlaceIndexResponse::request() const
{
    Q_D(const DeletePlaceIndexResponse);
    return static_cast<const DeletePlaceIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location DeletePlaceIndex \a response.
 */
void DeletePlaceIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePlaceIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DeletePlaceIndexResponsePrivate
 * \brief The DeletePlaceIndexResponsePrivate class provides private implementation for DeletePlaceIndexResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeletePlaceIndexResponsePrivate object with public implementation \a q.
 */
DeletePlaceIndexResponsePrivate::DeletePlaceIndexResponsePrivate(
    DeletePlaceIndexResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DeletePlaceIndex response element from \a xml.
 */
void DeletePlaceIndexResponsePrivate::parseDeletePlaceIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlaceIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
