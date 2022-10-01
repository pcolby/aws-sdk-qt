// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecostcategorydefinitionrequest.h"
#include "deletecostcategorydefinitionrequest_p.h"
#include "deletecostcategorydefinitionresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DeleteCostCategoryDefinitionRequest
 * \brief The DeleteCostCategoryDefinitionRequest class provides an interface for CostExplorer DeleteCostCategoryDefinition requests.
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
 * Constructs a copy of \a other.
 */
DeleteCostCategoryDefinitionRequest::DeleteCostCategoryDefinitionRequest(const DeleteCostCategoryDefinitionRequest &other)
    : CostExplorerRequest(new DeleteCostCategoryDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCostCategoryDefinitionRequest object.
 */
DeleteCostCategoryDefinitionRequest::DeleteCostCategoryDefinitionRequest()
    : CostExplorerRequest(new DeleteCostCategoryDefinitionRequestPrivate(CostExplorerRequest::DeleteCostCategoryDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCostCategoryDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCostCategoryDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCostCategoryDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCostCategoryDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::DeleteCostCategoryDefinitionRequestPrivate
 * \brief The DeleteCostCategoryDefinitionRequestPrivate class provides private implementation for DeleteCostCategoryDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DeleteCostCategoryDefinitionRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
DeleteCostCategoryDefinitionRequestPrivate::DeleteCostCategoryDefinitionRequestPrivate(
    const CostExplorerRequest::Action action, DeleteCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCostCategoryDefinitionRequest
 * class' copy constructor.
 */
DeleteCostCategoryDefinitionRequestPrivate::DeleteCostCategoryDefinitionRequestPrivate(
    const DeleteCostCategoryDefinitionRequestPrivate &other, DeleteCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
