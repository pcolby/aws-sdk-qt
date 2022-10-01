// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmapsresponse.h"
#include "listmapsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListMapsResponse
 * \brief The ListMapsResponse class provides an interace for Location ListMaps responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listMaps
 */

/*!
 * Constructs a ListMapsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMapsResponse::ListMapsResponse(
        const ListMapsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListMapsResponsePrivate(this), parent)
{
    setRequest(new ListMapsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMapsRequest * ListMapsResponse::request() const
{
    Q_D(const ListMapsResponse);
    return static_cast<const ListMapsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListMaps \a response.
 */
void ListMapsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMapsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListMapsResponsePrivate
 * \brief The ListMapsResponsePrivate class provides private implementation for ListMapsResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListMapsResponsePrivate object with public implementation \a q.
 */
ListMapsResponsePrivate::ListMapsResponsePrivate(
    ListMapsResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListMaps response element from \a xml.
 */
void ListMapsResponsePrivate::parseListMapsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMapsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
