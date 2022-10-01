// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcostcategorydefinitionsresponse.h"
#include "listcostcategorydefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::ListCostCategoryDefinitionsResponse
 * \brief The ListCostCategoryDefinitionsResponse class provides an interace for CostExplorer ListCostCategoryDefinitions responses.
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
 * \sa CostExplorerClient::listCostCategoryDefinitions
 */

/*!
 * Constructs a ListCostCategoryDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCostCategoryDefinitionsResponse::ListCostCategoryDefinitionsResponse(
        const ListCostCategoryDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new ListCostCategoryDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListCostCategoryDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCostCategoryDefinitionsRequest * ListCostCategoryDefinitionsResponse::request() const
{
    Q_D(const ListCostCategoryDefinitionsResponse);
    return static_cast<const ListCostCategoryDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer ListCostCategoryDefinitions \a response.
 */
void ListCostCategoryDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCostCategoryDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::ListCostCategoryDefinitionsResponsePrivate
 * \brief The ListCostCategoryDefinitionsResponsePrivate class provides private implementation for ListCostCategoryDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a ListCostCategoryDefinitionsResponsePrivate object with public implementation \a q.
 */
ListCostCategoryDefinitionsResponsePrivate::ListCostCategoryDefinitionsResponsePrivate(
    ListCostCategoryDefinitionsResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer ListCostCategoryDefinitions response element from \a xml.
 */
void ListCostCategoryDefinitionsResponsePrivate::parseListCostCategoryDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCostCategoryDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
