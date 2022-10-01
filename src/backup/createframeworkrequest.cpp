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

#include "createframeworkrequest.h"
#include "createframeworkrequest_p.h"
#include "createframeworkresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateFrameworkRequest
 * \brief The CreateFrameworkRequest class provides an interface for Backup CreateFramework requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createFramework
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFrameworkRequest::CreateFrameworkRequest(const CreateFrameworkRequest &other)
    : BackupRequest(new CreateFrameworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFrameworkRequest object.
 */
CreateFrameworkRequest::CreateFrameworkRequest()
    : BackupRequest(new CreateFrameworkRequestPrivate(BackupRequest::CreateFrameworkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFrameworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFrameworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFrameworkRequest::response(QNetworkReply * const reply) const
{
    return new CreateFrameworkResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::CreateFrameworkRequestPrivate
 * \brief The CreateFrameworkRequestPrivate class provides private implementation for CreateFrameworkRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateFrameworkRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
CreateFrameworkRequestPrivate::CreateFrameworkRequestPrivate(
    const BackupRequest::Action action, CreateFrameworkRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFrameworkRequest
 * class' copy constructor.
 */
CreateFrameworkRequestPrivate::CreateFrameworkRequestPrivate(
    const CreateFrameworkRequestPrivate &other, CreateFrameworkRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
