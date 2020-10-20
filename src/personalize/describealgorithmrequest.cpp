/*
    Copyright 2013-2020 Paul Colby

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

#include "describealgorithmrequest.h"
#include "describealgorithmrequest_p.h"
#include "describealgorithmresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeAlgorithmRequest
 * \brief The DescribeAlgorithmRequest class provides an interface for Personalize DescribeAlgorithm requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeAlgorithm
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest(const DescribeAlgorithmRequest &other)
    : PersonalizeRequest(new DescribeAlgorithmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlgorithmRequest object.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest()
    : PersonalizeRequest(new DescribeAlgorithmRequestPrivate(PersonalizeRequest::DescribeAlgorithmAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlgorithmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlgorithmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlgorithmRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlgorithmResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeAlgorithmRequestPrivate
 * \brief The DescribeAlgorithmRequestPrivate class provides private implementation for DescribeAlgorithmRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeAlgorithmRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeAlgorithmRequestPrivate::DescribeAlgorithmRequestPrivate(
    const PersonalizeRequest::Action action, DescribeAlgorithmRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlgorithmRequest
 * class' copy constructor.
 */
DescribeAlgorithmRequestPrivate::DescribeAlgorithmRequestPrivate(
    const DescribeAlgorithmRequestPrivate &other, DescribeAlgorithmRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
