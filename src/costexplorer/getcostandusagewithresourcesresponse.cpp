// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcostandusagewithresourcesresponse.h"
#include "getcostandusagewithresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageWithResourcesResponse
 * \brief The GetCostAndUsageWithResourcesResponse class provides an interace for CostExplorer GetCostAndUsageWithResources responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  You can use the Cost Explorer API to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data. This might include the number of
 *  daily write operations for Amazon DynamoDB database tables in your production environment.
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
 *  For information about the costs that are associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa CostExplorerClient::getCostAndUsageWithResources
 */

/*!
 * Constructs a GetCostAndUsageWithResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
GetCostAndUsageWithResourcesResponse::GetCostAndUsageWithResourcesResponse(
        const GetCostAndUsageWithResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetCostAndUsageWithResourcesResponsePrivate(this), parent)
{
    setRequest(new GetCostAndUsageWithResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCostAndUsageWithResourcesRequest * GetCostAndUsageWithResourcesResponse::request() const
{
    Q_D(const GetCostAndUsageWithResourcesResponse);
    return static_cast<const GetCostAndUsageWithResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetCostAndUsageWithResources \a response.
 */
void GetCostAndUsageWithResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCostAndUsageWithResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageWithResourcesResponsePrivate
 * \brief The GetCostAndUsageWithResourcesResponsePrivate class provides private implementation for GetCostAndUsageWithResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetCostAndUsageWithResourcesResponsePrivate object with public implementation \a q.
 */
GetCostAndUsageWithResourcesResponsePrivate::GetCostAndUsageWithResourcesResponsePrivate(
    GetCostAndUsageWithResourcesResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetCostAndUsageWithResources response element from \a xml.
 */
void GetCostAndUsageWithResourcesResponsePrivate::parseGetCostAndUsageWithResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCostAndUsageWithResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
