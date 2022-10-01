// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpresetrequest.h"
#include "getpresetrequest_p.h"
#include "getpresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetPresetRequest
 * \brief The GetPresetRequest class provides an interface for MediaConvert GetPreset requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getPreset
 */

/*!
 * Constructs a copy of \a other.
 */
GetPresetRequest::GetPresetRequest(const GetPresetRequest &other)
    : MediaConvertRequest(new GetPresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPresetRequest object.
 */
GetPresetRequest::GetPresetRequest()
    : MediaConvertRequest(new GetPresetRequestPrivate(MediaConvertRequest::GetPresetAction, this))
{

}

/*!
 * \reimp
 */
bool GetPresetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPresetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPresetRequest::response(QNetworkReply * const reply) const
{
    return new GetPresetResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::GetPresetRequestPrivate
 * \brief The GetPresetRequestPrivate class provides private implementation for GetPresetRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetPresetRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
GetPresetRequestPrivate::GetPresetRequestPrivate(
    const MediaConvertRequest::Action action, GetPresetRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPresetRequest
 * class' copy constructor.
 */
GetPresetRequestPrivate::GetPresetRequestPrivate(
    const GetPresetRequestPrivate &other, GetPresetRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
