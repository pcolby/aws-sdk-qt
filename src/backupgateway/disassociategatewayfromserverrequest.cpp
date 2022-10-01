// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociategatewayfromserverrequest.h"
#include "disassociategatewayfromserverrequest_p.h"
#include "disassociategatewayfromserverresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::DisassociateGatewayFromServerRequest
 * \brief The DisassociateGatewayFromServerRequest class provides an interface for BackupGateway DisassociateGatewayFromServer requests.
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
 * \sa BackupGatewayClient::disassociateGatewayFromServer
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateGatewayFromServerRequest::DisassociateGatewayFromServerRequest(const DisassociateGatewayFromServerRequest &other)
    : BackupGatewayRequest(new DisassociateGatewayFromServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateGatewayFromServerRequest object.
 */
DisassociateGatewayFromServerRequest::DisassociateGatewayFromServerRequest()
    : BackupGatewayRequest(new DisassociateGatewayFromServerRequestPrivate(BackupGatewayRequest::DisassociateGatewayFromServerAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateGatewayFromServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateGatewayFromServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateGatewayFromServerRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateGatewayFromServerResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::DisassociateGatewayFromServerRequestPrivate
 * \brief The DisassociateGatewayFromServerRequestPrivate class provides private implementation for DisassociateGatewayFromServerRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a DisassociateGatewayFromServerRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
DisassociateGatewayFromServerRequestPrivate::DisassociateGatewayFromServerRequestPrivate(
    const BackupGatewayRequest::Action action, DisassociateGatewayFromServerRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateGatewayFromServerRequest
 * class' copy constructor.
 */
DisassociateGatewayFromServerRequestPrivate::DisassociateGatewayFromServerRequestPrivate(
    const DisassociateGatewayFromServerRequestPrivate &other, DisassociateGatewayFromServerRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
