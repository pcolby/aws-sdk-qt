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

#include "createpresetrequest.h"
#include "createpresetrequest_p.h"
#include "createpresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/**
 * @class  CreatePresetRequest
 *
 * @brief  Implements MediaConvert CreatePreset requests.
 *
 * @see    MediaConvertClient::createPreset
 */

/**
 * @brief  Constructs a new CreatePresetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePresetRequest::CreatePresetRequest(const CreatePresetRequest &other)
    : MediaConvertRequest(new CreatePresetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePresetRequest object.
 */
CreatePresetRequest::CreatePresetRequest()
    : MediaConvertRequest(new CreatePresetRequestPrivate(MediaConvertRequest::CreatePresetAction, this))
{

}

bool CreatePresetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePresetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePresetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePresetRequest::response(QNetworkReply * const reply) const
{
    return new CreatePresetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePresetRequestPrivate
 *
 * @brief  Private implementation for CreatePresetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePresetRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public CreatePresetRequest instance.
 */
CreatePresetRequestPrivate::CreatePresetRequestPrivate(
    const MediaConvertRequest::Action action, CreatePresetRequest * const q)
    : CreatePresetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePresetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePresetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePresetRequest instance.
 */
CreatePresetRequestPrivate::CreatePresetRequestPrivate(
    const CreatePresetRequestPrivate &other, CreatePresetRequest * const q)
    : CreatePresetPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
