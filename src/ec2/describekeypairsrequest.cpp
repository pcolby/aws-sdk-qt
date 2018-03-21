/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describekeypairsrequest.h"
#include "describekeypairsrequest_p.h"
#include "describekeypairsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeKeyPairsRequest
 *
 * @brief  Implements EC2 DescribeKeyPairs requests.
 *
 * @see    EC2Client::describeKeyPairs
 */

/**
 * @brief  Constructs a new DescribeKeyPairsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeKeyPairsResponse::DescribeKeyPairsResponse(

/**
 * @brief  Constructs a new DescribeKeyPairsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeKeyPairsRequest::DescribeKeyPairsRequest(const DescribeKeyPairsRequest &other)
    : EC2Request(new DescribeKeyPairsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeKeyPairsRequest object.
 */
DescribeKeyPairsRequest::DescribeKeyPairsRequest()
    : EC2Request(new DescribeKeyPairsRequestPrivate(EC2Request::DescribeKeyPairsAction, this))
{

}

bool DescribeKeyPairsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeKeyPairsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeKeyPairsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeKeyPairsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeKeyPairsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeKeyPairsRequestPrivate
 *
 * @brief  Private implementation for DescribeKeyPairsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeKeyPairsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeKeyPairsRequest instance.
 */
DescribeKeyPairsRequestPrivate::DescribeKeyPairsRequestPrivate(
    const EC2Request::Action action, DescribeKeyPairsRequest * const q)
    : DescribeKeyPairsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeKeyPairsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeKeyPairsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeKeyPairsRequest instance.
 */
DescribeKeyPairsRequestPrivate::DescribeKeyPairsRequestPrivate(
    const DescribeKeyPairsRequestPrivate &other, DescribeKeyPairsRequest * const q)
    : DescribeKeyPairsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
