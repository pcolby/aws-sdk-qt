// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmaintenancestarttimerequest.h"
#include "putmaintenancestarttimerequest_p.h"
#include "putmaintenancestarttimeresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::PutMaintenanceStartTimeRequest
 * \brief The PutMaintenanceStartTimeRequest class provides an interface for BackupGateway PutMaintenanceStartTime requests.
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
 * \sa BackupGatewayClient::putMaintenanceStartTime
 */

/*!
 * Constructs a copy of \a other.
 */
PutMaintenanceStartTimeRequest::PutMaintenanceStartTimeRequest(const PutMaintenanceStartTimeRequest &other)
    : BackupGatewayRequest(new PutMaintenanceStartTimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMaintenanceStartTimeRequest object.
 */
PutMaintenanceStartTimeRequest::PutMaintenanceStartTimeRequest()
    : BackupGatewayRequest(new PutMaintenanceStartTimeRequestPrivate(BackupGatewayRequest::PutMaintenanceStartTimeAction, this))
{

}

/*!
 * \reimp
 */
bool PutMaintenanceStartTimeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMaintenanceStartTimeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMaintenanceStartTimeRequest::response(QNetworkReply * const reply) const
{
    return new PutMaintenanceStartTimeResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::PutMaintenanceStartTimeRequestPrivate
 * \brief The PutMaintenanceStartTimeRequestPrivate class provides private implementation for PutMaintenanceStartTimeRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a PutMaintenanceStartTimeRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
PutMaintenanceStartTimeRequestPrivate::PutMaintenanceStartTimeRequestPrivate(
    const BackupGatewayRequest::Action action, PutMaintenanceStartTimeRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMaintenanceStartTimeRequest
 * class' copy constructor.
 */
PutMaintenanceStartTimeRequestPrivate::PutMaintenanceStartTimeRequestPrivate(
    const PutMaintenanceStartTimeRequestPrivate &other, PutMaintenanceStartTimeRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
