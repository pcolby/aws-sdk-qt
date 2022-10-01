// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listframeworksrequest.h"
#include "listframeworksrequest_p.h"
#include "listframeworksresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListFrameworksRequest
 * \brief The ListFrameworksRequest class provides an interface for Backup ListFrameworks requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listFrameworks
 */

/*!
 * Constructs a copy of \a other.
 */
ListFrameworksRequest::ListFrameworksRequest(const ListFrameworksRequest &other)
    : BackupRequest(new ListFrameworksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFrameworksRequest object.
 */
ListFrameworksRequest::ListFrameworksRequest()
    : BackupRequest(new ListFrameworksRequestPrivate(BackupRequest::ListFrameworksAction, this))
{

}

/*!
 * \reimp
 */
bool ListFrameworksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFrameworksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFrameworksRequest::response(QNetworkReply * const reply) const
{
    return new ListFrameworksResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListFrameworksRequestPrivate
 * \brief The ListFrameworksRequestPrivate class provides private implementation for ListFrameworksRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListFrameworksRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListFrameworksRequestPrivate::ListFrameworksRequestPrivate(
    const BackupRequest::Action action, ListFrameworksRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFrameworksRequest
 * class' copy constructor.
 */
ListFrameworksRequestPrivate::ListFrameworksRequestPrivate(
    const ListFrameworksRequestPrivate &other, ListFrameworksRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
