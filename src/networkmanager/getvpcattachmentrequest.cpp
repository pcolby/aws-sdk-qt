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

#include "getvpcattachmentrequest.h"
#include "getvpcattachmentrequest_p.h"
#include "getvpcattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetVpcAttachmentRequest
 * \brief The GetVpcAttachmentRequest class provides an interface for NetworkManager GetVpcAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getVpcAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcAttachmentRequest::GetVpcAttachmentRequest(const GetVpcAttachmentRequest &other)
    : NetworkManagerRequest(new GetVpcAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcAttachmentRequest object.
 */
GetVpcAttachmentRequest::GetVpcAttachmentRequest()
    : NetworkManagerRequest(new GetVpcAttachmentRequestPrivate(NetworkManagerRequest::GetVpcAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetVpcAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVpcAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetVpcAttachmentRequestPrivate
 * \brief The GetVpcAttachmentRequestPrivate class provides private implementation for GetVpcAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetVpcAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetVpcAttachmentRequestPrivate::GetVpcAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, GetVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVpcAttachmentRequest
 * class' copy constructor.
 */
GetVpcAttachmentRequestPrivate::GetVpcAttachmentRequestPrivate(
    const GetVpcAttachmentRequestPrivate &other, GetVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
