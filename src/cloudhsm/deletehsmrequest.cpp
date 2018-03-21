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

#include "deletehsmrequest.h"
#include "deletehsmrequest_p.h"
#include "deletehsmresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  DeleteHsmRequest
 *
 * @brief  Implements CloudHSM DeleteHsm requests.
 *
 * @see    CloudHSMClient::deleteHsm
 */

/**
 * @brief  Constructs a new DeleteHsmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHsmRequest::DeleteHsmRequest(const DeleteHsmRequest &other)
    : CloudHSMRequest(new DeleteHsmRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteHsmRequest object.
 */
DeleteHsmRequest::DeleteHsmRequest()
    : CloudHSMRequest(new DeleteHsmRequestPrivate(CloudHSMRequest::DeleteHsmAction, this))
{

}

bool DeleteHsmRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteHsmResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHsmResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * DeleteHsmRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHsmResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteHsmRequestPrivate
 *
 * @brief  Private implementation for DeleteHsmRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public DeleteHsmRequest instance.
 */
DeleteHsmRequestPrivate::DeleteHsmRequestPrivate(
    const CloudHSMRequest::Action action, DeleteHsmRequest * const q)
    : DeleteHsmPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHsmRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHsmRequest instance.
 */
DeleteHsmRequestPrivate::DeleteHsmRequestPrivate(
    const DeleteHsmRequestPrivate &other, DeleteHsmRequest * const q)
    : DeleteHsmPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
