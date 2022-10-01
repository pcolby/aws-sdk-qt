// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
