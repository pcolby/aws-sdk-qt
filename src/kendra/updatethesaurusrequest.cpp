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

#include "updatethesaurusrequest.h"
#include "updatethesaurusrequest_p.h"
#include "updatethesaurusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::UpdateThesaurusRequest
 * \brief The UpdateThesaurusRequest class provides an interface for kendra UpdateThesaurus requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::updateThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThesaurusRequest::UpdateThesaurusRequest(const UpdateThesaurusRequest &other)
    : kendraRequest(new UpdateThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThesaurusRequest object.
 */
UpdateThesaurusRequest::UpdateThesaurusRequest()
    : kendraRequest(new UpdateThesaurusRequestPrivate(kendraRequest::UpdateThesaurusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThesaurusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThesaurusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThesaurusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThesaurusResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::UpdateThesaurusRequestPrivate
 * \brief The UpdateThesaurusRequestPrivate class provides private implementation for UpdateThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a UpdateThesaurusRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
UpdateThesaurusRequestPrivate::UpdateThesaurusRequestPrivate(
    const kendraRequest::Action action, UpdateThesaurusRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThesaurusRequest
 * class' copy constructor.
 */
UpdateThesaurusRequestPrivate::UpdateThesaurusRequestPrivate(
    const UpdateThesaurusRequestPrivate &other, UpdateThesaurusRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
