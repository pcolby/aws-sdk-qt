// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecoverypointrequest.h"
#include "describerecoverypointrequest_p.h"
#include "describerecoverypointresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeRecoveryPointRequest
 * \brief The DescribeRecoveryPointRequest class provides an interface for Backup DescribeRecoveryPoint requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeRecoveryPoint
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecoveryPointRequest::DescribeRecoveryPointRequest(const DescribeRecoveryPointRequest &other)
    : BackupRequest(new DescribeRecoveryPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecoveryPointRequest object.
 */
DescribeRecoveryPointRequest::DescribeRecoveryPointRequest()
    : BackupRequest(new DescribeRecoveryPointRequestPrivate(BackupRequest::DescribeRecoveryPointAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecoveryPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecoveryPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecoveryPointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecoveryPointResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeRecoveryPointRequestPrivate
 * \brief The DescribeRecoveryPointRequestPrivate class provides private implementation for DescribeRecoveryPointRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeRecoveryPointRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeRecoveryPointRequestPrivate::DescribeRecoveryPointRequestPrivate(
    const BackupRequest::Action action, DescribeRecoveryPointRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecoveryPointRequest
 * class' copy constructor.
 */
DescribeRecoveryPointRequestPrivate::DescribeRecoveryPointRequestPrivate(
    const DescribeRecoveryPointRequestPrivate &other, DescribeRecoveryPointRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
