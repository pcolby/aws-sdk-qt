// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecostcategorydefinitionresponse.h"
#include "deletecostcategorydefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DeleteCostCategoryDefinitionResponse
 * \brief The DeleteCostCategoryDefinitionResponse class provides an interace for CostExplorer DeleteCostCategoryDefinition responses.
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
 * \sa CostExplorerClient::deleteCostCategoryDefinition
 */

/*!
 * Constructs a DeleteCostCategoryDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCostCategoryDefinitionResponse::DeleteCostCategoryDefinitionResponse(
        const DeleteCostCategoryDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new DeleteCostCategoryDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteCostCategoryDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCostCategoryDefinitionRequest * DeleteCostCategoryDefinitionResponse::request() const
{
    Q_D(const DeleteCostCategoryDefinitionResponse);
    return static_cast<const DeleteCostCategoryDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer DeleteCostCategoryDefinition \a response.
 */
void DeleteCostCategoryDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCostCategoryDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::DeleteCostCategoryDefinitionResponsePrivate
 * \brief The DeleteCostCategoryDefinitionResponsePrivate class provides private implementation for DeleteCostCategoryDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DeleteCostCategoryDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteCostCategoryDefinitionResponsePrivate::DeleteCostCategoryDefinitionResponsePrivate(
    DeleteCostCategoryDefinitionResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer DeleteCostCategoryDefinition response element from \a xml.
 */
void DeleteCostCategoryDefinitionResponsePrivate::parseDeleteCostCategoryDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCostCategoryDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
