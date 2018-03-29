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

#include "deleteenvironmentrequest.h"
#include "deleteenvironmentrequest_p.h"
#include "deleteenvironmentresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/**
 * @class  DeleteEnvironmentRequest
 *
 * @brief  Implements Cloud9 DeleteEnvironment requests.
 *
 * @see    Cloud9Client::deleteEnvironment
 */

/**
 * @brief  Constructs a new DeleteEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest(const DeleteEnvironmentRequest &other)
    : Cloud9Request(new DeleteEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEnvironmentRequest object.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest()
    : Cloud9Request(new DeleteEnvironmentRequestPrivate(Cloud9Request::DeleteEnvironmentAction, this))
{

}

bool DeleteEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEnvironmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * DeleteEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEnvironmentRequestPrivate
 *
 * @brief  Private implementation for DeleteEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public DeleteEnvironmentRequest instance.
 */
DeleteEnvironmentRequestPrivate::DeleteEnvironmentRequestPrivate(
    const Cloud9Request::Action action, DeleteEnvironmentRequest * const q)
    : DeleteEnvironmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEnvironmentRequest instance.
 */
DeleteEnvironmentRequestPrivate::DeleteEnvironmentRequestPrivate(
    const DeleteEnvironmentRequestPrivate &other, DeleteEnvironmentRequest * const q)
    : DeleteEnvironmentPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
