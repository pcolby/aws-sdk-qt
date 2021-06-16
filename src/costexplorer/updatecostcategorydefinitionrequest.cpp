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
