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

#include "listbackupplantemplatesrequest.h"
#include "listbackupplantemplatesrequest_p.h"
#include "listbackupplantemplatesresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesRequest
 * \brief The ListBackupPlanTemplatesRequest class provides an interface for Backup ListBackupPlanTemplates requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlanTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupPlanTemplatesRequest::ListBackupPlanTemplatesRequest(const ListBackupPlanTemplatesRequest &other)
    : BackupRequest(new ListBackupPlanTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupPlanTemplatesRequest object.
 */
ListBackupPlanTemplatesRequest::ListBackupPlanTemplatesRequest()
    : BackupRequest(new ListBackupPlanTemplatesRequestPrivate(BackupRequest::ListBackupPlanTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupPlanTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupPlanTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupPlanTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupPlanTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesRequestPrivate
 * \brief The ListBackupPlanTemplatesRequestPrivate class provides private implementation for ListBackupPlanTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlanTemplatesRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupPlanTemplatesRequestPrivate::ListBackupPlanTemplatesRequestPrivate(
    const BackupRequest::Action action, ListBackupPlanTemplatesRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupPlanTemplatesRequest
 * class' copy constructor.
 */
ListBackupPlanTemplatesRequestPrivate::ListBackupPlanTemplatesRequestPrivate(
    const ListBackupPlanTemplatesRequestPrivate &other, ListBackupPlanTemplatesRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
