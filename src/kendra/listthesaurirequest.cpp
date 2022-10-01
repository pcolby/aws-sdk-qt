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
