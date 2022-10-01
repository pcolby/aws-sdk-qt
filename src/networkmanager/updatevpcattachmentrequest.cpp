/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
