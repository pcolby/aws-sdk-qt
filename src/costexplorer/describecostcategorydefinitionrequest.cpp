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

#include "describecostcategorydefinitionrequest.h"
#include "describecostcategorydefinitionrequest_p.h"
#include "describecostcategorydefinitionresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DescribeCostCategoryDefinitionRequest
 * \brief The DescribeCostCategoryDefinitionRequest class provides an interface for CostExplorer DescribeCostCategoryDefinition requests.
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
 * \sa CostExplorerClient::describeCostCategoryDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCostCategoryDefinitionRequest::DescribeCostCategoryDefinitionRequest(const DescribeCostCategoryDefinitionRequest &other)
    : CostExplorerRequest(new DescribeCostCategoryDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCostCategoryDefinitionRequest object.
 */
DescribeCostCategoryDefinitionRequest::DescribeCostCategoryDefinitionRequest()
    : CostExplorerRequest(new DescribeCostCategoryDefinitionRequestPrivate(CostExplorerRequest::DescribeCostCategoryDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCostCategoryDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCostCategoryDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCostCategoryDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCostCategoryDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::DescribeCostCategoryDefinitionRequestPrivate
 * \brief The DescribeCostCategoryDefinitionRequestPrivate class provides private implementation for DescribeCostCategoryDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DescribeCostCategoryDefinitionRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
DescribeCostCategoryDefinitionRequestPrivate::DescribeCostCategoryDefinitionRequestPrivate(
    const CostExplorerRequest::Action action, DescribeCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCostCategoryDefinitionRequest
 * class' copy constructor.
 */
DescribeCostCategoryDefinitionRequestPrivate::DescribeCostCategoryDefinitionRequestPrivate(
    const DescribeCostCategoryDefinitionRequestPrivate &other, DescribeCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
