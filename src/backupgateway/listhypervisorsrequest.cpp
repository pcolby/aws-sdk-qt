// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhypervisorsrequest.h"
#include "listhypervisorsrequest_p.h"
#include "listhypervisorsresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::ListHypervisorsRequest
 * \brief The ListHypervisorsRequest class provides an interface for BackupGateway ListHypervisors requests.
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
 * \sa BackupGatewayClient::listHypervisors
 */

/*!
 * Constructs a copy of \a other.
 */
ListHypervisorsRequest::ListHypervisorsRequest(const ListHypervisorsRequest &other)
    : BackupGatewayRequest(new ListHypervisorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHypervisorsRequest object.
 */
ListHypervisorsRequest::ListHypervisorsRequest()
    : BackupGatewayRequest(new ListHypervisorsRequestPrivate(BackupGatewayRequest::ListHypervisorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHypervisorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHypervisorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHypervisorsRequest::response(QNetworkReply * const reply) const
{
    return new ListHypervisorsResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::ListHypervisorsRequestPrivate
 * \brief The ListHypervisorsRequestPrivate class provides private implementation for ListHypervisorsRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a ListHypervisorsRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
ListHypervisorsRequestPrivate::ListHypervisorsRequestPrivate(
    const BackupGatewayRequest::Action action, ListHypervisorsRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHypervisorsRequest
 * class' copy constructor.
 */
ListHypervisorsRequestPrivate::ListHypervisorsRequestPrivate(
    const ListHypervisorsRequestPrivate &other, ListHypervisorsRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
