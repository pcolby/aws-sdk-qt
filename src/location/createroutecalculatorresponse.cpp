// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createroutecalculatorresponse.h"
#include "createroutecalculatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateRouteCalculatorResponse
 * \brief The CreateRouteCalculatorResponse class provides an interace for Location CreateRouteCalculator responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createRouteCalculator
 */

/*!
 * Constructs a CreateRouteCalculatorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRouteCalculatorResponse::CreateRouteCalculatorResponse(
        const CreateRouteCalculatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new CreateRouteCalculatorResponsePrivate(this), parent)
{
    setRequest(new CreateRouteCalculatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRouteCalculatorRequest * CreateRouteCalculatorResponse::request() const
{
    Q_D(const CreateRouteCalculatorResponse);
    return static_cast<const CreateRouteCalculatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location CreateRouteCalculator \a response.
 */
void CreateRouteCalculatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRouteCalculatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::CreateRouteCalculatorResponsePrivate
 * \brief The CreateRouteCalculatorResponsePrivate class provides private implementation for CreateRouteCalculatorResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateRouteCalculatorResponsePrivate object with public implementation \a q.
 */
CreateRouteCalculatorResponsePrivate::CreateRouteCalculatorResponsePrivate(
    CreateRouteCalculatorResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location CreateRouteCalculator response element from \a xml.
 */
void CreateRouteCalculatorResponsePrivate::parseCreateRouteCalculatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteCalculatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
