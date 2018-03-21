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

#include "deletepresetrequest.h"
#include "deletepresetrequest_p.h"
#include "deletepresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  DeletePresetRequest
 *
 * @brief  Implements MediaConvert DeletePreset requests.
 *
 * @see    MediaConvertClient::deletePreset
 */

/**
 * @brief  Constructs a new DeletePresetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePresetRequest::DeletePresetRequest(const DeletePresetRequest &other)
    : MediaConvertRequest(new DeletePresetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePresetRequest object.
 */
DeletePresetRequest::DeletePresetRequest()
    : MediaConvertRequest(new DeletePresetRequestPrivate(MediaConvertRequest::DeletePresetAction, this))
{

}

bool DeletePresetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePresetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePresetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * DeletePresetRequest::response(QNetworkReply * const reply) const
{
    return new DeletePresetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePresetRequestPrivate
 *
 * @brief  Private implementation for DeletePresetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePresetRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public DeletePresetRequest instance.
 */
DeletePresetRequestPrivate::DeletePresetRequestPrivate(
    const MediaConvertRequest::Action action, DeletePresetRequest * const q)
    : DeletePresetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePresetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePresetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePresetRequest instance.
 */
DeletePresetRequestPrivate::DeletePresetRequestPrivate(
    const DeletePresetRequestPrivate &other, DeletePresetRequest * const q)
    : DeletePresetPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS
