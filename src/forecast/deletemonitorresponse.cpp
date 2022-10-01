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

#include "deletemonitorresponse.h"
#include "deletemonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteMonitorResponse
 * \brief The DeleteMonitorResponse class provides an interace for Forecast DeleteMonitor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteMonitor
 */

/*!
 * Constructs a DeleteMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMonitorResponse::DeleteMonitorResponse(
        const DeleteMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteMonitorResponsePrivate(this), parent)
{
    setRequest(new DeleteMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMonitorRequest * DeleteMonitorResponse::request() const
{
    Q_D(const DeleteMonitorResponse);
    return static_cast<const DeleteMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteMonitor \a response.
 */
void DeleteMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteMonitorResponsePrivate
 * \brief The DeleteMonitorResponsePrivate class provides private implementation for DeleteMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteMonitorResponsePrivate object with public implementation \a q.
 */
DeleteMonitorResponsePrivate::DeleteMonitorResponsePrivate(
    DeleteMonitorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteMonitor response element from \a xml.
 */
void DeleteMonitorResponsePrivate::parseDeleteMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
