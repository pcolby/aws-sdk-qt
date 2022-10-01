// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitlementsrequest.h"
#include "listentitlementsrequest_p.h"
#include "listentitlementsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListEntitlementsRequest
 * \brief The ListEntitlementsRequest class provides an interface for MediaConnect ListEntitlements requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listEntitlements
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntitlementsRequest::ListEntitlementsRequest(const ListEntitlementsRequest &other)
    : MediaConnectRequest(new ListEntitlementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntitlementsRequest object.
 */
ListEntitlementsRequest::ListEntitlementsRequest()
    : MediaConnectRequest(new ListEntitlementsRequestPrivate(MediaConnectRequest::ListEntitlementsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntitlementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntitlementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntitlementsRequest::response(QNetworkReply * const reply) const
{
    return new ListEntitlementsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::ListEntitlementsRequestPrivate
 * \brief The ListEntitlementsRequestPrivate class provides private implementation for ListEntitlementsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListEntitlementsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
ListEntitlementsRequestPrivate::ListEntitlementsRequestPrivate(
    const MediaConnectRequest::Action action, ListEntitlementsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntitlementsRequest
 * class' copy constructor.
 */
ListEntitlementsRequestPrivate::ListEntitlementsRequestPrivate(
    const ListEntitlementsRequestPrivate &other, ListEntitlementsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
