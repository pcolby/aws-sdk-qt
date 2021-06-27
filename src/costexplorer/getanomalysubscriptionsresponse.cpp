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

#include "getanomalysubscriptionsresponse.h"
#include "getanomalysubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetAnomalySubscriptionsResponse
 * \brief The GetAnomalySubscriptionsResponse class provides an interace for CostExplorer GetAnomalySubscriptions responses.
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
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 *
 * \sa CostExplorerClient::getAnomalySubscriptions
 */

/*!
 * Constructs a GetAnomalySubscriptionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAnomalySubscriptionsResponse::GetAnomalySubscriptionsResponse(
        const GetAnomalySubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetAnomalySubscriptionsResponsePrivate(this), parent)
{
    setRequest(new GetAnomalySubscriptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAnomalySubscriptionsRequest * GetAnomalySubscriptionsResponse::request() const
{
    return static_cast<const GetAnomalySubscriptionsRequest *>(CostExplorerResponse::request());
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetAnomalySubscriptions \a response.
 */
void GetAnomalySubscriptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAnomalySubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetAnomalySubscriptionsResponsePrivate
 * \brief The GetAnomalySubscriptionsResponsePrivate class provides private implementation for GetAnomalySubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetAnomalySubscriptionsResponsePrivate object with public implementation \a q.
 */
GetAnomalySubscriptionsResponsePrivate::GetAnomalySubscriptionsResponsePrivate(
    GetAnomalySubscriptionsResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetAnomalySubscriptions response element from \a xml.
 */
void GetAnomalySubscriptionsResponsePrivate::parseGetAnomalySubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAnomalySubscriptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
