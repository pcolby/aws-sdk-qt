// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthesaurirequest.h"
#include "listthesaurirequest_p.h"
#include "listthesauriresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListThesauriRequest
 * \brief The ListThesauriRequest class provides an interface for Kendra ListThesauri requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listThesauri
 */

/*!
 * Constructs a copy of \a other.
 */
ListThesauriRequest::ListThesauriRequest(const ListThesauriRequest &other)
    : KendraRequest(new ListThesauriRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThesauriRequest object.
 */
ListThesauriRequest::ListThesauriRequest()
    : KendraRequest(new ListThesauriRequestPrivate(KendraRequest::ListThesauriAction, this))
{

}

/*!
 * \reimp
 */
bool ListThesauriRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThesauriResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThesauriRequest::response(QNetworkReply * const reply) const
{
    return new ListThesauriResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListThesauriRequestPrivate
 * \brief The ListThesauriRequestPrivate class provides private implementation for ListThesauriRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListThesauriRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListThesauriRequestPrivate::ListThesauriRequestPrivate(
    const KendraRequest::Action action, ListThesauriRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThesauriRequest
 * class' copy constructor.
 */
ListThesauriRequestPrivate::ListThesauriRequestPrivate(
    const ListThesauriRequestPrivate &other, ListThesauriRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
