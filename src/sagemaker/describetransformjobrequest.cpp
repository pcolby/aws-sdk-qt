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

#include "describetransformjobrequest.h"
#include "describetransformjobrequest_p.h"
#include "describetransformjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTransformJobRequest
 * \brief The DescribeTransformJobRequest class provides an interface for SageMaker DescribeTransformJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeTransformJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTransformJobRequest::DescribeTransformJobRequest(const DescribeTransformJobRequest &other)
    : SageMakerRequest(new DescribeTransformJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTransformJobRequest object.
 */
DescribeTransformJobRequest::DescribeTransformJobRequest()
    : SageMakerRequest(new DescribeTransformJobRequestPrivate(SageMakerRequest::DescribeTransformJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTransformJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTransformJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTransformJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTransformJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeTransformJobRequestPrivate
 * \brief The DescribeTransformJobRequestPrivate class provides private implementation for DescribeTransformJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTransformJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeTransformJobRequestPrivate::DescribeTransformJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeTransformJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTransformJobRequest
 * class' copy constructor.
 */
DescribeTransformJobRequestPrivate::DescribeTransformJobRequestPrivate(
    const DescribeTransformJobRequestPrivate &other, DescribeTransformJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
