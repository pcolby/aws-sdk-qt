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

#include "getparameterrequest.h"
#include "getparameterrequest_p.h"
#include "getparameterresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetParameterRequest
 *
 * @brief  Implements SSM GetParameter requests.
 *
 * @see    SSMClient::getParameter
 */

/**
 * @brief  Constructs a new GetParameterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetParameterRequest::GetParameterRequest(const GetParameterRequest &other)
    : SSMRequest(new GetParameterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetParameterRequest object.
 */
GetParameterRequest::GetParameterRequest()
    : SSMRequest(new GetParameterRequestPrivate(SSMRequest::GetParameterAction, this))
{

}

bool GetParameterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetParameterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetParameterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetParameterRequest::response(QNetworkReply * const reply) const
{
    return new GetParameterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetParameterRequestPrivate
 *
 * @brief  Private implementation for GetParameterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParameterRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetParameterRequest instance.
 */
GetParameterRequestPrivate::GetParameterRequestPrivate(
    const SSMRequest::Action action, GetParameterRequest * const q)
    : GetParameterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetParameterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetParameterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetParameterRequest instance.
 */
GetParameterRequestPrivate::GetParameterRequestPrivate(
    const GetParameterRequestPrivate &other, GetParameterRequest * const q)
    : GetParameterPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
