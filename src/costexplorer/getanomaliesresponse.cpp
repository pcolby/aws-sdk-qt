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

#include "getanomaliesresponse.h"
#include "getanomaliesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetAnomaliesResponse
 * \brief The GetAnomaliesResponse class provides an interace for CostExplorer GetAnomalies responses.
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
 * \sa CostExplorerClient::getAnomalies
 */

/*!
 * Constructs a GetAnomaliesResponse object for \a reply to \a request, with parent \a parent.
 */
GetAnomaliesResponse::GetAnomaliesResponse(
        const GetAnomaliesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetAnomaliesResponsePrivate(this), parent)
{
    setRequest(new GetAnomaliesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAnomaliesRequest * GetAnomaliesResponse::request() const
{
    return static_cast<const GetAnomaliesRequest *>(CostExplorerResponse::request());
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetAnomalies \a response.
 */
void GetAnomaliesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAnomaliesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetAnomaliesResponsePrivate
 * \brief The GetAnomaliesResponsePrivate class provides private implementation for GetAnomaliesResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetAnomaliesResponsePrivate object with public implementation \a q.
 */
GetAnomaliesResponsePrivate::GetAnomaliesResponsePrivate(
    GetAnomaliesResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetAnomalies response element from \a xml.
 */
void GetAnomaliesResponsePrivate::parseGetAnomaliesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAnomaliesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
