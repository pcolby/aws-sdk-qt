// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createanomalymonitorrequest.h"
#include "createanomalymonitorrequest_p.h"
#include "createanomalymonitorresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CreateAnomalyMonitorRequest
 * \brief The CreateAnomalyMonitorRequest class provides an interface for CostExplorer CreateAnomalyMonitor requests.
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
 * \sa CostExplorerClient::createAnomalyMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAnomalyMonitorRequest::CreateAnomalyMonitorRequest(const CreateAnomalyMonitorRequest &other)
    : CostExplorerRequest(new CreateAnomalyMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAnomalyMonitorRequest object.
 */
CreateAnomalyMonitorRequest::CreateAnomalyMonitorRequest()
    : CostExplorerRequest(new CreateAnomalyMonitorRequestPrivate(CostExplorerRequest::CreateAnomalyMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAnomalyMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAnomalyMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAnomalyMonitorRequest::response(QNetworkReply * const reply) const
{
    return new CreateAnomalyMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::CreateAnomalyMonitorRequestPrivate
 * \brief The CreateAnomalyMonitorRequestPrivate class provides private implementation for CreateAnomalyMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CreateAnomalyMonitorRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
CreateAnomalyMonitorRequestPrivate::CreateAnomalyMonitorRequestPrivate(
    const CostExplorerRequest::Action action, CreateAnomalyMonitorRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAnomalyMonitorRequest
 * class' copy constructor.
 */
CreateAnomalyMonitorRequestPrivate::CreateAnomalyMonitorRequestPrivate(
    const CreateAnomalyMonitorRequestPrivate &other, CreateAnomalyMonitorRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
