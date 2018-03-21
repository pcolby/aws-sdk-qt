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

#include "describerepositoriesrequest.h"
#include "describerepositoriesrequest_p.h"
#include "describerepositoriesresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  DescribeRepositoriesRequest
 *
 * @brief  Implements ECR DescribeRepositories requests.
 *
 * @see    ECRClient::describeRepositories
 */

/**
 * @brief  Constructs a new DescribeRepositoriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRepositoriesRequest::DescribeRepositoriesRequest(const DescribeRepositoriesRequest &other)
    : ECRRequest(new DescribeRepositoriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRepositoriesRequest object.
 */
DescribeRepositoriesRequest::DescribeRepositoriesRequest()
    : ECRRequest(new DescribeRepositoriesRequestPrivate(ECRRequest::DescribeRepositoriesAction, this))
{

}

bool DescribeRepositoriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRepositoriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRepositoriesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * DescribeRepositoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRepositoriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRepositoriesRequestPrivate
 *
 * @brief  Private implementation for DescribeRepositoriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRepositoriesRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public DescribeRepositoriesRequest instance.
 */
DescribeRepositoriesRequestPrivate::DescribeRepositoriesRequestPrivate(
    const ECRRequest::Action action, DescribeRepositoriesRequest * const q)
    : DescribeRepositoriesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRepositoriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRepositoriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRepositoriesRequest instance.
 */
DescribeRepositoriesRequestPrivate::DescribeRepositoriesRequestPrivate(
    const DescribeRepositoriesRequestPrivate &other, DescribeRepositoriesRequest * const q)
    : DescribeRepositoriesPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
