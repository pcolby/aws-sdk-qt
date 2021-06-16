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

#include "deleteindexrequest.h"
#include "deleteindexrequest_p.h"
#include "deleteindexresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DeleteIndexRequest
 * \brief The DeleteIndexRequest class provides an interface for kendra DeleteIndex requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::deleteIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIndexRequest::DeleteIndexRequest(const DeleteIndexRequest &other)
    : kendraRequest(new DeleteIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIndexRequest object.
 */
DeleteIndexRequest::DeleteIndexRequest()
    : kendraRequest(new DeleteIndexRequestPrivate(kendraRequest::DeleteIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIndexRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIndexResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::DeleteIndexRequestPrivate
 * \brief The DeleteIndexRequestPrivate class provides private implementation for DeleteIndexRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DeleteIndexRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
DeleteIndexRequestPrivate::DeleteIndexRequestPrivate(
    const kendraRequest::Action action, DeleteIndexRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIndexRequest
 * class' copy constructor.
 */
DeleteIndexRequestPrivate::DeleteIndexRequestPrivate(
    const DeleteIndexRequestPrivate &other, DeleteIndexRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
