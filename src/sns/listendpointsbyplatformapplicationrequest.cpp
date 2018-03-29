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

#include "listendpointsbyplatformapplicationrequest.h"
#include "listendpointsbyplatformapplicationrequest_p.h"
#include "listendpointsbyplatformapplicationresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  ListEndpointsByPlatformApplicationRequest
 *
 * @brief  Implements SNS ListEndpointsByPlatformApplication requests.
 *
 * @see    SNSClient::listEndpointsByPlatformApplication
 */

/**
 * @brief  Constructs a new ListEndpointsByPlatformApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListEndpointsByPlatformApplicationRequest::ListEndpointsByPlatformApplicationRequest(const ListEndpointsByPlatformApplicationRequest &other)
    : SNSRequest(new ListEndpointsByPlatformApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListEndpointsByPlatformApplicationRequest object.
 */
ListEndpointsByPlatformApplicationRequest::ListEndpointsByPlatformApplicationRequest()
    : SNSRequest(new ListEndpointsByPlatformApplicationRequestPrivate(SNSRequest::ListEndpointsByPlatformApplicationAction, this))
{

}

bool ListEndpointsByPlatformApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListEndpointsByPlatformApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListEndpointsByPlatformApplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * ListEndpointsByPlatformApplicationRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointsByPlatformApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListEndpointsByPlatformApplicationRequestPrivate
 *
 * @brief  Private implementation for ListEndpointsByPlatformApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointsByPlatformApplicationRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ListEndpointsByPlatformApplicationRequest instance.
 */
ListEndpointsByPlatformApplicationRequestPrivate::ListEndpointsByPlatformApplicationRequestPrivate(
    const SNSRequest::Action action, ListEndpointsByPlatformApplicationRequest * const q)
    : ListEndpointsByPlatformApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointsByPlatformApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointsByPlatformApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListEndpointsByPlatformApplicationRequest instance.
 */
ListEndpointsByPlatformApplicationRequestPrivate::ListEndpointsByPlatformApplicationRequestPrivate(
    const ListEndpointsByPlatformApplicationRequestPrivate &other, ListEndpointsByPlatformApplicationRequest * const q)
    : ListEndpointsByPlatformApplicationPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
