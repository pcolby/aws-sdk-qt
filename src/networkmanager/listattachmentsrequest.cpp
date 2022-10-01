// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattachmentsrequest.h"
#include "listattachmentsrequest_p.h"
#include "listattachmentsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListAttachmentsRequest
 * \brief The ListAttachmentsRequest class provides an interface for NetworkManager ListAttachments requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listAttachments
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttachmentsRequest::ListAttachmentsRequest(const ListAttachmentsRequest &other)
    : NetworkManagerRequest(new ListAttachmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttachmentsRequest object.
 */
ListAttachmentsRequest::ListAttachmentsRequest()
    : NetworkManagerRequest(new ListAttachmentsRequestPrivate(NetworkManagerRequest::ListAttachmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttachmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttachmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttachmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachmentsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ListAttachmentsRequestPrivate
 * \brief The ListAttachmentsRequestPrivate class provides private implementation for ListAttachmentsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListAttachmentsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ListAttachmentsRequestPrivate::ListAttachmentsRequestPrivate(
    const NetworkManagerRequest::Action action, ListAttachmentsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttachmentsRequest
 * class' copy constructor.
 */
ListAttachmentsRequestPrivate::ListAttachmentsRequestPrivate(
    const ListAttachmentsRequestPrivate &other, ListAttachmentsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
