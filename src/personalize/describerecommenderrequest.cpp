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

#include "describerecommenderrequest.h"
#include "describerecommenderrequest_p.h"
#include "describerecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeRecommenderRequest
 * \brief The DescribeRecommenderRequest class provides an interface for Personalize DescribeRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecommenderRequest::DescribeRecommenderRequest(const DescribeRecommenderRequest &other)
    : PersonalizeRequest(new DescribeRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecommenderRequest object.
 */
DescribeRecommenderRequest::DescribeRecommenderRequest()
    : PersonalizeRequest(new DescribeRecommenderRequestPrivate(PersonalizeRequest::DescribeRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeRecommenderRequestPrivate
 * \brief The DescribeRecommenderRequestPrivate class provides private implementation for DescribeRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeRecommenderRequestPrivate::DescribeRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, DescribeRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecommenderRequest
 * class' copy constructor.
 */
DescribeRecommenderRequestPrivate::DescribeRecommenderRequestPrivate(
    const DescribeRecommenderRequestPrivate &other, DescribeRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
