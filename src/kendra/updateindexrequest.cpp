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

#include "updateindexrequest.h"
#include "updateindexrequest_p.h"
#include "updateindexresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::UpdateIndexRequest
 * \brief The UpdateIndexRequest class provides an interface for kendra UpdateIndex requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::updateIndex
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIndexRequest::UpdateIndexRequest(const UpdateIndexRequest &other)
    : kendraRequest(new UpdateIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIndexRequest object.
 */
UpdateIndexRequest::UpdateIndexRequest()
    : kendraRequest(new UpdateIndexRequestPrivate(kendraRequest::UpdateIndexAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIndexRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIndexResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::UpdateIndexRequestPrivate
 * \brief The UpdateIndexRequestPrivate class provides private implementation for UpdateIndexRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a UpdateIndexRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
UpdateIndexRequestPrivate::UpdateIndexRequestPrivate(
    const kendraRequest::Action action, UpdateIndexRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIndexRequest
 * class' copy constructor.
 */
UpdateIndexRequestPrivate::UpdateIndexRequestPrivate(
    const UpdateIndexRequestPrivate &other, UpdateIndexRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
