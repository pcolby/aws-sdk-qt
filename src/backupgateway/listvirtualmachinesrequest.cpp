// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualmachinesrequest.h"
#include "listvirtualmachinesrequest_p.h"
#include "listvirtualmachinesresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ListVirtualMachinesRequest
 * \brief The ListVirtualMachinesRequest class provides an interface for BackupGateway ListVirtualMachines requests.
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
 * \sa BackupGatewayClient::listVirtualMachines
 */

/*!
 * Constructs a copy of \a other.
 */
ListVirtualMachinesRequest::ListVirtualMachinesRequest(const ListVirtualMachinesRequest &other)
    : BackupGatewayRequest(new ListVirtualMachinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVirtualMachinesRequest object.
 */
ListVirtualMachinesRequest::ListVirtualMachinesRequest()
    : BackupGatewayRequest(new ListVirtualMachinesRequestPrivate(BackupGatewayRequest::ListVirtualMachinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVirtualMachinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVirtualMachinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVirtualMachinesRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualMachinesResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::ListVirtualMachinesRequestPrivate
 * \brief The ListVirtualMachinesRequestPrivate class provides private implementation for ListVirtualMachinesRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ListVirtualMachinesRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
ListVirtualMachinesRequestPrivate::ListVirtualMachinesRequestPrivate(
    const BackupGatewayRequest::Action action, ListVirtualMachinesRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualMachinesRequest
 * class' copy constructor.
 */
ListVirtualMachinesRequestPrivate::ListVirtualMachinesRequestPrivate(
    const ListVirtualMachinesRequestPrivate &other, ListVirtualMachinesRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
