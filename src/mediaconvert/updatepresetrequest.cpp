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

#include "updatepresetrequest.h"
#include "updatepresetrequest_p.h"
#include "updatepresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdatePresetRequest
 *
 * \brief The UpdatePresetRequest class provides an interface for MediaConvert UpdatePreset requests.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::updatePreset
 */

/*!
 * @brief  Constructs a new UpdatePresetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePresetRequest::UpdatePresetRequest(const UpdatePresetRequest &other)
    : MediaConvertRequest(new UpdatePresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdatePresetRequest object.
 */
UpdatePresetRequest::UpdatePresetRequest()
    : MediaConvertRequest(new UpdatePresetRequestPrivate(MediaConvertRequest::UpdatePresetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePresetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdatePresetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePresetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePresetRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePresetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdatePresetRequestPrivate
 *
 * @brief  Private implementation for UpdatePresetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdatePresetRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public UpdatePresetRequest instance.
 */
UpdatePresetRequestPrivate::UpdatePresetRequestPrivate(
    const MediaConvertRequest::Action action, UpdatePresetRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
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
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
