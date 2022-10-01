// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associategatewaytoserverrequest.h"
#include "associategatewaytoserverrequest_p.h"
#include "associategatewaytoserverresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::AssociateGatewayToServerRequest
 * \brief The AssociateGatewayToServerRequest class provides an interface for BackupGateway AssociateGatewayToServer requests.
 *
 * \inmodule QtAwsBackupGateway
 *
 *  <fullname>Backup gateway</fullname>
 * 
 *  Backup gateway connects Backup to your hypervisor, so you can create, store, and restore backups of your virtual
 *  machines (VMs) anywhere, whether on-premises or in the VMware Cloud (VMC) on Amazon Web
 * 
 *  Services>
 * 
 *  Add on-premises resources by connecting to a hypervisor through a gateway. Backup will automatically discover the
 *  resources in your
 * 
 *  hypervisor>
 * 
 *  Use Backup to assign virtual or on-premises resources to a backup plan, or run on-demand backups. Once you have backed
 *  up your resources, you can view them and restore them like any resource supported by
 * 
 *  Backup>
 * 
 *  To download the Amazon Web Services software to get started, navigate to the Backup console, choose <b>Gateways</b>,
 *  then choose <b>Create
 *
 * \sa BackupGatewayClient::associateGatewayToServer
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateGatewayToServerRequest::AssociateGatewayToServerRequest(const AssociateGatewayToServerRequest &other)
    : BackupGatewayRequest(new AssociateGatewayToServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateGatewayToServerRequest object.
 */
AssociateGatewayToServerRequest::AssociateGatewayToServerRequest()
    : BackupGatewayRequest(new AssociateGatewayToServerRequestPrivate(BackupGatewayRequest::AssociateGatewayToServerAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateGatewayToServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateGatewayToServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateGatewayToServerRequest::response(QNetworkReply * const reply) const
{
    return new AssociateGatewayToServerResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::AssociateGatewayToServerRequestPrivate
 * \brief The AssociateGatewayToServerRequestPrivate class provides private implementation for AssociateGatewayToServerRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a AssociateGatewayToServerRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
AssociateGatewayToServerRequestPrivate::AssociateGatewayToServerRequestPrivate(
    const BackupGatewayRequest::Action action, AssociateGatewayToServerRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateGatewayToServerRequest
 * class' copy constructor.
 */
AssociateGatewayToServerRequestPrivate::AssociateGatewayToServerRequestPrivate(
    const AssociateGatewayToServerRequestPrivate &other, AssociateGatewayToServerRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
