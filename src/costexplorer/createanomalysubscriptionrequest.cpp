// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createanomalysubscriptionrequest.h"
#include "createanomalysubscriptionrequest_p.h"
#include "createanomalysubscriptionresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CreateAnomalySubscriptionRequest
 * \brief The CreateAnomalySubscriptionRequest class provides an interface for CostExplorer CreateAnomalySubscription requests.
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
 * \sa CostExplorerClient::createAnomalySubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAnomalySubscriptionRequest::CreateAnomalySubscriptionRequest(const CreateAnomalySubscriptionRequest &other)
    : CostExplorerRequest(new CreateAnomalySubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAnomalySubscriptionRequest object.
 */
CreateAnomalySubscriptionRequest::CreateAnomalySubscriptionRequest()
    : CostExplorerRequest(new CreateAnomalySubscriptionRequestPrivate(CostExplorerRequest::CreateAnomalySubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAnomalySubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAnomalySubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAnomalySubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateAnomalySubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::CreateAnomalySubscriptionRequestPrivate
 * \brief The CreateAnomalySubscriptionRequestPrivate class provides private implementation for CreateAnomalySubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CreateAnomalySubscriptionRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
CreateAnomalySubscriptionRequestPrivate::CreateAnomalySubscriptionRequestPrivate(
    const CostExplorerRequest::Action action, CreateAnomalySubscriptionRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAnomalySubscriptionRequest
 * class' copy constructor.
 */
CreateAnomalySubscriptionRequestPrivate::CreateAnomalySubscriptionRequestPrivate(
    const CreateAnomalySubscriptionRequestPrivate &other, CreateAnomalySubscriptionRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
