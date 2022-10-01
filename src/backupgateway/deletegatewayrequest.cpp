// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegatewayrequest.h"
#include "deletegatewayrequest_p.h"
#include "deletegatewayresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::DeleteGatewayRequest
 * \brief The DeleteGatewayRequest class provides an interface for BackupGateway DeleteGateway requests.
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
 * \sa BackupGatewayClient::deleteGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGatewayRequest::DeleteGatewayRequest(const DeleteGatewayRequest &other)
    : BackupGatewayRequest(new DeleteGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGatewayRequest object.
 */
DeleteGatewayRequest::DeleteGatewayRequest()
    : BackupGatewayRequest(new DeleteGatewayRequestPrivate(BackupGatewayRequest::DeleteGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::DeleteGatewayRequestPrivate
 * \brief The DeleteGatewayRequestPrivate class provides private implementation for DeleteGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a DeleteGatewayRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
DeleteGatewayRequestPrivate::DeleteGatewayRequestPrivate(
    const BackupGatewayRequest::Action action, DeleteGatewayRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGatewayRequest
 * class' copy constructor.
 */
DeleteGatewayRequestPrivate::DeleteGatewayRequestPrivate(
    const DeleteGatewayRequestPrivate &other, DeleteGatewayRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
