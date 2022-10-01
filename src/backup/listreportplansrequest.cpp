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

#include "listreportplansrequest.h"
#include "listreportplansrequest_p.h"
#include "listreportplansresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListReportPlansRequest
 * \brief The ListReportPlansRequest class provides an interface for Backup ListReportPlans requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listReportPlans
 */

/*!
 * Constructs a copy of \a other.
 */
ListReportPlansRequest::ListReportPlansRequest(const ListReportPlansRequest &other)
    : BackupRequest(new ListReportPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReportPlansRequest object.
 */
ListReportPlansRequest::ListReportPlansRequest()
    : BackupRequest(new ListReportPlansRequestPrivate(BackupRequest::ListReportPlansAction, this))
{

}

/*!
 * \reimp
 */
bool ListReportPlansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReportPlansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReportPlansRequest::response(QNetworkReply * const reply) const
{
    return new ListReportPlansResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListReportPlansRequestPrivate
 * \brief The ListReportPlansRequestPrivate class provides private implementation for ListReportPlansRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListReportPlansRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListReportPlansRequestPrivate::ListReportPlansRequestPrivate(
    const BackupRequest::Action action, ListReportPlansRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReportPlansRequest
 * class' copy constructor.
 */
ListReportPlansRequestPrivate::ListReportPlansRequestPrivate(
    const ListReportPlansRequestPrivate &other, ListReportPlansRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
