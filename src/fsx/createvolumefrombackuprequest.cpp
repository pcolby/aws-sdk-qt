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

#include "createvolumefrombackuprequest.h"
#include "createvolumefrombackuprequest_p.h"
#include "createvolumefrombackupresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateVolumeFromBackupRequest
 * \brief The CreateVolumeFromBackupRequest class provides an interface for FSx CreateVolumeFromBackup requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createVolumeFromBackup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVolumeFromBackupRequest::CreateVolumeFromBackupRequest(const CreateVolumeFromBackupRequest &other)
    : FSxRequest(new CreateVolumeFromBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVolumeFromBackupRequest object.
 */
CreateVolumeFromBackupRequest::CreateVolumeFromBackupRequest()
    : FSxRequest(new CreateVolumeFromBackupRequestPrivate(FSxRequest::CreateVolumeFromBackupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVolumeFromBackupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVolumeFromBackupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVolumeFromBackupRequest::response(QNetworkReply * const reply) const
{
    return new CreateVolumeFromBackupResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateVolumeFromBackupRequestPrivate
 * \brief The CreateVolumeFromBackupRequestPrivate class provides private implementation for CreateVolumeFromBackupRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateVolumeFromBackupRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateVolumeFromBackupRequestPrivate::CreateVolumeFromBackupRequestPrivate(
    const FSxRequest::Action action, CreateVolumeFromBackupRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVolumeFromBackupRequest
 * class' copy constructor.
 */
CreateVolumeFromBackupRequestPrivate::CreateVolumeFromBackupRequestPrivate(
    const CreateVolumeFromBackupRequestPrivate &other, CreateVolumeFromBackupRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
