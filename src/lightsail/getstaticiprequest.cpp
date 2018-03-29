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

#include "getstaticiprequest.h"
#include "getstaticiprequest_p.h"
#include "getstaticipresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetStaticIpRequest
 *
 * @brief  Implements Lightsail GetStaticIp requests.
 *
 * @see    LightsailClient::getStaticIp
 */

/**
 * @brief  Constructs a new GetStaticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStaticIpRequest::GetStaticIpRequest(const GetStaticIpRequest &other)
    : LightsailRequest(new GetStaticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStaticIpRequest object.
 */
GetStaticIpRequest::GetStaticIpRequest()
    : LightsailRequest(new GetStaticIpRequestPrivate(LightsailRequest::GetStaticIpAction, this))
{

}

bool GetStaticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStaticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStaticIpResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStaticIpRequest::response(QNetworkReply * const reply) const
{
    return new GetStaticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStaticIpRequestPrivate
 *
 * @brief  Private implementation for GetStaticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStaticIpRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetStaticIpRequest instance.
 */
GetStaticIpRequestPrivate::GetStaticIpRequestPrivate(
    const LightsailRequest::Action action, GetStaticIpRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStaticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStaticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStaticIpRequest instance.
 */
GetStaticIpRequestPrivate::GetStaticIpRequestPrivate(
    const GetStaticIpRequestPrivate &other, GetStaticIpRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
