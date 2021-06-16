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

#include "getusageforecastresponse.h"
#include "getusageforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetUsageForecastResponse
 * \brief The GetUsageForecastResponse class provides an interace for CostExplorer GetUsageForecast responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API enables you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for Amazon DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about costs associated with the Cost Explorer API, see <a
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 *
 * \sa CostExplorerClient::getUsageForecast
 */

/*!
 * Constructs a GetUsageForecastResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsageForecastResponse::GetUsageForecastResponse(
        const GetUsageForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetUsageForecastResponsePrivate(this), parent)
{
    setRequest(new GetUsageForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsageForecastRequest * GetUsageForecastResponse::request() const
{
    Q_D(const GetUsageForecastResponse);
    return static_cast<const GetUsageForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetUsageForecast \a response.
 */
void GetUsageForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUsageForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetUsageForecastResponsePrivate
 * \brief The GetUsageForecastResponsePrivate class provides private implementation for GetUsageForecastResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetUsageForecastResponsePrivate object with public implementation \a q.
 */
GetUsageForecastResponsePrivate::GetUsageForecastResponsePrivate(
    GetUsageForecastResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetUsageForecast response element from \a xml.
 */
void GetUsageForecastResponsePrivate::parseGetUsageForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsageForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
