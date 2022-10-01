// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrightsizingrecommendationrequest.h"
#include "getrightsizingrecommendationrequest_p.h"
#include "getrightsizingrecommendationresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetRightsizingRecommendationRequest
 * \brief The GetRightsizingRecommendationRequest class provides an interface for CostExplorer GetRightsizingRecommendation requests.
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
 * \sa CostExplorerClient::getRightsizingRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
GetRightsizingRecommendationRequest::GetRightsizingRecommendationRequest(const GetRightsizingRecommendationRequest &other)
    : CostExplorerRequest(new GetRightsizingRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRightsizingRecommendationRequest object.
 */
GetRightsizingRecommendationRequest::GetRightsizingRecommendationRequest()
    : CostExplorerRequest(new GetRightsizingRecommendationRequestPrivate(CostExplorerRequest::GetRightsizingRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool GetRightsizingRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRightsizingRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRightsizingRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new GetRightsizingRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetRightsizingRecommendationRequestPrivate
 * \brief The GetRightsizingRecommendationRequestPrivate class provides private implementation for GetRightsizingRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetRightsizingRecommendationRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetRightsizingRecommendationRequestPrivate::GetRightsizingRecommendationRequestPrivate(
    const CostExplorerRequest::Action action, GetRightsizingRecommendationRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRightsizingRecommendationRequest
 * class' copy constructor.
 */
GetRightsizingRecommendationRequestPrivate::GetRightsizingRecommendationRequestPrivate(
    const GetRightsizingRecommendationRequestPrivate &other, GetRightsizingRecommendationRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
