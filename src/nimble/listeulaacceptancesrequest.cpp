// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeulaacceptancesrequest.h"
#include "listeulaacceptancesrequest_p.h"
#include "listeulaacceptancesresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListEulaAcceptancesRequest
 * \brief The ListEulaAcceptancesRequest class provides an interface for Nimble ListEulaAcceptances requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listEulaAcceptances
 */

/*!
 * Constructs a copy of \a other.
 */
ListEulaAcceptancesRequest::ListEulaAcceptancesRequest(const ListEulaAcceptancesRequest &other)
    : NimbleRequest(new ListEulaAcceptancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEulaAcceptancesRequest object.
 */
ListEulaAcceptancesRequest::ListEulaAcceptancesRequest()
    : NimbleRequest(new ListEulaAcceptancesRequestPrivate(NimbleRequest::ListEulaAcceptancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEulaAcceptancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEulaAcceptancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEulaAcceptancesRequest::response(QNetworkReply * const reply) const
{
    return new ListEulaAcceptancesResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListEulaAcceptancesRequestPrivate
 * \brief The ListEulaAcceptancesRequestPrivate class provides private implementation for ListEulaAcceptancesRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListEulaAcceptancesRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListEulaAcceptancesRequestPrivate::ListEulaAcceptancesRequestPrivate(
    const NimbleRequest::Action action, ListEulaAcceptancesRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEulaAcceptancesRequest
 * class' copy constructor.
 */
ListEulaAcceptancesRequestPrivate::ListEulaAcceptancesRequestPrivate(
    const ListEulaAcceptancesRequestPrivate &other, ListEulaAcceptancesRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
