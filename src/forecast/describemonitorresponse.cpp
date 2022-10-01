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

#include "describemonitorresponse.h"
#include "describemonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeMonitorResponse
 * \brief The DescribeMonitorResponse class provides an interace for Forecast DescribeMonitor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeMonitor
 */

/*!
 * Constructs a DescribeMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMonitorResponse::DescribeMonitorResponse(
        const DescribeMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeMonitorResponsePrivate(this), parent)
{
    setRequest(new DescribeMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMonitorRequest * DescribeMonitorResponse::request() const
{
    Q_D(const DescribeMonitorResponse);
    return static_cast<const DescribeMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeMonitor \a response.
 */
void DescribeMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeMonitorResponsePrivate
 * \brief The DescribeMonitorResponsePrivate class provides private implementation for DescribeMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeMonitorResponsePrivate object with public implementation \a q.
 */
DescribeMonitorResponsePrivate::DescribeMonitorResponsePrivate(
    DescribeMonitorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeMonitor response element from \a xml.
 */
void DescribeMonitorResponsePrivate::parseDescribeMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
