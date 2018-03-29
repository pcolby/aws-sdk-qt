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

#include "getoperationsrequest.h"
#include "getoperationsrequest_p.h"
#include "getoperationsresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetOperationsRequest
 *
 * @brief  Implements Lightsail GetOperations requests.
 *
 * @see    LightsailClient::getOperations
 */

/**
 * @brief  Constructs a new GetOperationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOperationsRequest::GetOperationsRequest(const GetOperationsRequest &other)
    : LightsailRequest(new GetOperationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOperationsRequest object.
 */
GetOperationsRequest::GetOperationsRequest()
    : LightsailRequest(new GetOperationsRequestPrivate(LightsailRequest::GetOperationsAction, this))
{

}

bool GetOperationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOperationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOperationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOperationsRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOperationsRequestPrivate
 *
 * @brief  Private implementation for GetOperationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetOperationsRequest instance.
 */
GetOperationsRequestPrivate::GetOperationsRequestPrivate(
    const LightsailRequest::Action action, GetOperationsRequest * const q)
    : GetOperationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOperationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOperationsRequest instance.
 */
GetOperationsRequestPrivate::GetOperationsRequestPrivate(
    const GetOperationsRequestPrivate &other, GetOperationsRequest * const q)
    : GetOperationsPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
