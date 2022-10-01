// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsrequest.h"
#include "listtagsrequest_p.h"
#include "listtagsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListTagsRequest
 * \brief The ListTagsRequest class provides an interface for Backup ListTags requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsRequest::ListTagsRequest(const ListTagsRequest &other)
    : BackupRequest(new ListTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsRequest object.
 */
ListTagsRequest::ListTagsRequest()
    : BackupRequest(new ListTagsRequestPrivate(BackupRequest::ListTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListTagsRequestPrivate
 * \brief The ListTagsRequestPrivate class provides private implementation for ListTagsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListTagsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const BackupRequest::Action action, ListTagsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsRequest
 * class' copy constructor.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ListTagsRequestPrivate &other, ListTagsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
