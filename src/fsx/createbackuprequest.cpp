/*
    Copyright 2013-2019 Paul Colby

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
