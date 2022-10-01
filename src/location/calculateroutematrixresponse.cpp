// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "calculateroutematrixresponse.h"
#include "calculateroutematrixresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CalculateRouteMatrixResponse
 * \brief The CalculateRouteMatrixResponse class provides an interace for Location CalculateRouteMatrix responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::calculateRouteMatrix
 */

/*!
 * Constructs a CalculateRouteMatrixResponse object for \a reply to \a request, with parent \a parent.
 */
CalculateRouteMatrixResponse::CalculateRouteMatrixResponse(
        const CalculateRouteMatrixRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new CalculateRouteMatrixResponsePrivate(this), parent)
{
    setRequest(new CalculateRouteMatrixRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CalculateRouteMatrixRequest * CalculateRouteMatrixResponse::request() const
{
    Q_D(const CalculateRouteMatrixResponse);
    return static_cast<const CalculateRouteMatrixRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location CalculateRouteMatrix \a response.
 */
void CalculateRouteMatrixResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CalculateRouteMatrixResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::CalculateRouteMatrixResponsePrivate
 * \brief The CalculateRouteMatrixResponsePrivate class provides private implementation for CalculateRouteMatrixResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CalculateRouteMatrixResponsePrivate object with public implementation \a q.
 */
CalculateRouteMatrixResponsePrivate::CalculateRouteMatrixResponsePrivate(
    CalculateRouteMatrixResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location CalculateRouteMatrix response element from \a xml.
 */
void CalculateRouteMatrixResponsePrivate::parseCalculateRouteMatrixResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CalculateRouteMatrixResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
