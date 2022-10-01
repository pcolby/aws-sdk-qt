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

#include "getconnectattachmentrequest.h"
#include "getconnectattachmentrequest_p.h"
#include "getconnectattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectAttachmentRequest
 * \brief The GetConnectAttachmentRequest class provides an interface for NetworkManager GetConnectAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectAttachmentRequest::GetConnectAttachmentRequest(const GetConnectAttachmentRequest &other)
    : NetworkManagerRequest(new GetConnectAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectAttachmentRequest object.
 */
GetConnectAttachmentRequest::GetConnectAttachmentRequest()
    : NetworkManagerRequest(new GetConnectAttachmentRequestPrivate(NetworkManagerRequest::GetConnectAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetConnectAttachmentRequestPrivate
 * \brief The GetConnectAttachmentRequestPrivate class provides private implementation for GetConnectAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetConnectAttachmentRequestPrivate::GetConnectAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, GetConnectAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectAttachmentRequest
 * class' copy constructor.
 */
GetConnectAttachmentRequestPrivate::GetConnectAttachmentRequestPrivate(
    const GetConnectAttachmentRequestPrivate &other, GetConnectAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
