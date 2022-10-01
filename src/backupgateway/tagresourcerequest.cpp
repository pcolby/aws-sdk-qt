// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for BackupGateway TagResource requests.
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
 * \sa BackupGatewayClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : BackupGatewayRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : BackupGatewayRequest(new TagResourceRequestPrivate(BackupGatewayRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::BackupGateway::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a TagResourceRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const BackupGatewayRequest::Action action, TagResourceRequest * const q)
    : BackupGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : BackupGatewayRequestPrivate(other, q)
{

}

} // namespace BackupGateway
} // namespace QtAws
