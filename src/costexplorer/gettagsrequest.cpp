// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagsrequest.h"
#include "gettagsrequest_p.h"
#include "gettagsresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetTagsRequest
 * \brief The GetTagsRequest class provides an interface for CostExplorer GetTags requests.
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
 * \sa CostExplorerClient::getTags
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagsRequest::GetTagsRequest(const GetTagsRequest &other)
    : CostExplorerRequest(new GetTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagsRequest object.
 */
GetTagsRequest::GetTagsRequest()
    : CostExplorerRequest(new GetTagsRequestPrivate(CostExplorerRequest::GetTagsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagsRequest::response(QNetworkReply * const reply) const
{
    return new GetTagsResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetTagsRequestPrivate
 * \brief The GetTagsRequestPrivate class provides private implementation for GetTagsRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetTagsRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const CostExplorerRequest::Action action, GetTagsRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTagsRequest
 * class' copy constructor.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const GetTagsRequestPrivate &other, GetTagsRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
