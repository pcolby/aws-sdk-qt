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
