// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprotectedresourcerequest.h"
#include "describeprotectedresourcerequest_p.h"
#include "describeprotectedresourceresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeProtectedResourceRequest
 * \brief The DescribeProtectedResourceRequest class provides an interface for Backup DescribeProtectedResource requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeProtectedResource
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProtectedResourceRequest::DescribeProtectedResourceRequest(const DescribeProtectedResourceRequest &other)
    : BackupRequest(new DescribeProtectedResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProtectedResourceRequest object.
 */
DescribeProtectedResourceRequest::DescribeProtectedResourceRequest()
    : BackupRequest(new DescribeProtectedResourceRequestPrivate(BackupRequest::DescribeProtectedResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProtectedResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProtectedResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProtectedResourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProtectedResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeProtectedResourceRequestPrivate
 * \brief The DescribeProtectedResourceRequestPrivate class provides private implementation for DescribeProtectedResourceRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeProtectedResourceRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeProtectedResourceRequestPrivate::DescribeProtectedResourceRequestPrivate(
    const BackupRequest::Action action, DescribeProtectedResourceRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProtectedResourceRequest
 * class' copy constructor.
 */
DescribeProtectedResourceRequestPrivate::DescribeProtectedResourceRequestPrivate(
    const DescribeProtectedResourceRequestPrivate &other, DescribeProtectedResourceRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
