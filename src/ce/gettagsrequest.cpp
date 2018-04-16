/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gettagsrequest.h"
#include "gettagsrequest_p.h"
#include "gettagsresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetTagsRequest
 *
 * \brief The GetTagsRequest class encapsulates CostExplorer GetTags requests.
 *
 * \ingroup CostExplorer
 *
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for DynamoDB database tables in your production environment.
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
 * \sa CostExplorerClient::getTags
 */

/*!
 * @brief  Constructs a new GetTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTagsRequest::GetTagsRequest(const GetTagsRequest &other)
    : CostExplorerRequest(new GetTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTagsRequest object.
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
 * @brief  Construct an GetTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CostExplorerClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagsRequest::response(QNetworkReply * const reply) const
{
    return new GetTagsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTagsRequestPrivate
 *
 * @brief  Private implementation for GetTagsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTagsRequestPrivate object.
 *
 * @param  action  CostExplorer action being performed.
 * @param  q       Pointer to this object's public GetTagsRequest instance.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const CostExplorerRequest::Action action, GetTagsRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTagsRequest instance.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const GetTagsRequestPrivate &other, GetTagsRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
