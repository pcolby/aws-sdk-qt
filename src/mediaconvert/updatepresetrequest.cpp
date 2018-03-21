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

#include "updatepresetrequest.h"
#include "updatepresetrequest_p.h"
#include "updatepresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  UpdatePresetRequest
 *
 * @brief  Implements MediaConvert UpdatePreset requests.
 *
 * @see    MediaConvertClient::updatePreset
 */

/**
 * @brief  Constructs a new UpdatePresetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePresetResponse::UpdatePresetResponse(

/**
 * @brief  Constructs a new UpdatePresetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePresetRequest::UpdatePresetRequest(const UpdatePresetRequest &other)
    : MediaConvertRequest(new UpdatePresetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePresetRequest object.
 */
UpdatePresetRequest::UpdatePresetRequest()
    : MediaConvertRequest(new UpdatePresetRequestPrivate(MediaConvertRequest::UpdatePresetAction, this))
{

}

bool UpdatePresetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePresetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePresetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * UpdatePresetRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePresetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePresetRequestPrivate
 *
 * @brief  Private implementation for UpdatePresetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePresetRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public UpdatePresetRequest instance.
 */
UpdatePresetRequestPrivate::UpdatePresetRequestPrivate(
    const MediaConvertRequest::Action action, UpdatePresetRequest * const q)
    : UpdatePresetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePresetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePresetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePresetRequest instance.
 */
UpdatePresetRequestPrivate::UpdatePresetRequestPrivate(
    const UpdatePresetRequestPrivate &other, UpdatePresetRequest * const q)
    : UpdatePresetPrivate(other, q)
{

}
