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

#include "deletehapgrequest.h"
#include "deletehapgrequest_p.h"
#include "deletehapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/**
 * @class  DeleteHapgRequest
 *
 * @brief  Implements CloudHSM DeleteHapg requests.
 *
 * @see    CloudHSMClient::deleteHapg
 */

/**
 * @brief  Constructs a new DeleteHapgRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHapgRequest::DeleteHapgRequest(const DeleteHapgRequest &other)
    : CloudHSMRequest(new DeleteHapgRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteHapgRequest object.
 */
DeleteHapgRequest::DeleteHapgRequest()
    : CloudHSMRequest(new DeleteHapgRequestPrivate(CloudHSMRequest::DeleteHapgAction, this))
{

}

bool DeleteHapgRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteHapgResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHapgResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHapgRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHapgResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteHapgRequestPrivate
 *
 * @brief  Private implementation for DeleteHapgRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHapgRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public DeleteHapgRequest instance.
 */
DeleteHapgRequestPrivate::DeleteHapgRequestPrivate(
    const CloudHSMRequest::Action action, DeleteHapgRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHapgRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHapgRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHapgRequest instance.
 */
DeleteHapgRequestPrivate::DeleteHapgRequestPrivate(
    const DeleteHapgRequestPrivate &other, DeleteHapgRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
