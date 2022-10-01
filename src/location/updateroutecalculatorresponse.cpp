// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroutecalculatorresponse.h"
#include "updateroutecalculatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateRouteCalculatorResponse
 * \brief The UpdateRouteCalculatorResponse class provides an interace for Location UpdateRouteCalculator responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateRouteCalculator
 */

/*!
 * Constructs a UpdateRouteCalculatorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRouteCalculatorResponse::UpdateRouteCalculatorResponse(
        const UpdateRouteCalculatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new UpdateRouteCalculatorResponsePrivate(this), parent)
{
    setRequest(new UpdateRouteCalculatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRouteCalculatorRequest * UpdateRouteCalculatorResponse::request() const
{
    Q_D(const UpdateRouteCalculatorResponse);
    return static_cast<const UpdateRouteCalculatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location UpdateRouteCalculator \a response.
 */
void UpdateRouteCalculatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRouteCalculatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::UpdateRouteCalculatorResponsePrivate
 * \brief The UpdateRouteCalculatorResponsePrivate class provides private implementation for UpdateRouteCalculatorResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateRouteCalculatorResponsePrivate object with public implementation \a q.
 */
UpdateRouteCalculatorResponsePrivate::UpdateRouteCalculatorResponsePrivate(
    UpdateRouteCalculatorResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location UpdateRouteCalculator response element from \a xml.
 */
void UpdateRouteCalculatorResponsePrivate::parseUpdateRouteCalculatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRouteCalculatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
