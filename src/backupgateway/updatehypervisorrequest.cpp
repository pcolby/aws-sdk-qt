// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehypervisorrequest.h"
#include "updatehypervisorrequest_p.h"
#include "updatehypervisorresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::UpdateHypervisorRequest
 * \brief The UpdateHypervisorRequest class provides an interface for BackupGateway UpdateHypervisor requests.
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
 * \sa BackupGatewayClient::updateHypervisor
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateHypervisorRequest::UpdateHypervisorRequest(const UpdateHypervisorRequest &other)
    : BackupGatewayRequest(new UpdateHypervisorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateHypervisorRequest object.
 */
UpdateHypervisorRequest::UpdateHypervisorRequest()
    : BackupGatewayRequest(new UpdateHypervisorRequestPrivate(BackupGatewayRequest::UpdateHypervisorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHypervisorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateHypervisorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHypervisorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHypervisorResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::UpdateHypervisorRequestPrivate
 * \brief The UpdateHypervisorRequestPrivate class provides private implementation for UpdateHypervisorRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a UpdateHypervisorRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
UpdateHypervisorRequestPrivate::UpdateHypervisorRequestPrivate(
    const BackupGatewayRequest::Action action, UpdateHypervisorRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateHypervisorRequest
 * class' copy constructor.
 */
UpdateHypervisorRequestPrivate::UpdateHypervisorRequestPrivate(
    const UpdateHypervisorRequestPrivate &other, UpdateHypervisorRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
