// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
