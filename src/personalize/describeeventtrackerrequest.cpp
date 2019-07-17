/*
    Copyright 2013-2019 Paul Colby

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

#include "describeeventtrackerrequest.h"
#include "describeeventtrackerrequest_p.h"
#include "describeeventtrackerresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeEventTrackerRequest
 * \brief The DescribeEventTrackerRequest class provides an interface for Personalize DescribeEventTracker requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeEventTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventTrackerRequest::DescribeEventTrackerRequest(const DescribeEventTrackerRequest &other)
    : PersonalizeRequest(new DescribeEventTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventTrackerRequest object.
 */
DescribeEventTrackerRequest::DescribeEventTrackerRequest()
    : PersonalizeRequest(new DescribeEventTrackerRequestPrivate(PersonalizeRequest::DescribeEventTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventTrackerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeEventTrackerRequestPrivate
 * \brief The DescribeEventTrackerRequestPrivate class provides private implementation for DescribeEventTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeEventTrackerRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeEventTrackerRequestPrivate::DescribeEventTrackerRequestPrivate(
    const PersonalizeRequest::Action action, DescribeEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventTrackerRequest
 * class' copy constructor.
 */
DescribeEventTrackerRequestPrivate::DescribeEventTrackerRequestPrivate(
    const DescribeEventTrackerRequestPrivate &other, DescribeEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
