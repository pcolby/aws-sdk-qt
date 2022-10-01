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

#include "listrecommendersrequest.h"
#include "listrecommendersrequest_p.h"
#include "listrecommendersresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListRecommendersRequest
 * \brief The ListRecommendersRequest class provides an interface for Personalize ListRecommenders requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listRecommenders
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecommendersRequest::ListRecommendersRequest(const ListRecommendersRequest &other)
    : PersonalizeRequest(new ListRecommendersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecommendersRequest object.
 */
ListRecommendersRequest::ListRecommendersRequest()
    : PersonalizeRequest(new ListRecommendersRequestPrivate(PersonalizeRequest::ListRecommendersAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecommendersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecommendersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecommendersRequest::response(QNetworkReply * const reply) const
{
    return new ListRecommendersResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListRecommendersRequestPrivate
 * \brief The ListRecommendersRequestPrivate class provides private implementation for ListRecommendersRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListRecommendersRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListRecommendersRequestPrivate::ListRecommendersRequestPrivate(
    const PersonalizeRequest::Action action, ListRecommendersRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecommendersRequest
 * class' copy constructor.
 */
ListRecommendersRequestPrivate::ListRecommendersRequestPrivate(
    const ListRecommendersRequestPrivate &other, ListRecommendersRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
