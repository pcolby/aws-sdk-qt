// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcostcategorydefinitionrequest.h"
#include "createcostcategorydefinitionrequest_p.h"
#include "createcostcategorydefinitionresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CreateCostCategoryDefinitionRequest
 * \brief The CreateCostCategoryDefinitionRequest class provides an interface for CostExplorer CreateCostCategoryDefinition requests.
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
 * \sa CostExplorerClient::createCostCategoryDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCostCategoryDefinitionRequest::CreateCostCategoryDefinitionRequest(const CreateCostCategoryDefinitionRequest &other)
    : CostExplorerRequest(new CreateCostCategoryDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCostCategoryDefinitionRequest object.
 */
CreateCostCategoryDefinitionRequest::CreateCostCategoryDefinitionRequest()
    : CostExplorerRequest(new CreateCostCategoryDefinitionRequestPrivate(CostExplorerRequest::CreateCostCategoryDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCostCategoryDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCostCategoryDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCostCategoryDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCostCategoryDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::CreateCostCategoryDefinitionRequestPrivate
 * \brief The CreateCostCategoryDefinitionRequestPrivate class provides private implementation for CreateCostCategoryDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CreateCostCategoryDefinitionRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
CreateCostCategoryDefinitionRequestPrivate::CreateCostCategoryDefinitionRequestPrivate(
    const CostExplorerRequest::Action action, CreateCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCostCategoryDefinitionRequest
 * class' copy constructor.
 */
CreateCostCategoryDefinitionRequestPrivate::CreateCostCategoryDefinitionRequestPrivate(
    const CreateCostCategoryDefinitionRequestPrivate &other, CreateCostCategoryDefinitionRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
