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

#include "deleteparameterrequest.h"
#include "deleteparameterrequest_p.h"
#include "deleteparameterresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DeleteParameterRequest
 *
 * @brief  Implements SSM DeleteParameter requests.
 *
 * @see    SSMClient::deleteParameter
 */

/**
 * @brief  Constructs a new DeleteParameterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteParameterRequest::DeleteParameterRequest(const DeleteParameterRequest &other)
    : SSMRequest(new DeleteParameterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteParameterRequest object.
 */
DeleteParameterRequest::DeleteParameterRequest()
    : SSMRequest(new DeleteParameterRequestPrivate(SSMRequest::DeleteParameterAction, this))
{

}

bool DeleteParameterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteParameterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteParameterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteParameterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParameterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteParameterRequestPrivate
 *
 * @brief  Private implementation for DeleteParameterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParameterRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeleteParameterRequest instance.
 */
DeleteParameterRequestPrivate::DeleteParameterRequestPrivate(
    const SSMRequest::Action action, DeleteParameterRequest * const q)
    : DeleteParameterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParameterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteParameterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteParameterRequest instance.
 */
DeleteParameterRequestPrivate::DeleteParameterRequestPrivate(
    const DeleteParameterRequestPrivate &other, DeleteParameterRequest * const q)
    : DeleteParameterPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
