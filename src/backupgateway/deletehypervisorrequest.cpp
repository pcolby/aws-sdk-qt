// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehypervisorrequest.h"
#include "deletehypervisorrequest_p.h"
#include "deletehypervisorresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::DeleteHypervisorRequest
 * \brief The DeleteHypervisorRequest class provides an interface for BackupGateway DeleteHypervisor requests.
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
 * \sa BackupGatewayClient::deleteHypervisor
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHypervisorRequest::DeleteHypervisorRequest(const DeleteHypervisorRequest &other)
    : BackupGatewayRequest(new DeleteHypervisorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHypervisorRequest object.
 */
DeleteHypervisorRequest::DeleteHypervisorRequest()
    : BackupGatewayRequest(new DeleteHypervisorRequestPrivate(BackupGatewayRequest::DeleteHypervisorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHypervisorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHypervisorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHypervisorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHypervisorResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::DeleteHypervisorRequestPrivate
 * \brief The DeleteHypervisorRequestPrivate class provides private implementation for DeleteHypervisorRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a DeleteHypervisorRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
DeleteHypervisorRequestPrivate::DeleteHypervisorRequestPrivate(
    const BackupGatewayRequest::Action action, DeleteHypervisorRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHypervisorRequest
 * class' copy constructor.
 */
DeleteHypervisorRequestPrivate::DeleteHypervisorRequestPrivate(
    const DeleteHypervisorRequestPrivate &other, DeleteHypervisorRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
