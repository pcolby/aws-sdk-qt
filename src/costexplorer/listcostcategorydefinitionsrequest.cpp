// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcostcategorydefinitionsrequest.h"
#include "listcostcategorydefinitionsrequest_p.h"
#include "listcostcategorydefinitionsresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::ListCostCategoryDefinitionsRequest
 * \brief The ListCostCategoryDefinitionsRequest class provides an interface for CostExplorer ListCostCategoryDefinitions requests.
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
 * Constructs a copy of \a other.
 */
ListCostCategoryDefinitionsRequest::ListCostCategoryDefinitionsRequest(const ListCostCategoryDefinitionsRequest &other)
    : CostExplorerRequest(new ListCostCategoryDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCostCategoryDefinitionsRequest object.
 */
ListCostCategoryDefinitionsRequest::ListCostCategoryDefinitionsRequest()
    : CostExplorerRequest(new ListCostCategoryDefinitionsRequestPrivate(CostExplorerRequest::ListCostCategoryDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCostCategoryDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCostCategoryDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCostCategoryDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCostCategoryDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::ListCostCategoryDefinitionsRequestPrivate
 * \brief The ListCostCategoryDefinitionsRequestPrivate class provides private implementation for ListCostCategoryDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a ListCostCategoryDefinitionsRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
ListCostCategoryDefinitionsRequestPrivate::ListCostCategoryDefinitionsRequestPrivate(
    const CostExplorerRequest::Action action, ListCostCategoryDefinitionsRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCostCategoryDefinitionsRequest
 * class' copy constructor.
 */
ListCostCategoryDefinitionsRequestPrivate::ListCostCategoryDefinitionsRequestPrivate(
    const ListCostCategoryDefinitionsRequestPrivate &other, ListCostCategoryDefinitionsRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
