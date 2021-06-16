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

#include "listprotectedresourcesrequest.h"
#include "listprotectedresourcesrequest_p.h"
#include "listprotectedresourcesresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListProtectedResourcesRequest
 * \brief The ListProtectedResourcesRequest class provides an interface for Backup ListProtectedResources requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listProtectedResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListProtectedResourcesRequest::ListProtectedResourcesRequest(const ListProtectedResourcesRequest &other)
    : BackupRequest(new ListProtectedResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProtectedResourcesRequest object.
 */
ListProtectedResourcesRequest::ListProtectedResourcesRequest()
    : BackupRequest(new ListProtectedResourcesRequestPrivate(BackupRequest::ListProtectedResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListProtectedResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProtectedResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProtectedResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListProtectedResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListProtectedResourcesRequestPrivate
 * \brief The ListProtectedResourcesRequestPrivate class provides private implementation for ListProtectedResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListProtectedResourcesRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListProtectedResourcesRequestPrivate::ListProtectedResourcesRequestPrivate(
    const BackupRequest::Action action, ListProtectedResourcesRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProtectedResourcesRequest
 * class' copy constructor.
 */
ListProtectedResourcesRequestPrivate::ListProtectedResourcesRequestPrivate(
    const ListProtectedResourcesRequestPrivate &other, ListProtectedResourcesRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
