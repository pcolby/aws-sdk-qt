// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
