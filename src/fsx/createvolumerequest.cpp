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

#include "createvolumerequest.h"
#include "createvolumerequest_p.h"
#include "createvolumeresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateVolumeRequest
 * \brief The CreateVolumeRequest class provides an interface for FSx CreateVolume requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createVolume
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVolumeRequest::CreateVolumeRequest(const CreateVolumeRequest &other)
    : FSxRequest(new CreateVolumeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVolumeRequest object.
 */
CreateVolumeRequest::CreateVolumeRequest()
    : FSxRequest(new CreateVolumeRequestPrivate(FSxRequest::CreateVolumeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVolumeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVolumeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVolumeRequest::response(QNetworkReply * const reply) const
{
    return new CreateVolumeResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateVolumeRequestPrivate
 * \brief The CreateVolumeRequestPrivate class provides private implementation for CreateVolumeRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateVolumeRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const FSxRequest::Action action, CreateVolumeRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVolumeRequest
 * class' copy constructor.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const CreateVolumeRequestPrivate &other, CreateVolumeRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
