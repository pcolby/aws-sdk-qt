// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfaqsrequest.h"
#include "listfaqsrequest_p.h"
#include "listfaqsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListFaqsRequest
 * \brief The ListFaqsRequest class provides an interface for Kendra ListFaqs requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listFaqs
 */

/*!
 * Constructs a copy of \a other.
 */
ListFaqsRequest::ListFaqsRequest(const ListFaqsRequest &other)
    : KendraRequest(new ListFaqsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFaqsRequest object.
 */
ListFaqsRequest::ListFaqsRequest()
    : KendraRequest(new ListFaqsRequestPrivate(KendraRequest::ListFaqsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFaqsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFaqsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFaqsRequest::response(QNetworkReply * const reply) const
{
    return new ListFaqsResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListFaqsRequestPrivate
 * \brief The ListFaqsRequestPrivate class provides private implementation for ListFaqsRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListFaqsRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListFaqsRequestPrivate::ListFaqsRequestPrivate(
    const KendraRequest::Action action, ListFaqsRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFaqsRequest
 * class' copy constructor.
 */
ListFaqsRequestPrivate::ListFaqsRequestPrivate(
    const ListFaqsRequestPrivate &other, ListFaqsRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
