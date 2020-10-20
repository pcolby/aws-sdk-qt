/*
    Copyright 2013-2020 Paul Colby

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

#include "getsupportedresourcetypesrequest.h"
#include "getsupportedresourcetypesrequest_p.h"
#include "getsupportedresourcetypesresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetSupportedResourceTypesRequest
 * \brief The GetSupportedResourceTypesRequest class provides an interface for Backup GetSupportedResourceTypes requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getSupportedResourceTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSupportedResourceTypesRequest::GetSupportedResourceTypesRequest(const GetSupportedResourceTypesRequest &other)
    : BackupRequest(new GetSupportedResourceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSupportedResourceTypesRequest object.
 */
GetSupportedResourceTypesRequest::GetSupportedResourceTypesRequest()
    : BackupRequest(new GetSupportedResourceTypesRequestPrivate(BackupRequest::GetSupportedResourceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSupportedResourceTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSupportedResourceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSupportedResourceTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetSupportedResourceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetSupportedResourceTypesRequestPrivate
 * \brief The GetSupportedResourceTypesRequestPrivate class provides private implementation for GetSupportedResourceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetSupportedResourceTypesRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetSupportedResourceTypesRequestPrivate::GetSupportedResourceTypesRequestPrivate(
    const BackupRequest::Action action, GetSupportedResourceTypesRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSupportedResourceTypesRequest
 * class' copy constructor.
 */
GetSupportedResourceTypesRequestPrivate::GetSupportedResourceTypesRequestPrivate(
    const GetSupportedResourceTypesRequestPrivate &other, GetSupportedResourceTypesRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
