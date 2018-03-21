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

#include "startcontentmoderationrequest.h"
#include "startcontentmoderationrequest_p.h"
#include "startcontentmoderationresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  StartContentModerationRequest
 *
 * @brief  Implements Rekognition StartContentModeration requests.
 *
 * @see    RekognitionClient::startContentModeration
 */

/**
 * @brief  Constructs a new StartContentModerationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartContentModerationRequest::StartContentModerationRequest(const StartContentModerationRequest &other)
    : RekognitionRequest(new StartContentModerationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartContentModerationRequest object.
 */
StartContentModerationRequest::StartContentModerationRequest()
    : RekognitionRequest(new StartContentModerationRequestPrivate(RekognitionRequest::StartContentModerationAction, this))
{

}

bool StartContentModerationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartContentModerationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartContentModerationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * StartContentModerationRequest::response(QNetworkReply * const reply) const
{
    return new StartContentModerationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartContentModerationRequestPrivate
 *
 * @brief  Private implementation for StartContentModerationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartContentModerationRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartContentModerationRequest instance.
 */
StartContentModerationRequestPrivate::StartContentModerationRequestPrivate(
    const RekognitionRequest::Action action, StartContentModerationRequest * const q)
    : StartContentModerationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartContentModerationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartContentModerationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartContentModerationRequest instance.
 */
StartContentModerationRequestPrivate::StartContentModerationRequestPrivate(
    const StartContentModerationRequestPrivate &other, StartContentModerationRequest * const q)
    : StartContentModerationPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
