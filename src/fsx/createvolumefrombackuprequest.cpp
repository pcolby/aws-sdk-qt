// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
