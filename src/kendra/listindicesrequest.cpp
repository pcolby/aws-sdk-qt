// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listindicesrequest.h"
#include "listindicesrequest_p.h"
#include "listindicesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListIndicesRequest
 * \brief The ListIndicesRequest class provides an interface for Kendra ListIndices requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listIndices
 */

/*!
 * Constructs a copy of \a other.
 */
ListIndicesRequest::ListIndicesRequest(const ListIndicesRequest &other)
    : KendraRequest(new ListIndicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIndicesRequest object.
 */
ListIndicesRequest::ListIndicesRequest()
    : KendraRequest(new ListIndicesRequestPrivate(KendraRequest::ListIndicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListIndicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIndicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIndicesRequest::response(QNetworkReply * const reply) const
{
    return new ListIndicesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListIndicesRequestPrivate
 * \brief The ListIndicesRequestPrivate class provides private implementation for ListIndicesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListIndicesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const KendraRequest::Action action, ListIndicesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIndicesRequest
 * class' copy constructor.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const ListIndicesRequestPrivate &other, ListIndicesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
