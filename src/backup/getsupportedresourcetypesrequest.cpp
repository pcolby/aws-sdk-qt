// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
