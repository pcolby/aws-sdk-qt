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

#include "deletethesaurusrequest.h"
#include "deletethesaurusrequest_p.h"
#include "deletethesaurusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DeleteThesaurusRequest
 * \brief The DeleteThesaurusRequest class provides an interface for kendra DeleteThesaurus requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::deleteThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThesaurusRequest::DeleteThesaurusRequest(const DeleteThesaurusRequest &other)
    : kendraRequest(new DeleteThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThesaurusRequest object.
 */
DeleteThesaurusRequest::DeleteThesaurusRequest()
    : kendraRequest(new DeleteThesaurusRequestPrivate(kendraRequest::DeleteThesaurusAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThesaurusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThesaurusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThesaurusRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThesaurusResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::DeleteThesaurusRequestPrivate
 * \brief The DeleteThesaurusRequestPrivate class provides private implementation for DeleteThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DeleteThesaurusRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
DeleteThesaurusRequestPrivate::DeleteThesaurusRequestPrivate(
    const kendraRequest::Action action, DeleteThesaurusRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThesaurusRequest
 * class' copy constructor.
 */
DeleteThesaurusRequestPrivate::DeleteThesaurusRequestPrivate(
    const DeleteThesaurusRequestPrivate &other, DeleteThesaurusRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
