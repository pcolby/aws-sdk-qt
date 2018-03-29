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

#include "enablevpcclassiclinkdnssupportrequest.h"
#include "enablevpcclassiclinkdnssupportrequest_p.h"
#include "enablevpcclassiclinkdnssupportresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  EnableVpcClassicLinkDnsSupportRequest
 *
 * @brief  Implements EC2 EnableVpcClassicLinkDnsSupport requests.
 *
 * @see    EC2Client::enableVpcClassicLinkDnsSupport
 */

/**
 * @brief  Constructs a new EnableVpcClassicLinkDnsSupportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableVpcClassicLinkDnsSupportRequest::EnableVpcClassicLinkDnsSupportRequest(const EnableVpcClassicLinkDnsSupportRequest &other)
    : EC2Request(new EnableVpcClassicLinkDnsSupportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableVpcClassicLinkDnsSupportRequest object.
 */
EnableVpcClassicLinkDnsSupportRequest::EnableVpcClassicLinkDnsSupportRequest()
    : EC2Request(new EnableVpcClassicLinkDnsSupportRequestPrivate(EC2Request::EnableVpcClassicLinkDnsSupportAction, this))
{

}

bool EnableVpcClassicLinkDnsSupportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableVpcClassicLinkDnsSupportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableVpcClassicLinkDnsSupportResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * EnableVpcClassicLinkDnsSupportRequest::response(QNetworkReply * const reply) const
{
    return new EnableVpcClassicLinkDnsSupportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableVpcClassicLinkDnsSupportRequestPrivate
 *
 * @brief  Private implementation for EnableVpcClassicLinkDnsSupportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableVpcClassicLinkDnsSupportRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public EnableVpcClassicLinkDnsSupportRequest instance.
 */
EnableVpcClassicLinkDnsSupportRequestPrivate::EnableVpcClassicLinkDnsSupportRequestPrivate(
    const EC2Request::Action action, EnableVpcClassicLinkDnsSupportRequest * const q)
    : EnableVpcClassicLinkDnsSupportPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableVpcClassicLinkDnsSupportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableVpcClassicLinkDnsSupportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableVpcClassicLinkDnsSupportRequest instance.
 */
EnableVpcClassicLinkDnsSupportRequestPrivate::EnableVpcClassicLinkDnsSupportRequestPrivate(
    const EnableVpcClassicLinkDnsSupportRequestPrivate &other, EnableVpcClassicLinkDnsSupportRequest * const q)
    : EnableVpcClassicLinkDnsSupportPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
