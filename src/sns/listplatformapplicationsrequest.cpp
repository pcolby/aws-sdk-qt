/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listplatformapplicationsrequest.h"
#include "listplatformapplicationsrequest_p.h"
#include "listplatformapplicationsresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  ListPlatformApplicationsRequest
 *
 * @brief  Implements SNS ListPlatformApplications requests.
 *
 * @see    SNSClient::listPlatformApplications
 */

/**
 * @brief  Constructs a new ListPlatformApplicationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPlatformApplicationsRequest::ListPlatformApplicationsRequest(const ListPlatformApplicationsRequest &other)
    : SNSRequest(new ListPlatformApplicationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPlatformApplicationsRequest object.
 */
ListPlatformApplicationsRequest::ListPlatformApplicationsRequest()
    : SNSRequest(new ListPlatformApplicationsRequestPrivate(SNSRequest::ListPlatformApplicationsAction, this))
{

}

bool ListPlatformApplicationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPlatformApplicationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPlatformApplicationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * ListPlatformApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListPlatformApplicationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPlatformApplicationsRequestPrivate
 *
 * @brief  Private implementation for ListPlatformApplicationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPlatformApplicationsRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ListPlatformApplicationsRequest instance.
 */
ListPlatformApplicationsRequestPrivate::ListPlatformApplicationsRequestPrivate(
    const SNSRequest::Action action, ListPlatformApplicationsRequest * const q)
    : ListPlatformApplicationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPlatformApplicationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPlatformApplicationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPlatformApplicationsRequest instance.
 */
ListPlatformApplicationsRequestPrivate::ListPlatformApplicationsRequestPrivate(
    const ListPlatformApplicationsRequestPrivate &other, ListPlatformApplicationsRequest * const q)
    : ListPlatformApplicationsPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
