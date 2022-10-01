// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
