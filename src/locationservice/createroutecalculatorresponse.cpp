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

#include "createroutecalculatorresponse.h"
#include "createroutecalculatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateRouteCalculatorResponse
 * \brief The CreateRouteCalculatorResponse class provides an interace for LocationService CreateRouteCalculator responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createRouteCalculator
 */

/*!
 * Constructs a CreateRouteCalculatorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRouteCalculatorResponse::CreateRouteCalculatorResponse(
        const CreateRouteCalculatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new CreateRouteCalculatorResponsePrivate(this), parent)
{
    setRequest(new CreateRouteCalculatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRouteCalculatorRequest * CreateRouteCalculatorResponse::request() const
{
    return static_cast<const CreateRouteCalculatorRequest *>(LocationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful LocationService CreateRouteCalculator \a response.
 */
void CreateRouteCalculatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRouteCalculatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::CreateRouteCalculatorResponsePrivate
 * \brief The CreateRouteCalculatorResponsePrivate class provides private implementation for CreateRouteCalculatorResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateRouteCalculatorResponsePrivate object with public implementation \a q.
 */
CreateRouteCalculatorResponsePrivate::CreateRouteCalculatorResponsePrivate(
    CreateRouteCalculatorResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService CreateRouteCalculator response element from \a xml.
 */
void CreateRouteCalculatorResponsePrivate::parseCreateRouteCalculatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteCalculatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
