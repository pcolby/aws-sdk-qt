// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsavingsplanspurchaserecommendationrequest.h"
#include "getsavingsplanspurchaserecommendationrequest_p.h"
#include "getsavingsplanspurchaserecommendationresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansPurchaseRecommendationRequest
 * \brief The GetSavingsPlansPurchaseRecommendationRequest class provides an interface for CostExplorer GetSavingsPlansPurchaseRecommendation requests.
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
 * \sa CostExplorerClient::getSavingsPlansPurchaseRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
GetSavingsPlansPurchaseRecommendationRequest::GetSavingsPlansPurchaseRecommendationRequest(const GetSavingsPlansPurchaseRecommendationRequest &other)
    : CostExplorerRequest(new GetSavingsPlansPurchaseRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSavingsPlansPurchaseRecommendationRequest object.
 */
GetSavingsPlansPurchaseRecommendationRequest::GetSavingsPlansPurchaseRecommendationRequest()
    : CostExplorerRequest(new GetSavingsPlansPurchaseRecommendationRequestPrivate(CostExplorerRequest::GetSavingsPlansPurchaseRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool GetSavingsPlansPurchaseRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSavingsPlansPurchaseRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSavingsPlansPurchaseRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new GetSavingsPlansPurchaseRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansPurchaseRecommendationRequestPrivate
 * \brief The GetSavingsPlansPurchaseRecommendationRequestPrivate class provides private implementation for GetSavingsPlansPurchaseRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetSavingsPlansPurchaseRecommendationRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetSavingsPlansPurchaseRecommendationRequestPrivate::GetSavingsPlansPurchaseRecommendationRequestPrivate(
    const CostExplorerRequest::Action action, GetSavingsPlansPurchaseRecommendationRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSavingsPlansPurchaseRecommendationRequest
 * class' copy constructor.
 */
GetSavingsPlansPurchaseRecommendationRequestPrivate::GetSavingsPlansPurchaseRecommendationRequestPrivate(
    const GetSavingsPlansPurchaseRecommendationRequestPrivate &other, GetSavingsPlansPurchaseRecommendationRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
