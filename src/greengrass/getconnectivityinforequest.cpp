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

#include "getconnectivityinforequest.h"
#include "getconnectivityinforequest_p.h"
#include "getconnectivityinforesponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetConnectivityInfoRequest
 *
 * @brief  Implements Greengrass GetConnectivityInfo requests.
 *
 * @see    GreengrassClient::getConnectivityInfo
 */

/**
 * @brief  Constructs a new GetConnectivityInfoRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetConnectivityInfoRequest::GetConnectivityInfoRequest(const GetConnectivityInfoRequest &other)
    : GreengrassRequest(new GetConnectivityInfoRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetConnectivityInfoRequest object.
 */
GetConnectivityInfoRequest::GetConnectivityInfoRequest()
    : GreengrassRequest(new GetConnectivityInfoRequestPrivate(GreengrassRequest::GetConnectivityInfoAction, this))
{

}

bool GetConnectivityInfoRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetConnectivityInfoResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetConnectivityInfoResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetConnectivityInfoRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectivityInfoResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetConnectivityInfoRequestPrivate
 *
 * @brief  Private implementation for GetConnectivityInfoRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectivityInfoRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetConnectivityInfoRequest instance.
 */
GetConnectivityInfoRequestPrivate::GetConnectivityInfoRequestPrivate(
    const GreengrassRequest::Action action, GetConnectivityInfoRequest * const q)
    : GetConnectivityInfoPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectivityInfoRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetConnectivityInfoRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetConnectivityInfoRequest instance.
 */
GetConnectivityInfoRequestPrivate::GetConnectivityInfoRequestPrivate(
    const GetConnectivityInfoRequestPrivate &other, GetConnectivityInfoRequest * const q)
    : GetConnectivityInfoPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
