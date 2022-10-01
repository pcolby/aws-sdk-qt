// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listroutecalculatorsresponse.h"
#include "listroutecalculatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListRouteCalculatorsResponse
 * \brief The ListRouteCalculatorsResponse class provides an interace for Location ListRouteCalculators responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listRouteCalculators
 */

/*!
 * Constructs a ListRouteCalculatorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRouteCalculatorsResponse::ListRouteCalculatorsResponse(
        const ListRouteCalculatorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListRouteCalculatorsResponsePrivate(this), parent)
{
    setRequest(new ListRouteCalculatorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRouteCalculatorsRequest * ListRouteCalculatorsResponse::request() const
{
    Q_D(const ListRouteCalculatorsResponse);
    return static_cast<const ListRouteCalculatorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListRouteCalculators \a response.
 */
void ListRouteCalculatorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRouteCalculatorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListRouteCalculatorsResponsePrivate
 * \brief The ListRouteCalculatorsResponsePrivate class provides private implementation for ListRouteCalculatorsResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListRouteCalculatorsResponsePrivate object with public implementation \a q.
 */
ListRouteCalculatorsResponsePrivate::ListRouteCalculatorsResponsePrivate(
    ListRouteCalculatorsResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListRouteCalculators response element from \a xml.
 */
void ListRouteCalculatorsResponsePrivate::parseListRouteCalculatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRouteCalculatorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
