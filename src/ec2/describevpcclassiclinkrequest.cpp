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

#include "describevpcclassiclinkrequest.h"
#include "describevpcclassiclinkrequest_p.h"
#include "describevpcclassiclinkresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpcClassicLinkRequest
 *
 * @brief  Implements EC2 DescribeVpcClassicLink requests.
 *
 * @see    EC2Client::describeVpcClassicLink
 */

/**
 * @brief  Constructs a new DescribeVpcClassicLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcClassicLinkRequest::DescribeVpcClassicLinkRequest(const DescribeVpcClassicLinkRequest &other)
    : EC2Request(new DescribeVpcClassicLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcClassicLinkRequest object.
 */
DescribeVpcClassicLinkRequest::DescribeVpcClassicLinkRequest()
    : EC2Request(new DescribeVpcClassicLinkRequestPrivate(EC2Request::DescribeVpcClassicLinkAction, this))
{

}

bool DescribeVpcClassicLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcClassicLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcClassicLinkResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcClassicLinkRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcClassicLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcClassicLinkRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcClassicLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcClassicLinkRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcClassicLinkRequest instance.
 */
DescribeVpcClassicLinkRequestPrivate::DescribeVpcClassicLinkRequestPrivate(
    const EC2Request::Action action, DescribeVpcClassicLinkRequest * const q)
    : DescribeVpcClassicLinkPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcClassicLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcClassicLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcClassicLinkRequest instance.
 */
DescribeVpcClassicLinkRequestPrivate::DescribeVpcClassicLinkRequestPrivate(
    const DescribeVpcClassicLinkRequestPrivate &other, DescribeVpcClassicLinkRequest * const q)
    : DescribeVpcClassicLinkPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
