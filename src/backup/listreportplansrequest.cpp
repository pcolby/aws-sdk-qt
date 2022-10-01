// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
