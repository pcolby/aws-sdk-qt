// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "calculaterouteresponse.h"
#include "calculaterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CalculateRouteResponse
 * \brief The CalculateRouteResponse class provides an interace for Location CalculateRoute responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::calculateRoute
 */

/*!
 * Constructs a CalculateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
CalculateRouteResponse::CalculateRouteResponse(
        const CalculateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new CalculateRouteResponsePrivate(this), parent)
{
    setRequest(new CalculateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CalculateRouteRequest * CalculateRouteResponse::request() const
{
    Q_D(const CalculateRouteResponse);
    return static_cast<const CalculateRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location CalculateRoute \a response.
 */
void CalculateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CalculateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::CalculateRouteResponsePrivate
 * \brief The CalculateRouteResponsePrivate class provides private implementation for CalculateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CalculateRouteResponsePrivate object with public implementation \a q.
 */
CalculateRouteResponsePrivate::CalculateRouteResponsePrivate(
    CalculateRouteResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location CalculateRoute response element from \a xml.
 */
void CalculateRouteResponsePrivate::parseCalculateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CalculateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
