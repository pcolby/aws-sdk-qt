// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevpcattachmentrequest.h"
#include "updatevpcattachmentrequest_p.h"
#include "updatevpcattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateVpcAttachmentRequest
 * \brief The UpdateVpcAttachmentRequest class provides an interface for NetworkManager UpdateVpcAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateVpcAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVpcAttachmentRequest::UpdateVpcAttachmentRequest(const UpdateVpcAttachmentRequest &other)
    : NetworkManagerRequest(new UpdateVpcAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVpcAttachmentRequest object.
 */
UpdateVpcAttachmentRequest::UpdateVpcAttachmentRequest()
    : NetworkManagerRequest(new UpdateVpcAttachmentRequestPrivate(NetworkManagerRequest::UpdateVpcAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVpcAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVpcAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVpcAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVpcAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateVpcAttachmentRequestPrivate
 * \brief The UpdateVpcAttachmentRequestPrivate class provides private implementation for UpdateVpcAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateVpcAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateVpcAttachmentRequestPrivate::UpdateVpcAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVpcAttachmentRequest
 * class' copy constructor.
 */
UpdateVpcAttachmentRequestPrivate::UpdateVpcAttachmentRequestPrivate(
    const UpdateVpcAttachmentRequestPrivate &other, UpdateVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
