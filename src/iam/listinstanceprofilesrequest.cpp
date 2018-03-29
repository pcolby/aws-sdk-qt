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

#include "listinstanceprofilesrequest.h"
#include "listinstanceprofilesrequest_p.h"
#include "listinstanceprofilesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListInstanceProfilesRequest
 *
 * @brief  Implements IAM ListInstanceProfiles requests.
 *
 * @see    IAMClient::listInstanceProfiles
 */

/**
 * @brief  Constructs a new ListInstanceProfilesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInstanceProfilesRequest::ListInstanceProfilesRequest(const ListInstanceProfilesRequest &other)
    : IAMRequest(new ListInstanceProfilesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInstanceProfilesRequest object.
 */
ListInstanceProfilesRequest::ListInstanceProfilesRequest()
    : IAMRequest(new ListInstanceProfilesRequestPrivate(IAMRequest::ListInstanceProfilesAction, this))
{

}

bool ListInstanceProfilesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInstanceProfilesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInstanceProfilesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListInstanceProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceProfilesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInstanceProfilesRequestPrivate
 *
 * @brief  Private implementation for ListInstanceProfilesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceProfilesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListInstanceProfilesRequest instance.
 */
ListInstanceProfilesRequestPrivate::ListInstanceProfilesRequestPrivate(
    const IAMRequest::Action action, ListInstanceProfilesRequest * const q)
    : ListInstanceProfilesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceProfilesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceProfilesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInstanceProfilesRequest instance.
 */
ListInstanceProfilesRequestPrivate::ListInstanceProfilesRequestPrivate(
    const ListInstanceProfilesRequestPrivate &other, ListInstanceProfilesRequest * const q)
    : ListInstanceProfilesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
