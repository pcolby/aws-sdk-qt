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

#include "deletefilterrequest.h"
#include "deletefilterrequest_p.h"
#include "deletefilterresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteFilterRequest
 * \brief The DeleteFilterRequest class provides an interface for Personalize DeleteFilter requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFilterRequest::DeleteFilterRequest(const DeleteFilterRequest &other)
    : PersonalizeRequest(new DeleteFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFilterRequest object.
 */
DeleteFilterRequest::DeleteFilterRequest()
    : PersonalizeRequest(new DeleteFilterRequestPrivate(PersonalizeRequest::DeleteFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteFilterRequestPrivate
 * \brief The DeleteFilterRequestPrivate class provides private implementation for DeleteFilterRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteFilterRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const PersonalizeRequest::Action action, DeleteFilterRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFilterRequest
 * class' copy constructor.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const DeleteFilterRequestPrivate &other, DeleteFilterRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
