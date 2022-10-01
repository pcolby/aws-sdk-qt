// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeulasrequest.h"
#include "listeulasrequest_p.h"
#include "listeulasresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListEulasRequest
 * \brief The ListEulasRequest class provides an interface for Nimble ListEulas requests.
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
 * \sa NimbleClient::listEulas
 */

/*!
 * Constructs a copy of \a other.
 */
ListEulasRequest::ListEulasRequest(const ListEulasRequest &other)
    : NimbleRequest(new ListEulasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEulasRequest object.
 */
ListEulasRequest::ListEulasRequest()
    : NimbleRequest(new ListEulasRequestPrivate(NimbleRequest::ListEulasAction, this))
{

}

/*!
 * \reimp
 */
bool ListEulasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEulasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEulasRequest::response(QNetworkReply * const reply) const
{
    return new ListEulasResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListEulasRequestPrivate
 * \brief The ListEulasRequestPrivate class provides private implementation for ListEulasRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListEulasRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListEulasRequestPrivate::ListEulasRequestPrivate(
    const NimbleRequest::Action action, ListEulasRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEulasRequest
 * class' copy constructor.
 */
ListEulasRequestPrivate::ListEulasRequestPrivate(
    const ListEulasRequestPrivate &other, ListEulasRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
