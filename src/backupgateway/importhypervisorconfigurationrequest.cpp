// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importhypervisorconfigurationrequest.h"
#include "importhypervisorconfigurationrequest_p.h"
#include "importhypervisorconfigurationresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ImportHypervisorConfigurationRequest
 * \brief The ImportHypervisorConfigurationRequest class provides an interface for BackupGateway ImportHypervisorConfiguration requests.
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
 * \sa BackupGatewayClient::importHypervisorConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
ImportHypervisorConfigurationRequest::ImportHypervisorConfigurationRequest(const ImportHypervisorConfigurationRequest &other)
    : BackupGatewayRequest(new ImportHypervisorConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportHypervisorConfigurationRequest object.
 */
ImportHypervisorConfigurationRequest::ImportHypervisorConfigurationRequest()
    : BackupGatewayRequest(new ImportHypervisorConfigurationRequestPrivate(BackupGatewayRequest::ImportHypervisorConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ImportHypervisorConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportHypervisorConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportHypervisorConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ImportHypervisorConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::ImportHypervisorConfigurationRequestPrivate
 * \brief The ImportHypervisorConfigurationRequestPrivate class provides private implementation for ImportHypervisorConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ImportHypervisorConfigurationRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
ImportHypervisorConfigurationRequestPrivate::ImportHypervisorConfigurationRequestPrivate(
    const BackupGatewayRequest::Action action, ImportHypervisorConfigurationRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportHypervisorConfigurationRequest
 * class' copy constructor.
 */
ImportHypervisorConfigurationRequestPrivate::ImportHypervisorConfigurationRequestPrivate(
    const ImportHypervisorConfigurationRequestPrivate &other, ImportHypervisorConfigurationRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
