// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackuprequest.h"
#include "createbackuprequest_p.h"
#include "createbackupresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateBackupRequest
 * \brief The CreateBackupRequest class provides an interface for FSx CreateBackup requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createBackup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackupRequest::CreateBackupRequest(const CreateBackupRequest &other)
    : FSxRequest(new CreateBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackupRequest object.
 */
CreateBackupRequest::CreateBackupRequest()
    : FSxRequest(new CreateBackupRequestPrivate(FSxRequest::CreateBackupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackupRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackupResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateBackupRequestPrivate
 * \brief The CreateBackupRequestPrivate class provides private implementation for CreateBackupRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateBackupRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateBackupRequestPrivate::CreateBackupRequestPrivate(
    const FSxRequest::Action action, CreateBackupRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackupRequest
 * class' copy constructor.
 */
CreateBackupRequestPrivate::CreateBackupRequestPrivate(
    const CreateBackupRequestPrivate &other, CreateBackupRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
