// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
