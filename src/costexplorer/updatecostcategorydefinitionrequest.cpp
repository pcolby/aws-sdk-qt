// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecostcategorydefinitionrequest.h"
#include "updatecostcategorydefinitionrequest_p.h"
#include "updatecostcategorydefinitionresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::UpdateCostCategoryDefinitionRequest
 * \brief The UpdateCostCategoryDefinitionRequest class provides an interface for CostExplorer UpdateCostCategoryDefinition requests.
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
 * \sa CostExplorerClient::updateCostCategoryDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCostCategoryDefinitionRequest::UpdateCostCategoryDefinitionRequest(const UpdateCostCategoryDefinitionRequest &other)
    : CostExplorerRequest(new UpdateCostCategoryDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCostCategoryDefinitionRequest object.
 */
UpdateCostCategoryDefinitionRequest::UpdateCostCategoryDefinitionRequest()
    : CostExplorerRequest(new UpdateCostCategoryDefinitionRequestPrivate(CostExplorerRequest::UpdateCostCategoryDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCostCategoryDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCostCategoryDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCostCategoryDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCostCategoryDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::UpdateCostCategoryDefinitionRequestPrivate
 * \brief The UpdateCostCategoryDefinitionRequestPrivate class provides private implementation for UpdateCostCategoryDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a UpdateCostCategoryDefinitionRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
UpdateCostCategoryDefinitionRequestPrivate::UpdateCostCategoryDefinitionRequestPrivate(
    const CostExplorerRequest::Action action, UpdateCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCostCategoryDefinitionRequest
 * class' copy constructor.
 */
UpdateCostCategoryDefinitionRequestPrivate::UpdateCostCategoryDefinitionRequestPrivate(
    const UpdateCostCategoryDefinitionRequestPrivate &other, UpdateCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
