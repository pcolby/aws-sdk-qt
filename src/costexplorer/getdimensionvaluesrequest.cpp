// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdimensionvaluesrequest.h"
#include "getdimensionvaluesrequest_p.h"
#include "getdimensionvaluesresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetDimensionValuesRequest
 * \brief The GetDimensionValuesRequest class provides an interface for CostExplorer GetDimensionValues requests.
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
 * \sa CostExplorerClient::getDimensionValues
 */

/*!
 * Constructs a copy of \a other.
 */
GetDimensionValuesRequest::GetDimensionValuesRequest(const GetDimensionValuesRequest &other)
    : CostExplorerRequest(new GetDimensionValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDimensionValuesRequest object.
 */
GetDimensionValuesRequest::GetDimensionValuesRequest()
    : CostExplorerRequest(new GetDimensionValuesRequestPrivate(CostExplorerRequest::GetDimensionValuesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDimensionValuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDimensionValuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDimensionValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetDimensionValuesResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetDimensionValuesRequestPrivate
 * \brief The GetDimensionValuesRequestPrivate class provides private implementation for GetDimensionValuesRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetDimensionValuesRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetDimensionValuesRequestPrivate::GetDimensionValuesRequestPrivate(
    const CostExplorerRequest::Action action, GetDimensionValuesRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDimensionValuesRequest
 * class' copy constructor.
 */
GetDimensionValuesRequestPrivate::GetDimensionValuesRequestPrivate(
    const GetDimensionValuesRequestPrivate &other, GetDimensionValuesRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
