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

#include "describefeaturetransformationrequest.h"
#include "describefeaturetransformationrequest_p.h"
#include "describefeaturetransformationresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeFeatureTransformationRequest
 * \brief The DescribeFeatureTransformationRequest class provides an interface for Personalize DescribeFeatureTransformation requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeFeatureTransformation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFeatureTransformationRequest::DescribeFeatureTransformationRequest(const DescribeFeatureTransformationRequest &other)
    : PersonalizeRequest(new DescribeFeatureTransformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFeatureTransformationRequest object.
 */
DescribeFeatureTransformationRequest::DescribeFeatureTransformationRequest()
    : PersonalizeRequest(new DescribeFeatureTransformationRequestPrivate(PersonalizeRequest::DescribeFeatureTransformationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFeatureTransformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFeatureTransformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFeatureTransformationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFeatureTransformationResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeFeatureTransformationRequestPrivate
 * \brief The DescribeFeatureTransformationRequestPrivate class provides private implementation for DescribeFeatureTransformationRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeFeatureTransformationRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeFeatureTransformationRequestPrivate::DescribeFeatureTransformationRequestPrivate(
    const PersonalizeRequest::Action action, DescribeFeatureTransformationRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFeatureTransformationRequest
 * class' copy constructor.
 */
DescribeFeatureTransformationRequestPrivate::DescribeFeatureTransformationRequestPrivate(
    const DescribeFeatureTransformationRequestPrivate &other, DescribeFeatureTransformationRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
