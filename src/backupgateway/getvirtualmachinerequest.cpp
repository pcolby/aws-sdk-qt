// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvirtualmachinerequest.h"
#include "getvirtualmachinerequest_p.h"
#include "getvirtualmachineresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::GetVirtualMachineRequest
 * \brief The GetVirtualMachineRequest class provides an interface for BackupGateway GetVirtualMachine requests.
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
 * \sa BackupGatewayClient::getVirtualMachine
 */

/*!
 * Constructs a copy of \a other.
 */
GetVirtualMachineRequest::GetVirtualMachineRequest(const GetVirtualMachineRequest &other)
    : BackupGatewayRequest(new GetVirtualMachineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVirtualMachineRequest object.
 */
GetVirtualMachineRequest::GetVirtualMachineRequest()
    : BackupGatewayRequest(new GetVirtualMachineRequestPrivate(BackupGatewayRequest::GetVirtualMachineAction, this))
{

}

/*!
 * \reimp
 */
bool GetVirtualMachineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVirtualMachineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVirtualMachineRequest::response(QNetworkReply * const reply) const
{
    return new GetVirtualMachineResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::GetVirtualMachineRequestPrivate
 * \brief The GetVirtualMachineRequestPrivate class provides private implementation for GetVirtualMachineRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a GetVirtualMachineRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
GetVirtualMachineRequestPrivate::GetVirtualMachineRequestPrivate(
    const BackupGatewayRequest::Action action, GetVirtualMachineRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVirtualMachineRequest
 * class' copy constructor.
 */
GetVirtualMachineRequestPrivate::GetVirtualMachineRequestPrivate(
    const GetVirtualMachineRequestPrivate &other, GetVirtualMachineRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
