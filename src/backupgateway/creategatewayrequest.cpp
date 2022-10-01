// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategatewayrequest.h"
#include "creategatewayrequest_p.h"
#include "creategatewayresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::CreateGatewayRequest
 * \brief The CreateGatewayRequest class provides an interface for BackupGateway CreateGateway requests.
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
 * \sa BackupGatewayClient::createGateway
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGatewayRequest::CreateGatewayRequest(const CreateGatewayRequest &other)
    : BackupGatewayRequest(new CreateGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGatewayRequest object.
 */
CreateGatewayRequest::CreateGatewayRequest()
    : BackupGatewayRequest(new CreateGatewayRequestPrivate(BackupGatewayRequest::CreateGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::CreateGatewayRequestPrivate
 * \brief The CreateGatewayRequestPrivate class provides private implementation for CreateGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a CreateGatewayRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
CreateGatewayRequestPrivate::CreateGatewayRequestPrivate(
    const BackupGatewayRequest::Action action, CreateGatewayRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGatewayRequest
 * class' copy constructor.
 */
CreateGatewayRequestPrivate::CreateGatewayRequestPrivate(
    const CreateGatewayRequestPrivate &other, CreateGatewayRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
