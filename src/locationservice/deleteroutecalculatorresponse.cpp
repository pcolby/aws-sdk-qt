/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteroutecalculatorresponse.h"
#include "deleteroutecalculatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteRouteCalculatorResponse
 * \brief The DeleteRouteCalculatorResponse class provides an interace for LocationService DeleteRouteCalculator responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteRouteCalculator
 */

/*!
 * Constructs a DeleteRouteCalculatorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteCalculatorResponse::DeleteRouteCalculatorResponse(
        const DeleteRouteCalculatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new DeleteRouteCalculatorResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteCalculatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteCalculatorRequest * DeleteRouteCalculatorResponse::request() const
{
    Q_D(const DeleteRouteCalculatorResponse);
    return static_cast<const DeleteRouteCalculatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService DeleteRouteCalculator \a response.
 */
void DeleteRouteCalculatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteCalculatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::DeleteRouteCalculatorResponsePrivate
 * \brief The DeleteRouteCalculatorResponsePrivate class provides private implementation for DeleteRouteCalculatorResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteRouteCalculatorResponsePrivate object with public implementation \a q.
 */
DeleteRouteCalculatorResponsePrivate::DeleteRouteCalculatorResponsePrivate(
    DeleteRouteCalculatorResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService DeleteRouteCalculator response element from \a xml.
 */
void DeleteRouteCalculatorResponsePrivate::parseDeleteRouteCalculatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteCalculatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
