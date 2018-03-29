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

#include "getparametersbypathrequest.h"
#include "getparametersbypathrequest_p.h"
#include "getparametersbypathresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetParametersByPathRequest
 *
 * @brief  Implements SSM GetParametersByPath requests.
 *
 * @see    SSMClient::getParametersByPath
 */

/**
 * @brief  Constructs a new GetParametersByPathRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetParametersByPathRequest::GetParametersByPathRequest(const GetParametersByPathRequest &other)
    : SSMRequest(new GetParametersByPathRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetParametersByPathRequest object.
 */
GetParametersByPathRequest::GetParametersByPathRequest()
    : SSMRequest(new GetParametersByPathRequestPrivate(SSMRequest::GetParametersByPathAction, this))
{

}

bool GetParametersByPathRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetParametersByPathResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetParametersByPathResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetParametersByPathRequest::response(QNetworkReply * const reply) const
{
    return new GetParametersByPathResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetParametersByPathRequestPrivate
 *
 * @brief  Private implementation for GetParametersByPathRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersByPathRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetParametersByPathRequest instance.
 */
GetParametersByPathRequestPrivate::GetParametersByPathRequestPrivate(
    const SSMRequest::Action action, GetParametersByPathRequest * const q)
    : GetParametersByPathPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetParametersByPathRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetParametersByPathRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetParametersByPathRequest instance.
 */
GetParametersByPathRequestPrivate::GetParametersByPathRequestPrivate(
    const GetParametersByPathRequestPrivate &other, GetParametersByPathRequest * const q)
    : GetParametersByPathPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
