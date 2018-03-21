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

#include "describeactivityrequest.h"
#include "describeactivityrequest_p.h"
#include "describeactivityresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  DescribeActivityRequest
 *
 * @brief  Implements SFN DescribeActivity requests.
 *
 * @see    SFNClient::describeActivity
 */

/**
 * @brief  Constructs a new DescribeActivityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeActivityRequest::DescribeActivityRequest(const DescribeActivityRequest &other)
    : SFNRequest(new DescribeActivityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeActivityRequest object.
 */
DescribeActivityRequest::DescribeActivityRequest()
    : SFNRequest(new DescribeActivityRequestPrivate(SFNRequest::DescribeActivityAction, this))
{

}

bool DescribeActivityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeActivityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeActivityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * DescribeActivityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeActivityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeActivityRequestPrivate
 *
 * @brief  Private implementation for DescribeActivityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivityRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DescribeActivityRequest instance.
 */
DescribeActivityRequestPrivate::DescribeActivityRequestPrivate(
    const SFNRequest::Action action, DescribeActivityRequest * const q)
    : DescribeActivityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeActivityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeActivityRequest instance.
 */
DescribeActivityRequestPrivate::DescribeActivityRequestPrivate(
    const DescribeActivityRequestPrivate &other, DescribeActivityRequest * const q)
    : DescribeActivityPrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS
