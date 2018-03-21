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

#include "listservicespecificcredentialsrequest.h"
#include "listservicespecificcredentialsrequest_p.h"
#include "listservicespecificcredentialsresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListServiceSpecificCredentialsRequest
 *
 * @brief  Implements IAM ListServiceSpecificCredentials requests.
 *
 * @see    IAMClient::listServiceSpecificCredentials
 */

/**
 * @brief  Constructs a new ListServiceSpecificCredentialsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListServiceSpecificCredentialsRequest::ListServiceSpecificCredentialsRequest(const ListServiceSpecificCredentialsRequest &other)
    : IAMRequest(new ListServiceSpecificCredentialsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListServiceSpecificCredentialsRequest object.
 */
ListServiceSpecificCredentialsRequest::ListServiceSpecificCredentialsRequest()
    : IAMRequest(new ListServiceSpecificCredentialsRequestPrivate(IAMRequest::ListServiceSpecificCredentialsAction, this))
{

}

bool ListServiceSpecificCredentialsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListServiceSpecificCredentialsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListServiceSpecificCredentialsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListServiceSpecificCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new ListServiceSpecificCredentialsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListServiceSpecificCredentialsRequestPrivate
 *
 * @brief  Private implementation for ListServiceSpecificCredentialsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServiceSpecificCredentialsRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListServiceSpecificCredentialsRequest instance.
 */
ListServiceSpecificCredentialsRequestPrivate::ListServiceSpecificCredentialsRequestPrivate(
    const IAMRequest::Action action, ListServiceSpecificCredentialsRequest * const q)
    : ListServiceSpecificCredentialsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListServiceSpecificCredentialsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListServiceSpecificCredentialsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListServiceSpecificCredentialsRequest instance.
 */
ListServiceSpecificCredentialsRequestPrivate::ListServiceSpecificCredentialsRequestPrivate(
    const ListServiceSpecificCredentialsRequestPrivate &other, ListServiceSpecificCredentialsRequest * const q)
    : ListServiceSpecificCredentialsPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
