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
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateThesaurusRequest
 * \brief The UpdateThesaurusRequest class provides an interface for Kendra UpdateThesaurus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThesaurusRequest::UpdateThesaurusRequest(const UpdateThesaurusRequest &other)
    : KendraRequest(new UpdateThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThesaurusRequest object.
 */
UpdateThesaurusRequest::UpdateThesaurusRequest()
    : KendraRequest(new UpdateThesaurusRequestPrivate(KendraRequest::UpdateThesaurusAction, this))
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
 * \class QtAws::Kendra::UpdateThesaurusRequestPrivate
 * \brief The UpdateThesaurusRequestPrivate class provides private implementation for UpdateThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateThesaurusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateThesaurusRequestPrivate::UpdateThesaurusRequestPrivate(
    const KendraRequest::Action action, UpdateThesaurusRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
