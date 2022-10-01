// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepresetrequest.h"
#include "deletepresetrequest_p.h"
#include "deletepresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeletePresetRequest
 * \brief The DeletePresetRequest class provides an interface for MediaConvert DeletePreset requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deletePreset
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePresetRequest::DeletePresetRequest(const DeletePresetRequest &other)
    : MediaConvertRequest(new DeletePresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePresetRequest object.
 */
DeletePresetRequest::DeletePresetRequest()
    : MediaConvertRequest(new DeletePresetRequestPrivate(MediaConvertRequest::DeletePresetAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePresetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePresetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePresetRequest::response(QNetworkReply * const reply) const
{
    return new DeletePresetResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::DeletePresetRequestPrivate
 * \brief The DeletePresetRequestPrivate class provides private implementation for DeletePresetRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeletePresetRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
DeletePresetRequestPrivate::DeletePresetRequestPrivate(
    const MediaConvertRequest::Action action, DeletePresetRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePresetRequest
 * class' copy constructor.
 */
DeletePresetRequestPrivate::DeletePresetRequestPrivate(
    const DeletePresetRequestPrivate &other, DeletePresetRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
