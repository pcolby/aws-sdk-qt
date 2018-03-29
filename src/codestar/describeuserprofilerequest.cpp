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

#include "describeuserprofilerequest.h"
#include "describeuserprofilerequest_p.h"
#include "describeuserprofileresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  DescribeUserProfileRequest
 *
 * @brief  Implements CodeStar DescribeUserProfile requests.
 *
 * @see    CodeStarClient::describeUserProfile
 */

/**
 * @brief  Constructs a new DescribeUserProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUserProfileRequest::DescribeUserProfileRequest(const DescribeUserProfileRequest &other)
    : CodeStarRequest(new DescribeUserProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUserProfileRequest object.
 */
DescribeUserProfileRequest::DescribeUserProfileRequest()
    : CodeStarRequest(new DescribeUserProfileRequestPrivate(CodeStarRequest::DescribeUserProfileAction, this))
{

}

bool DescribeUserProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUserProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUserProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * DescribeUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUserProfileRequestPrivate
 *
 * @brief  Private implementation for DescribeUserProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserProfileRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public DescribeUserProfileRequest instance.
 */
DescribeUserProfileRequestPrivate::DescribeUserProfileRequestPrivate(
    const CodeStarRequest::Action action, DescribeUserProfileRequest * const q)
    : DescribeUserProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUserProfileRequest instance.
 */
DescribeUserProfileRequestPrivate::DescribeUserProfileRequestPrivate(
    const DescribeUserProfileRequestPrivate &other, DescribeUserProfileRequest * const q)
    : DescribeUserProfilePrivate(other, q)
{

}

} // namespace CodeStar
} // namespace AWS
