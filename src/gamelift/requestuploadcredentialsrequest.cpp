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

#include "requestuploadcredentialsrequest.h"
#include "requestuploadcredentialsrequest_p.h"
#include "requestuploadcredentialsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  RequestUploadCredentialsRequest
 *
 * @brief  Implements GameLift RequestUploadCredentials requests.
 *
 * @see    GameLiftClient::requestUploadCredentials
 */

/**
 * @brief  Constructs a new RequestUploadCredentialsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RequestUploadCredentialsRequest::RequestUploadCredentialsRequest(const RequestUploadCredentialsRequest &other)
    : GameLiftRequest(new RequestUploadCredentialsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RequestUploadCredentialsRequest object.
 */
RequestUploadCredentialsRequest::RequestUploadCredentialsRequest()
    : GameLiftRequest(new RequestUploadCredentialsRequestPrivate(GameLiftRequest::RequestUploadCredentialsAction, this))
{

}

bool RequestUploadCredentialsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RequestUploadCredentialsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RequestUploadCredentialsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * RequestUploadCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new RequestUploadCredentialsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RequestUploadCredentialsRequestPrivate
 *
 * @brief  Private implementation for RequestUploadCredentialsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestUploadCredentialsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public RequestUploadCredentialsRequest instance.
 */
RequestUploadCredentialsRequestPrivate::RequestUploadCredentialsRequestPrivate(
    const GameLiftRequest::Action action, RequestUploadCredentialsRequest * const q)
    : RequestUploadCredentialsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RequestUploadCredentialsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RequestUploadCredentialsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RequestUploadCredentialsRequest instance.
 */
RequestUploadCredentialsRequestPrivate::RequestUploadCredentialsRequestPrivate(
    const RequestUploadCredentialsRequestPrivate &other, RequestUploadCredentialsRequest * const q)
    : RequestUploadCredentialsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
