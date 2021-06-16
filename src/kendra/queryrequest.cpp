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

#include "queryrequest.h"
#include "queryrequest_p.h"
#include "queryresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::QueryRequest
 * \brief The QueryRequest class provides an interface for kendra Query requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::query
 */

/*!
 * Constructs a copy of \a other.
 */
QueryRequest::QueryRequest(const QueryRequest &other)
    : kendraRequest(new QueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryRequest object.
 */
QueryRequest::QueryRequest()
    : kendraRequest(new QueryRequestPrivate(kendraRequest::QueryAction, this))
{

}

/*!
 * \reimp
 */
bool QueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryRequest::response(QNetworkReply * const reply) const
{
    return new QueryResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::QueryRequestPrivate
 * \brief The QueryRequestPrivate class provides private implementation for QueryRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a QueryRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const kendraRequest::Action action, QueryRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryRequest
 * class' copy constructor.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const QueryRequestPrivate &other, QueryRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
