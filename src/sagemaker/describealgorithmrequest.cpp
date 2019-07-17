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

#include "describealgorithmrequest.h"
#include "describealgorithmrequest_p.h"
#include "describealgorithmresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAlgorithmRequest
 * \brief The DescribeAlgorithmRequest class provides an interface for SageMaker DescribeAlgorithm requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::describeAlgorithm
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest(const DescribeAlgorithmRequest &other)
    : SageMakerRequest(new DescribeAlgorithmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlgorithmRequest object.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest()
    : SageMakerRequest(new DescribeAlgorithmRequestPrivate(SageMakerRequest::DescribeAlgorithmAction, this))
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
 * \class QtAws::SageMaker::DescribeAlgorithmRequestPrivate
 * \brief The DescribeAlgorithmRequestPrivate class provides private implementation for DescribeAlgorithmRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAlgorithmRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeAlgorithmRequestPrivate::DescribeAlgorithmRequestPrivate(
    const SageMakerRequest::Action action, DescribeAlgorithmRequest * const q)
    : SageMakerRequestPrivate(action, q)
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
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
