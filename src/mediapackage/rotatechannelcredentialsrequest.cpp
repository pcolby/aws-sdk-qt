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

#include "rotatechannelcredentialsrequest.h"
#include "rotatechannelcredentialsrequest_p.h"
#include "rotatechannelcredentialsresponse.h"
#include "mediapackagerequest_p.h"

namespace AWS {
namespace MediaPackage {

/**
 * @class  RotateChannelCredentialsRequest
 *
 * @brief  Implements MediaPackage RotateChannelCredentials requests.
 *
 * @see    MediaPackageClient::rotateChannelCredentials
 */

/**
 * @brief  Constructs a new RotateChannelCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RotateChannelCredentialsResponse::RotateChannelCredentialsResponse(

/**
 * @brief  Constructs a new RotateChannelCredentialsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RotateChannelCredentialsRequest::RotateChannelCredentialsRequest(const RotateChannelCredentialsRequest &other)
    : MediaPackageRequest(new RotateChannelCredentialsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RotateChannelCredentialsRequest object.
 */
RotateChannelCredentialsRequest::RotateChannelCredentialsRequest()
    : MediaPackageRequest(new RotateChannelCredentialsRequestPrivate(MediaPackageRequest::RotateChannelCredentialsAction, this))
{

}

bool RotateChannelCredentialsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RotateChannelCredentialsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RotateChannelCredentialsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
AwsAbstractResponse * RotateChannelCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new RotateChannelCredentialsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RotateChannelCredentialsRequestPrivate
 *
 * @brief  Private implementation for RotateChannelCredentialsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RotateChannelCredentialsRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public RotateChannelCredentialsRequest instance.
 */
RotateChannelCredentialsRequestPrivate::RotateChannelCredentialsRequestPrivate(
    const MediaPackageRequest::Action action, RotateChannelCredentialsRequest * const q)
    : RotateChannelCredentialsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RotateChannelCredentialsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RotateChannelCredentialsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RotateChannelCredentialsRequest instance.
 */
RotateChannelCredentialsRequestPrivate::RotateChannelCredentialsRequestPrivate(
    const RotateChannelCredentialsRequestPrivate &other, RotateChannelCredentialsRequest * const q)
    : RotateChannelCredentialsPrivate(other, q)
{

}
