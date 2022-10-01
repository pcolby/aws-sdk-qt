/*
    Copyright 2013-2021 Paul Colby

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

#include "updatevolumerequest.h"
#include "updatevolumerequest_p.h"
#include "updatevolumeresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateVolumeRequest
 * \brief The UpdateVolumeRequest class provides an interface for FSx UpdateVolume requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateVolume
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVolumeRequest::UpdateVolumeRequest(const UpdateVolumeRequest &other)
    : FSxRequest(new UpdateVolumeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVolumeRequest object.
 */
UpdateVolumeRequest::UpdateVolumeRequest()
    : FSxRequest(new UpdateVolumeRequestPrivate(FSxRequest::UpdateVolumeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVolumeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVolumeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVolumeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVolumeResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::UpdateVolumeRequestPrivate
 * \brief The UpdateVolumeRequestPrivate class provides private implementation for UpdateVolumeRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateVolumeRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
UpdateVolumeRequestPrivate::UpdateVolumeRequestPrivate(
    const FSxRequest::Action action, UpdateVolumeRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVolumeRequest
 * class' copy constructor.
 */
UpdateVolumeRequestPrivate::UpdateVolumeRequestPrivate(
    const UpdateVolumeRequestPrivate &other, UpdateVolumeRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
