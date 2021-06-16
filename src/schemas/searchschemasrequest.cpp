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

#include "searchschemasrequest.h"
#include "searchschemasrequest_p.h"
#include "searchschemasresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::SearchSchemasRequest
 * \brief The SearchSchemasRequest class provides an interface for Schemas SearchSchemas requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::searchSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
SearchSchemasRequest::SearchSchemasRequest(const SearchSchemasRequest &other)
    : SchemasRequest(new SearchSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchSchemasRequest object.
 */
SearchSchemasRequest::SearchSchemasRequest()
    : SchemasRequest(new SearchSchemasRequestPrivate(SchemasRequest::SearchSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool SearchSchemasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchSchemasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchSchemasRequest::response(QNetworkReply * const reply) const
{
    return new SearchSchemasResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::SearchSchemasRequestPrivate
 * \brief The SearchSchemasRequestPrivate class provides private implementation for SearchSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SearchSchemasRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
SearchSchemasRequestPrivate::SearchSchemasRequestPrivate(
    const SchemasRequest::Action action, SearchSchemasRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchSchemasRequest
 * class' copy constructor.
 */
SearchSchemasRequestPrivate::SearchSchemasRequestPrivate(
    const SearchSchemasRequestPrivate &other, SearchSchemasRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
