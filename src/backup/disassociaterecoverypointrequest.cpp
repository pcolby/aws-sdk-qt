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

#include "disassociaterecoverypointrequest.h"
#include "disassociaterecoverypointrequest_p.h"
#include "disassociaterecoverypointresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DisassociateRecoveryPointRequest
 * \brief The DisassociateRecoveryPointRequest class provides an interface for Backup DisassociateRecoveryPoint requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::disassociateRecoveryPoint
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateRecoveryPointRequest::DisassociateRecoveryPointRequest(const DisassociateRecoveryPointRequest &other)
    : BackupRequest(new DisassociateRecoveryPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateRecoveryPointRequest object.
 */
DisassociateRecoveryPointRequest::DisassociateRecoveryPointRequest()
    : BackupRequest(new DisassociateRecoveryPointRequestPrivate(BackupRequest::DisassociateRecoveryPointAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateRecoveryPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateRecoveryPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateRecoveryPointRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateRecoveryPointResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DisassociateRecoveryPointRequestPrivate
 * \brief The DisassociateRecoveryPointRequestPrivate class provides private implementation for DisassociateRecoveryPointRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DisassociateRecoveryPointRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DisassociateRecoveryPointRequestPrivate::DisassociateRecoveryPointRequestPrivate(
    const BackupRequest::Action action, DisassociateRecoveryPointRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateRecoveryPointRequest
 * class' copy constructor.
 */
DisassociateRecoveryPointRequestPrivate::DisassociateRecoveryPointRequestPrivate(
    const DisassociateRecoveryPointRequestPrivate &other, DisassociateRecoveryPointRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
