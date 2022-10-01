// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeframeworkrequest.h"
#include "describeframeworkrequest_p.h"
#include "describeframeworkresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeFrameworkRequest
 * \brief The DescribeFrameworkRequest class provides an interface for Backup DescribeFramework requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeFramework
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFrameworkRequest::DescribeFrameworkRequest(const DescribeFrameworkRequest &other)
    : BackupRequest(new DescribeFrameworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFrameworkRequest object.
 */
DescribeFrameworkRequest::DescribeFrameworkRequest()
    : BackupRequest(new DescribeFrameworkRequestPrivate(BackupRequest::DescribeFrameworkAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFrameworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFrameworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFrameworkRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFrameworkResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeFrameworkRequestPrivate
 * \brief The DescribeFrameworkRequestPrivate class provides private implementation for DescribeFrameworkRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeFrameworkRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeFrameworkRequestPrivate::DescribeFrameworkRequestPrivate(
    const BackupRequest::Action action, DescribeFrameworkRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFrameworkRequest
 * class' copy constructor.
 */
DescribeFrameworkRequestPrivate::DescribeFrameworkRequestPrivate(
    const DescribeFrameworkRequestPrivate &other, DescribeFrameworkRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
