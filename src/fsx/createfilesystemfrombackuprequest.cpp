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

#include "createfilesystemfrombackuprequest.h"
#include "createfilesystemfrombackuprequest_p.h"
#include "createfilesystemfrombackupresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateFileSystemFromBackupRequest
 * \brief The CreateFileSystemFromBackupRequest class provides an interface for FSx CreateFileSystemFromBackup requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createFileSystemFromBackup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFileSystemFromBackupRequest::CreateFileSystemFromBackupRequest(const CreateFileSystemFromBackupRequest &other)
    : FSxRequest(new CreateFileSystemFromBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFileSystemFromBackupRequest object.
 */
CreateFileSystemFromBackupRequest::CreateFileSystemFromBackupRequest()
    : FSxRequest(new CreateFileSystemFromBackupRequestPrivate(FSxRequest::CreateFileSystemFromBackupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFileSystemFromBackupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFileSystemFromBackupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFileSystemFromBackupRequest::response(QNetworkReply * const reply) const
{
    return new CreateFileSystemFromBackupResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateFileSystemFromBackupRequestPrivate
 * \brief The CreateFileSystemFromBackupRequestPrivate class provides private implementation for CreateFileSystemFromBackupRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateFileSystemFromBackupRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateFileSystemFromBackupRequestPrivate::CreateFileSystemFromBackupRequestPrivate(
    const FSxRequest::Action action, CreateFileSystemFromBackupRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFileSystemFromBackupRequest
 * class' copy constructor.
 */
CreateFileSystemFromBackupRequestPrivate::CreateFileSystemFromBackupRequestPrivate(
    const CreateFileSystemFromBackupRequestPrivate &other, CreateFileSystemFromBackupRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
