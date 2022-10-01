// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgatewayrequest.h"
#include "getgatewayrequest_p.h"
#include "getgatewayresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::GetGatewayRequest
 * \brief The GetGatewayRequest class provides an interface for BackupGateway GetGateway requests.
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
 * \sa BackupGatewayClient::getGateway
 */

/*!
 * Constructs a copy of \a other.
 */
GetGatewayRequest::GetGatewayRequest(const GetGatewayRequest &other)
    : BackupGatewayRequest(new GetGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGatewayRequest object.
 */
GetGatewayRequest::GetGatewayRequest()
    : BackupGatewayRequest(new GetGatewayRequestPrivate(BackupGatewayRequest::GetGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::GetGatewayRequestPrivate
 * \brief The GetGatewayRequestPrivate class provides private implementation for GetGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a GetGatewayRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
GetGatewayRequestPrivate::GetGatewayRequestPrivate(
    const BackupGatewayRequest::Action action, GetGatewayRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayRequest
 * class' copy constructor.
 */
GetGatewayRequestPrivate::GetGatewayRequestPrivate(
    const GetGatewayRequestPrivate &other, GetGatewayRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
