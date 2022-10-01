// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testhypervisorconfigurationrequest.h"
#include "testhypervisorconfigurationrequest_p.h"
#include "testhypervisorconfigurationresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::TestHypervisorConfigurationRequest
 * \brief The TestHypervisorConfigurationRequest class provides an interface for BackupGateway TestHypervisorConfiguration requests.
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
 * \sa BackupGatewayClient::testHypervisorConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
TestHypervisorConfigurationRequest::TestHypervisorConfigurationRequest(const TestHypervisorConfigurationRequest &other)
    : BackupGatewayRequest(new TestHypervisorConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestHypervisorConfigurationRequest object.
 */
TestHypervisorConfigurationRequest::TestHypervisorConfigurationRequest()
    : BackupGatewayRequest(new TestHypervisorConfigurationRequestPrivate(BackupGatewayRequest::TestHypervisorConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool TestHypervisorConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestHypervisorConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestHypervisorConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new TestHypervisorConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::TestHypervisorConfigurationRequestPrivate
 * \brief The TestHypervisorConfigurationRequestPrivate class provides private implementation for TestHypervisorConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a TestHypervisorConfigurationRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
TestHypervisorConfigurationRequestPrivate::TestHypervisorConfigurationRequestPrivate(
    const BackupGatewayRequest::Action action, TestHypervisorConfigurationRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestHypervisorConfigurationRequest
 * class' copy constructor.
 */
TestHypervisorConfigurationRequestPrivate::TestHypervisorConfigurationRequestPrivate(
    const TestHypervisorConfigurationRequestPrivate &other, TestHypervisorConfigurationRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
