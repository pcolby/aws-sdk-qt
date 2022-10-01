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

#include "rejectattachmentrequest.h"
#include "rejectattachmentrequest_p.h"
#include "rejectattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RejectAttachmentRequest
 * \brief The RejectAttachmentRequest class provides an interface for NetworkManager RejectAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::rejectAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
RejectAttachmentRequest::RejectAttachmentRequest(const RejectAttachmentRequest &other)
    : NetworkManagerRequest(new RejectAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectAttachmentRequest object.
 */
RejectAttachmentRequest::RejectAttachmentRequest()
    : NetworkManagerRequest(new RejectAttachmentRequestPrivate(NetworkManagerRequest::RejectAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool RejectAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new RejectAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::RejectAttachmentRequestPrivate
 * \brief The RejectAttachmentRequestPrivate class provides private implementation for RejectAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RejectAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
RejectAttachmentRequestPrivate::RejectAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, RejectAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectAttachmentRequest
 * class' copy constructor.
 */
RejectAttachmentRequestPrivate::RejectAttachmentRequestPrivate(
    const RejectAttachmentRequestPrivate &other, RejectAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
