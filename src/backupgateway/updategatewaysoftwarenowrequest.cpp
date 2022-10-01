// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewaysoftwarenowrequest.h"
#include "updategatewaysoftwarenowrequest_p.h"
#include "updategatewaysoftwarenowresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::UpdateGatewaySoftwareNowRequest
 * \brief The UpdateGatewaySoftwareNowRequest class provides an interface for BackupGateway UpdateGatewaySoftwareNow requests.
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
 * \sa BackupGatewayClient::updateGatewaySoftwareNow
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGatewaySoftwareNowRequest::UpdateGatewaySoftwareNowRequest(const UpdateGatewaySoftwareNowRequest &other)
    : BackupGatewayRequest(new UpdateGatewaySoftwareNowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGatewaySoftwareNowRequest object.
 */
UpdateGatewaySoftwareNowRequest::UpdateGatewaySoftwareNowRequest()
    : BackupGatewayRequest(new UpdateGatewaySoftwareNowRequestPrivate(BackupGatewayRequest::UpdateGatewaySoftwareNowAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGatewaySoftwareNowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGatewaySoftwareNowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGatewaySoftwareNowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewaySoftwareNowResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::UpdateGatewaySoftwareNowRequestPrivate
 * \brief The UpdateGatewaySoftwareNowRequestPrivate class provides private implementation for UpdateGatewaySoftwareNowRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a UpdateGatewaySoftwareNowRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
UpdateGatewaySoftwareNowRequestPrivate::UpdateGatewaySoftwareNowRequestPrivate(
    const BackupGatewayRequest::Action action, UpdateGatewaySoftwareNowRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewaySoftwareNowRequest
 * class' copy constructor.
 */
UpdateGatewaySoftwareNowRequestPrivate::UpdateGatewaySoftwareNowRequestPrivate(
    const UpdateGatewaySoftwareNowRequestPrivate &other, UpdateGatewaySoftwareNowRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
