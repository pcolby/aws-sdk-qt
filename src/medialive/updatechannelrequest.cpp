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

#include "updatechannelrequest.h"
#include "updatechannelrequest_p.h"
#include "updatechannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateChannelRequest
 *
 * \brief The UpdateChannelRequest class provides an interface for MediaLive UpdateChannel requests.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::updateChannel
 */

/*!
 * @brief  Constructs a new UpdateChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateChannelRequest::UpdateChannelRequest(const UpdateChannelRequest &other)
    : MediaLiveRequest(new UpdateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateChannelRequest object.
 */
UpdateChannelRequest::UpdateChannelRequest()
    : MediaLiveRequest(new UpdateChannelRequestPrivate(MediaLiveRequest::UpdateChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChannelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateChannelRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public UpdateChannelRequest instance.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const MediaLiveRequest::Action action, UpdateChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateChannelRequest instance.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const UpdateChannelRequestPrivate &other, UpdateChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
