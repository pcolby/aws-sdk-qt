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

#include "describeelasticgpusrequest.h"
#include "describeelasticgpusrequest_p.h"
#include "describeelasticgpusresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeElasticGpusRequest
 *
 * @brief  Implements EC2 DescribeElasticGpus requests.
 *
 * @see    EC2Client::describeElasticGpus
 */

/**
 * @brief  Constructs a new DescribeElasticGpusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticGpusResponse::DescribeElasticGpusResponse(

/**
 * @brief  Constructs a new DescribeElasticGpusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticGpusRequest::DescribeElasticGpusRequest(const DescribeElasticGpusRequest &other)
    : EC2Request(new DescribeElasticGpusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeElasticGpusRequest object.
 */
DescribeElasticGpusRequest::DescribeElasticGpusRequest()
    : EC2Request(new DescribeElasticGpusRequestPrivate(EC2Request::DescribeElasticGpusAction, this))
{

}

bool DescribeElasticGpusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeElasticGpusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticGpusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeElasticGpusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticGpusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeElasticGpusRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticGpusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticGpusRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeElasticGpusRequest instance.
 */
DescribeElasticGpusRequestPrivate::DescribeElasticGpusRequestPrivate(
    const EC2Request::Action action, DescribeElasticGpusRequest * const q)
    : DescribeElasticGpusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticGpusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticGpusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticGpusRequest instance.
 */
DescribeElasticGpusRequestPrivate::DescribeElasticGpusRequestPrivate(
    const DescribeElasticGpusRequestPrivate &other, DescribeElasticGpusRequest * const q)
    : DescribeElasticGpusPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
