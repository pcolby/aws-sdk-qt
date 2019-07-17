/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatepresetrequest.h"
#include "updatepresetrequest_p.h"
#include "updatepresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdatePresetRequest
 * \brief The UpdatePresetRequest class provides an interface for MediaConvert UpdatePreset requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::updatePreset
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePresetRequest::UpdatePresetRequest(const UpdatePresetRequest &other)
    : MediaConvertRequest(new UpdatePresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePresetRequest object.
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
 * Returns a UpdatePresetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePresetRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePresetResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::UpdatePresetRequestPrivate
 * \brief The UpdatePresetRequestPrivate class provides private implementation for UpdatePresetRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a UpdatePresetRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
UpdatePresetRequestPrivate::UpdatePresetRequestPrivate(
    const MediaConvertRequest::Action action, UpdatePresetRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePresetRequest
 * class' copy constructor.
 */
UpdatePresetRequestPrivate::UpdatePresetRequestPrivate(
    const UpdatePresetRequestPrivate &other, UpdatePresetRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
