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

#include "deletelunaclientrequest.h"
#include "deletelunaclientrequest_p.h"
#include "deletelunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/**
 * @class  DeleteLunaClientRequest
 *
 * @brief  Implements CloudHSM DeleteLunaClient requests.
 *
 * @see    CloudHSMClient::deleteLunaClient
 */

/**
 * @brief  Constructs a new DeleteLunaClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLunaClientRequest::DeleteLunaClientRequest(const DeleteLunaClientRequest &other)
    : CloudHSMRequest(new DeleteLunaClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLunaClientRequest object.
 */
DeleteLunaClientRequest::DeleteLunaClientRequest()
    : CloudHSMRequest(new DeleteLunaClientRequestPrivate(CloudHSMRequest::DeleteLunaClientAction, this))
{

}

bool DeleteLunaClientRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLunaClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLunaClientResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLunaClientResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLunaClientRequestPrivate
 *
 * @brief  Private implementation for DeleteLunaClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLunaClientRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public DeleteLunaClientRequest instance.
 */
DeleteLunaClientRequestPrivate::DeleteLunaClientRequestPrivate(
    const CloudHSMRequest::Action action, DeleteLunaClientRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLunaClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLunaClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLunaClientRequest instance.
 */
DeleteLunaClientRequestPrivate::DeleteLunaClientRequestPrivate(
    const DeleteLunaClientRequestPrivate &other, DeleteLunaClientRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
