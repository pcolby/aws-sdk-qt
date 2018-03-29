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

#include "updateenvironmentrequest.h"
#include "updateenvironmentrequest_p.h"
#include "updateenvironmentresponse.h"
#include "cloud9request_p.h"

namespace AWS {
namespace Cloud9 {

/**
 * @class  UpdateEnvironmentRequest
 *
 * @brief  Implements Cloud9 UpdateEnvironment requests.
 *
 * @see    Cloud9Client::updateEnvironment
 */

/**
 * @brief  Constructs a new UpdateEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest(const UpdateEnvironmentRequest &other)
    : Cloud9Request(new UpdateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEnvironmentRequest object.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest()
    : Cloud9Request(new UpdateEnvironmentRequestPrivate(Cloud9Request::UpdateEnvironmentAction, this))
{

}

bool UpdateEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEnvironmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * UpdateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEnvironmentRequestPrivate
 *
 * @brief  Private implementation for UpdateEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEnvironmentRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public UpdateEnvironmentRequest instance.
 */
UpdateEnvironmentRequestPrivate::UpdateEnvironmentRequestPrivate(
    const Cloud9Request::Action action, UpdateEnvironmentRequest * const q)
    : UpdateEnvironmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEnvironmentRequest instance.
 */
UpdateEnvironmentRequestPrivate::UpdateEnvironmentRequestPrivate(
    const UpdateEnvironmentRequestPrivate &other, UpdateEnvironmentRequest * const q)
    : UpdateEnvironmentPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace AWS
