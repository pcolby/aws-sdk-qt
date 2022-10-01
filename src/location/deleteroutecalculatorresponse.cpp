// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroutecalculatorresponse.h"
#include "deleteroutecalculatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteRouteCalculatorResponse
 * \brief The DeleteRouteCalculatorResponse class provides an interace for Location DeleteRouteCalculator responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteRouteCalculator
 */

/*!
 * Constructs a DeleteRouteCalculatorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteCalculatorResponse::DeleteRouteCalculatorResponse(
        const DeleteRouteCalculatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new DeleteRouteCalculatorResponsePrivate(this), parent)
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
 * Parses a successful Location DeleteRouteCalculator \a response.
 */
void DeleteRouteCalculatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteCalculatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::DeleteRouteCalculatorResponsePrivate
 * \brief The DeleteRouteCalculatorResponsePrivate class provides private implementation for DeleteRouteCalculatorResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteRouteCalculatorResponsePrivate object with public implementation \a q.
 */
DeleteRouteCalculatorResponsePrivate::DeleteRouteCalculatorResponsePrivate(
    DeleteRouteCalculatorResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location DeleteRouteCalculator response element from \a xml.
 */
void DeleteRouteCalculatorResponsePrivate::parseDeleteRouteCalculatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteCalculatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
