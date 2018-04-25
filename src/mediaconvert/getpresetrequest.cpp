/*
    Copyright 2013-2018 Paul Colby

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
