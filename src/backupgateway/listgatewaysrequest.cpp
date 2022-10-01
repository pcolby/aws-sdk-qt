// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgatewaysrequest.h"
#include "listgatewaysrequest_p.h"
#include "listgatewaysresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ListGatewaysRequest
 * \brief The ListGatewaysRequest class provides an interface for BackupGateway ListGateways requests.
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
 * \sa BackupGatewayClient::listGateways
 */

/*!
 * Constructs a copy of \a other.
 */
ListGatewaysRequest::ListGatewaysRequest(const ListGatewaysRequest &other)
    : BackupGatewayRequest(new ListGatewaysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGatewaysRequest object.
 */
ListGatewaysRequest::ListGatewaysRequest()
    : BackupGatewayRequest(new ListGatewaysRequestPrivate(BackupGatewayRequest::ListGatewaysAction, this))
{

}

/*!
 * \reimp
 */
bool ListGatewaysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGatewaysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new ListGatewaysResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::ListGatewaysRequestPrivate
 * \brief The ListGatewaysRequestPrivate class provides private implementation for ListGatewaysRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ListGatewaysRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
ListGatewaysRequestPrivate::ListGatewaysRequestPrivate(
    const BackupGatewayRequest::Action action, ListGatewaysRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGatewaysRequest
 * class' copy constructor.
 */
ListGatewaysRequestPrivate::ListGatewaysRequestPrivate(
    const ListGatewaysRequestPrivate &other, ListGatewaysRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
