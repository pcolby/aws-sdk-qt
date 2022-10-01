// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcidrblocksrequest.h"
#include "listcidrblocksrequest_p.h"
#include "listcidrblocksresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListCidrBlocksRequest
 * \brief The ListCidrBlocksRequest class provides an interface for Route53 ListCidrBlocks requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listCidrBlocks
 */

/*!
 * Constructs a copy of \a other.
 */
ListCidrBlocksRequest::ListCidrBlocksRequest(const ListCidrBlocksRequest &other)
    : Route53Request(new ListCidrBlocksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCidrBlocksRequest object.
 */
ListCidrBlocksRequest::ListCidrBlocksRequest()
    : Route53Request(new ListCidrBlocksRequestPrivate(Route53Request::ListCidrBlocksAction, this))
{

}

/*!
 * \reimp
 */
bool ListCidrBlocksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCidrBlocksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCidrBlocksRequest::response(QNetworkReply * const reply) const
{
    return new ListCidrBlocksResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListCidrBlocksRequestPrivate
 * \brief The ListCidrBlocksRequestPrivate class provides private implementation for ListCidrBlocksRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListCidrBlocksRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListCidrBlocksRequestPrivate::ListCidrBlocksRequestPrivate(
    const Route53Request::Action action, ListCidrBlocksRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCidrBlocksRequest
 * class' copy constructor.
 */
ListCidrBlocksRequestPrivate::ListCidrBlocksRequestPrivate(
    const ListCidrBlocksRequestPrivate &other, ListCidrBlocksRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
