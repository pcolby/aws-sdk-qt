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

#include "createchannelrequest.h"
#include "createchannelrequest_p.h"
#include "createchannelresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/**
 * @class  CreateChannelRequest
 *
 * @brief  Implements MediaPackage CreateChannel requests.
 *
 * @see    MediaPackageClient::createChannel
 */

/**
 * @brief  Constructs a new CreateChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateChannelRequest::CreateChannelRequest(const CreateChannelRequest &other)
    : MediaPackageRequest(new CreateChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateChannelRequest object.
 */
CreateChannelRequest::CreateChannelRequest()
    : MediaPackageRequest(new CreateChannelRequestPrivate(MediaPackageRequest::CreateChannelAction, this))
{

}

bool CreateChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateChannelRequestPrivate
 *
 * @brief  Private implementation for CreateChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateChannelRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public CreateChannelRequest instance.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const MediaPackageRequest::Action action, CreateChannelRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateChannelRequest instance.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const CreateChannelRequestPrivate &other, CreateChannelRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
