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

#include "deleteattachmentrequest.h"
#include "deleteattachmentrequest_p.h"
#include "deleteattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteAttachmentRequest
 * \brief The DeleteAttachmentRequest class provides an interface for NetworkManager DeleteAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAttachmentRequest::DeleteAttachmentRequest(const DeleteAttachmentRequest &other)
    : NetworkManagerRequest(new DeleteAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAttachmentRequest object.
 */
DeleteAttachmentRequest::DeleteAttachmentRequest()
    : NetworkManagerRequest(new DeleteAttachmentRequestPrivate(NetworkManagerRequest::DeleteAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteAttachmentRequestPrivate
 * \brief The DeleteAttachmentRequestPrivate class provides private implementation for DeleteAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteAttachmentRequestPrivate::DeleteAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAttachmentRequest
 * class' copy constructor.
 */
DeleteAttachmentRequestPrivate::DeleteAttachmentRequestPrivate(
    const DeleteAttachmentRequestPrivate &other, DeleteAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
