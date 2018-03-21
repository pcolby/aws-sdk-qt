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

#include "describeiaminstanceprofileassociationsrequest.h"
#include "describeiaminstanceprofileassociationsrequest_p.h"
#include "describeiaminstanceprofileassociationsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeIamInstanceProfileAssociationsRequest
 *
 * @brief  Implements EC2 DescribeIamInstanceProfileAssociations requests.
 *
 * @see    EC2Client::describeIamInstanceProfileAssociations
 */

/**
 * @brief  Constructs a new DescribeIamInstanceProfileAssociationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIamInstanceProfileAssociationsResponse::DescribeIamInstanceProfileAssociationsResponse(

/**
 * @brief  Constructs a new DescribeIamInstanceProfileAssociationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIamInstanceProfileAssociationsRequest::DescribeIamInstanceProfileAssociationsRequest(const DescribeIamInstanceProfileAssociationsRequest &other)
    : EC2Request(new DescribeIamInstanceProfileAssociationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeIamInstanceProfileAssociationsRequest object.
 */
DescribeIamInstanceProfileAssociationsRequest::DescribeIamInstanceProfileAssociationsRequest()
    : EC2Request(new DescribeIamInstanceProfileAssociationsRequestPrivate(EC2Request::DescribeIamInstanceProfileAssociationsAction, this))
{

}

bool DescribeIamInstanceProfileAssociationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeIamInstanceProfileAssociationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIamInstanceProfileAssociationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeIamInstanceProfileAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIamInstanceProfileAssociationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeIamInstanceProfileAssociationsRequestPrivate
 *
 * @brief  Private implementation for DescribeIamInstanceProfileAssociationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIamInstanceProfileAssociationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeIamInstanceProfileAssociationsRequest instance.
 */
DescribeIamInstanceProfileAssociationsRequestPrivate::DescribeIamInstanceProfileAssociationsRequestPrivate(
    const EC2Request::Action action, DescribeIamInstanceProfileAssociationsRequest * const q)
    : DescribeIamInstanceProfileAssociationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIamInstanceProfileAssociationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIamInstanceProfileAssociationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIamInstanceProfileAssociationsRequest instance.
 */
DescribeIamInstanceProfileAssociationsRequestPrivate::DescribeIamInstanceProfileAssociationsRequestPrivate(
    const DescribeIamInstanceProfileAssociationsRequestPrivate &other, DescribeIamInstanceProfileAssociationsRequest * const q)
    : DescribeIamInstanceProfileAssociationsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
