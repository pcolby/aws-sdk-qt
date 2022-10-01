// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listplaceindexesresponse.h"
#include "listplaceindexesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListPlaceIndexesResponse
 * \brief The ListPlaceIndexesResponse class provides an interace for Location ListPlaceIndexes responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listPlaceIndexes
 */

/*!
 * Constructs a ListPlaceIndexesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPlaceIndexesResponse::ListPlaceIndexesResponse(
        const ListPlaceIndexesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListPlaceIndexesResponsePrivate(this), parent)
{
    setRequest(new ListPlaceIndexesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPlaceIndexesRequest * ListPlaceIndexesResponse::request() const
{
    Q_D(const ListPlaceIndexesResponse);
    return static_cast<const ListPlaceIndexesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListPlaceIndexes \a response.
 */
void ListPlaceIndexesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPlaceIndexesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListPlaceIndexesResponsePrivate
 * \brief The ListPlaceIndexesResponsePrivate class provides private implementation for ListPlaceIndexesResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListPlaceIndexesResponsePrivate object with public implementation \a q.
 */
ListPlaceIndexesResponsePrivate::ListPlaceIndexesResponsePrivate(
    ListPlaceIndexesResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListPlaceIndexes response element from \a xml.
 */
void ListPlaceIndexesResponsePrivate::parseListPlaceIndexesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPlaceIndexesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
