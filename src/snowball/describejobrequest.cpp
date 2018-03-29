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

#include "describejobrequest.h"
#include "describejobrequest_p.h"
#include "describejobresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/**
 * @class  DescribeJobRequest
 *
 * @brief  Implements Snowball DescribeJob requests.
 *
 * @see    SnowballClient::describeJob
 */

/**
 * @brief  Constructs a new DescribeJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobRequest::DescribeJobRequest(const DescribeJobRequest &other)
    : SnowballRequest(new DescribeJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobRequest object.
 */
DescribeJobRequest::DescribeJobRequest()
    : SnowballRequest(new DescribeJobRequestPrivate(SnowballRequest::DescribeJobAction, this))
{

}

bool DescribeJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * DescribeJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeJobRequestPrivate
 *
 * @brief  Private implementation for DescribeJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public DescribeJobRequest instance.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const SnowballRequest::Action action, DescribeJobRequest * const q)
    : DescribeJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobRequest instance.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const DescribeJobRequestPrivate &other, DescribeJobRequest * const q)
    : DescribeJobPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
