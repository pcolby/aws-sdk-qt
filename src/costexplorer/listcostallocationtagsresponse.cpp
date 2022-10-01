// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcostallocationtagsresponse.h"
#include "listcostallocationtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::ListCostAllocationTagsResponse
 * \brief The ListCostAllocationTagsResponse class provides an interace for CostExplorer ListCostAllocationTags responses.
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
 * \sa CostExplorerClient::listCostAllocationTags
 */

/*!
 * Constructs a ListCostAllocationTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCostAllocationTagsResponse::ListCostAllocationTagsResponse(
        const ListCostAllocationTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new ListCostAllocationTagsResponsePrivate(this), parent)
{
    setRequest(new ListCostAllocationTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCostAllocationTagsRequest * ListCostAllocationTagsResponse::request() const
{
    Q_D(const ListCostAllocationTagsResponse);
    return static_cast<const ListCostAllocationTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer ListCostAllocationTags \a response.
 */
void ListCostAllocationTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCostAllocationTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::ListCostAllocationTagsResponsePrivate
 * \brief The ListCostAllocationTagsResponsePrivate class provides private implementation for ListCostAllocationTagsResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a ListCostAllocationTagsResponsePrivate object with public implementation \a q.
 */
ListCostAllocationTagsResponsePrivate::ListCostAllocationTagsResponsePrivate(
    ListCostAllocationTagsResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer ListCostAllocationTags response element from \a xml.
 */
void ListCostAllocationTagsResponsePrivate::parseListCostAllocationTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCostAllocationTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
