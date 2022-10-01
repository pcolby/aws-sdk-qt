// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicepositionsresponse.h"
#include "listdevicepositionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListDevicePositionsResponse
 * \brief The ListDevicePositionsResponse class provides an interace for Location ListDevicePositions responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listDevicePositions
 */

/*!
 * Constructs a ListDevicePositionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicePositionsResponse::ListDevicePositionsResponse(
        const ListDevicePositionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new ListDevicePositionsResponsePrivate(this), parent)
{
    setRequest(new ListDevicePositionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicePositionsRequest * ListDevicePositionsResponse::request() const
{
    Q_D(const ListDevicePositionsResponse);
    return static_cast<const ListDevicePositionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location ListDevicePositions \a response.
 */
void ListDevicePositionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicePositionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::ListDevicePositionsResponsePrivate
 * \brief The ListDevicePositionsResponsePrivate class provides private implementation for ListDevicePositionsResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListDevicePositionsResponsePrivate object with public implementation \a q.
 */
ListDevicePositionsResponsePrivate::ListDevicePositionsResponsePrivate(
    ListDevicePositionsResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location ListDevicePositions response element from \a xml.
 */
void ListDevicePositionsResponsePrivate::parseListDevicePositionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicePositionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
