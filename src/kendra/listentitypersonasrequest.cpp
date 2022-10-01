// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitypersonasrequest.h"
#include "listentitypersonasrequest_p.h"
#include "listentitypersonasresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListEntityPersonasRequest
 * \brief The ListEntityPersonasRequest class provides an interface for Kendra ListEntityPersonas requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listEntityPersonas
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntityPersonasRequest::ListEntityPersonasRequest(const ListEntityPersonasRequest &other)
    : KendraRequest(new ListEntityPersonasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntityPersonasRequest object.
 */
ListEntityPersonasRequest::ListEntityPersonasRequest()
    : KendraRequest(new ListEntityPersonasRequestPrivate(KendraRequest::ListEntityPersonasAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntityPersonasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntityPersonasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntityPersonasRequest::response(QNetworkReply * const reply) const
{
    return new ListEntityPersonasResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListEntityPersonasRequestPrivate
 * \brief The ListEntityPersonasRequestPrivate class provides private implementation for ListEntityPersonasRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListEntityPersonasRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListEntityPersonasRequestPrivate::ListEntityPersonasRequestPrivate(
    const KendraRequest::Action action, ListEntityPersonasRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntityPersonasRequest
 * class' copy constructor.
 */
ListEntityPersonasRequestPrivate::ListEntityPersonasRequestPrivate(
    const ListEntityPersonasRequestPrivate &other, ListEntityPersonasRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
