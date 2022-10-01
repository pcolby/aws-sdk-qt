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

#include "deletefaqrequest.h"
#include "deletefaqrequest_p.h"
#include "deletefaqresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteFaqRequest
 * \brief The DeleteFaqRequest class provides an interface for Kendra DeleteFaq requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteFaq
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFaqRequest::DeleteFaqRequest(const DeleteFaqRequest &other)
    : KendraRequest(new DeleteFaqRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFaqRequest object.
 */
DeleteFaqRequest::DeleteFaqRequest()
    : KendraRequest(new DeleteFaqRequestPrivate(KendraRequest::DeleteFaqAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFaqRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFaqResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFaqRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFaqResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteFaqRequestPrivate
 * \brief The DeleteFaqRequestPrivate class provides private implementation for DeleteFaqRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteFaqRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteFaqRequestPrivate::DeleteFaqRequestPrivate(
    const KendraRequest::Action action, DeleteFaqRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFaqRequest
 * class' copy constructor.
 */
DeleteFaqRequestPrivate::DeleteFaqRequestPrivate(
    const DeleteFaqRequestPrivate &other, DeleteFaqRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
