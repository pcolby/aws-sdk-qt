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

#include "describeinputrequest.h"
#include "describeinputrequest_p.h"
#include "describeinputresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  DescribeInputRequest
 *
 * @brief  Implements MediaLive DescribeInput requests.
 *
 * @see    MediaLiveClient::describeInput
 */

/**
 * @brief  Constructs a new DescribeInputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInputRequest::DescribeInputRequest(const DescribeInputRequest &other)
    : MediaLiveRequest(new DescribeInputRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInputRequest object.
 */
DescribeInputRequest::DescribeInputRequest()
    : MediaLiveRequest(new DescribeInputRequestPrivate(MediaLiveRequest::DescribeInputAction, this))
{

}

bool DescribeInputRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInputResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * DescribeInputRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInputRequestPrivate
 *
 * @brief  Private implementation for DescribeInputRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInputRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public DescribeInputRequest instance.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const MediaLiveRequest::Action action, DescribeInputRequest * const q)
    : DescribeInputPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInputRequest instance.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const DescribeInputRequestPrivate &other, DescribeInputRequest * const q)
    : DescribeInputPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
