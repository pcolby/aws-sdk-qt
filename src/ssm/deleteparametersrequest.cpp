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

#include "deleteparametersrequest.h"
#include "deleteparametersrequest_p.h"
#include "deleteparametersresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DeleteParametersRequest
 *
 * @brief  Implements SSM DeleteParameters requests.
 *
 * @see    SSMClient::deleteParameters
 */

/**
 * @brief  Constructs a new DeleteParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteParametersRequest::DeleteParametersRequest(const DeleteParametersRequest &other)
    : SSMRequest(new DeleteParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteParametersRequest object.
 */
DeleteParametersRequest::DeleteParametersRequest()
    : SSMRequest(new DeleteParametersRequestPrivate(SSMRequest::DeleteParametersAction, this))
{

}

bool DeleteParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DeleteParametersRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteParametersRequestPrivate
 *
 * @brief  Private implementation for DeleteParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParametersRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeleteParametersRequest instance.
 */
DeleteParametersRequestPrivate::DeleteParametersRequestPrivate(
    const SSMRequest::Action action, DeleteParametersRequest * const q)
    : DeleteParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteParametersRequest instance.
 */
DeleteParametersRequestPrivate::DeleteParametersRequestPrivate(
    const DeleteParametersRequestPrivate &other, DeleteParametersRequest * const q)
    : DeleteParametersPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
