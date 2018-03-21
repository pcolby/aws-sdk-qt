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

#include "describechannelrequest.h"
#include "describechannelrequest_p.h"
#include "describechannelresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  DescribeChannelRequest
 *
 * @brief  Implements MediaLive DescribeChannel requests.
 *
 * @see    MediaLiveClient::describeChannel
 */

/**
 * @brief  Constructs a new DescribeChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeChannelResponse::DescribeChannelResponse(

/**
 * @brief  Constructs a new DescribeChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeChannelRequest::DescribeChannelRequest(const DescribeChannelRequest &other)
    : MediaLiveRequest(new DescribeChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeChannelRequest object.
 */
DescribeChannelRequest::DescribeChannelRequest()
    : MediaLiveRequest(new DescribeChannelRequestPrivate(MediaLiveRequest::DescribeChannelAction, this))
{

}

bool DescribeChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * DescribeChannelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeChannelRequestPrivate
 *
 * @brief  Private implementation for DescribeChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChannelRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public DescribeChannelRequest instance.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const MediaLiveRequest::Action action, DescribeChannelRequest * const q)
    : DescribeChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeChannelRequest instance.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const DescribeChannelRequestPrivate &other, DescribeChannelRequest * const q)
    : DescribeChannelPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
