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

#include "disablevpcclassiclinkrequest.h"
#include "disablevpcclassiclinkrequest_p.h"
#include "disablevpcclassiclinkresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DisableVpcClassicLinkRequest
 *
 * @brief  Implements EC2 DisableVpcClassicLink requests.
 *
 * @see    EC2Client::disableVpcClassicLink
 */

/**
 * @brief  Constructs a new DisableVpcClassicLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableVpcClassicLinkRequest::DisableVpcClassicLinkRequest(const DisableVpcClassicLinkRequest &other)
    : EC2Request(new DisableVpcClassicLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableVpcClassicLinkRequest object.
 */
DisableVpcClassicLinkRequest::DisableVpcClassicLinkRequest()
    : EC2Request(new DisableVpcClassicLinkRequestPrivate(EC2Request::DisableVpcClassicLinkAction, this))
{

}

bool DisableVpcClassicLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableVpcClassicLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableVpcClassicLinkResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DisableVpcClassicLinkRequest::response(QNetworkReply * const reply) const
{
    return new DisableVpcClassicLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableVpcClassicLinkRequestPrivate
 *
 * @brief  Private implementation for DisableVpcClassicLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableVpcClassicLinkRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DisableVpcClassicLinkRequest instance.
 */
DisableVpcClassicLinkRequestPrivate::DisableVpcClassicLinkRequestPrivate(
    const EC2Request::Action action, DisableVpcClassicLinkRequest * const q)
    : DisableVpcClassicLinkPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableVpcClassicLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableVpcClassicLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableVpcClassicLinkRequest instance.
 */
DisableVpcClassicLinkRequestPrivate::DisableVpcClassicLinkRequestPrivate(
    const DisableVpcClassicLinkRequestPrivate &other, DisableVpcClassicLinkRequest * const q)
    : DisableVpcClassicLinkPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
