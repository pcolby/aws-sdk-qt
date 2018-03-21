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

#include "deregisterfromworkmailrequest.h"
#include "deregisterfromworkmailrequest_p.h"
#include "deregisterfromworkmailresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  DeregisterFromWorkMailRequest
 *
 * @brief  Implements WorkMail DeregisterFromWorkMail requests.
 *
 * @see    WorkMailClient::deregisterFromWorkMail
 */

/**
 * @brief  Constructs a new DeregisterFromWorkMailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterFromWorkMailResponse::DeregisterFromWorkMailResponse(

/**
 * @brief  Constructs a new DeregisterFromWorkMailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterFromWorkMailRequest::DeregisterFromWorkMailRequest(const DeregisterFromWorkMailRequest &other)
    : WorkMailRequest(new DeregisterFromWorkMailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterFromWorkMailRequest object.
 */
DeregisterFromWorkMailRequest::DeregisterFromWorkMailRequest()
    : WorkMailRequest(new DeregisterFromWorkMailRequestPrivate(WorkMailRequest::DeregisterFromWorkMailAction, this))
{

}

bool DeregisterFromWorkMailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterFromWorkMailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterFromWorkMailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * DeregisterFromWorkMailRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterFromWorkMailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterFromWorkMailRequestPrivate
 *
 * @brief  Private implementation for DeregisterFromWorkMailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterFromWorkMailRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DeregisterFromWorkMailRequest instance.
 */
DeregisterFromWorkMailRequestPrivate::DeregisterFromWorkMailRequestPrivate(
    const WorkMailRequest::Action action, DeregisterFromWorkMailRequest * const q)
    : DeregisterFromWorkMailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterFromWorkMailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterFromWorkMailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterFromWorkMailRequest instance.
 */
DeregisterFromWorkMailRequestPrivate::DeregisterFromWorkMailRequestPrivate(
    const DeregisterFromWorkMailRequestPrivate &other, DeregisterFromWorkMailRequest * const q)
    : DeregisterFromWorkMailPrivate(other, q)
{

}
