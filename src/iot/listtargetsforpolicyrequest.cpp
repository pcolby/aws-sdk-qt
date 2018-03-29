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

#include "listtargetsforpolicyrequest.h"
#include "listtargetsforpolicyrequest_p.h"
#include "listtargetsforpolicyresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ListTargetsForPolicyRequest
 *
 * @brief  Implements IoT ListTargetsForPolicy requests.
 *
 * @see    IoTClient::listTargetsForPolicy
 */

/**
 * @brief  Constructs a new ListTargetsForPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTargetsForPolicyRequest::ListTargetsForPolicyRequest(const ListTargetsForPolicyRequest &other)
    : IoTRequest(new ListTargetsForPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTargetsForPolicyRequest object.
 */
ListTargetsForPolicyRequest::ListTargetsForPolicyRequest()
    : IoTRequest(new ListTargetsForPolicyRequestPrivate(IoTRequest::ListTargetsForPolicyAction, this))
{

}

bool ListTargetsForPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTargetsForPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTargetsForPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTargetsForPolicyRequest::response(QNetworkReply * const reply) const
{
    return new ListTargetsForPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTargetsForPolicyRequestPrivate
 *
 * @brief  Private implementation for ListTargetsForPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsForPolicyRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListTargetsForPolicyRequest instance.
 */
ListTargetsForPolicyRequestPrivate::ListTargetsForPolicyRequestPrivate(
    const IoTRequest::Action action, ListTargetsForPolicyRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsForPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTargetsForPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTargetsForPolicyRequest instance.
 */
ListTargetsForPolicyRequestPrivate::ListTargetsForPolicyRequestPrivate(
    const ListTargetsForPolicyRequestPrivate &other, ListTargetsForPolicyRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
