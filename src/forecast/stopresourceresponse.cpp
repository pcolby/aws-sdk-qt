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

#include "stopresourceresponse.h"
#include "stopresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::StopResourceResponse
 * \brief The StopResourceResponse class provides an interace for Forecast StopResource responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::stopResource
 */

/*!
 * Constructs a StopResourceResponse object for \a reply to \a request, with parent \a parent.
 */
StopResourceResponse::StopResourceResponse(
        const StopResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new StopResourceResponsePrivate(this), parent)
{
    setRequest(new StopResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopResourceRequest * StopResourceResponse::request() const
{
    Q_D(const StopResourceResponse);
    return static_cast<const StopResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast StopResource \a response.
 */
void StopResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::StopResourceResponsePrivate
 * \brief The StopResourceResponsePrivate class provides private implementation for StopResourceResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a StopResourceResponsePrivate object with public implementation \a q.
 */
StopResourceResponsePrivate::StopResourceResponsePrivate(
    StopResourceResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast StopResource response element from \a xml.
 */
void StopResourceResponsePrivate::parseStopResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
