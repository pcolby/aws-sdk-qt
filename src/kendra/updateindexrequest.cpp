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
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateIndexRequest
 * \brief The UpdateIndexRequest class provides an interface for Kendra UpdateIndex requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateIndex
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIndexRequest::UpdateIndexRequest(const UpdateIndexRequest &other)
    : KendraRequest(new UpdateIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIndexRequest object.
 */
UpdateIndexRequest::UpdateIndexRequest()
    : KendraRequest(new UpdateIndexRequestPrivate(KendraRequest::UpdateIndexAction, this))
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
 * \class QtAws::Kendra::UpdateIndexRequestPrivate
 * \brief The UpdateIndexRequestPrivate class provides private implementation for UpdateIndexRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateIndexRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateIndexRequestPrivate::UpdateIndexRequestPrivate(
    const KendraRequest::Action action, UpdateIndexRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
