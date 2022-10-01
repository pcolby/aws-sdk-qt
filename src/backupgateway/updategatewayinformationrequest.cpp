// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewayinformationrequest.h"
#include "updategatewayinformationrequest_p.h"
#include "updategatewayinformationresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::UpdateGatewayInformationRequest
 * \brief The UpdateGatewayInformationRequest class provides an interface for BackupGateway UpdateGatewayInformation requests.
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
 * \sa BackupGatewayClient::updateGatewayInformation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGatewayInformationRequest::UpdateGatewayInformationRequest(const UpdateGatewayInformationRequest &other)
    : BackupGatewayRequest(new UpdateGatewayInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGatewayInformationRequest object.
 */
UpdateGatewayInformationRequest::UpdateGatewayInformationRequest()
    : BackupGatewayRequest(new UpdateGatewayInformationRequestPrivate(BackupGatewayRequest::UpdateGatewayInformationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGatewayInformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGatewayInformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGatewayInformationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewayInformationResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::UpdateGatewayInformationRequestPrivate
 * \brief The UpdateGatewayInformationRequestPrivate class provides private implementation for UpdateGatewayInformationRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a UpdateGatewayInformationRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
UpdateGatewayInformationRequestPrivate::UpdateGatewayInformationRequestPrivate(
    const BackupGatewayRequest::Action action, UpdateGatewayInformationRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewayInformationRequest
 * class' copy constructor.
 */
UpdateGatewayInformationRequestPrivate::UpdateGatewayInformationRequestPrivate(
    const UpdateGatewayInformationRequestPrivate &other, UpdateGatewayInformationRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
