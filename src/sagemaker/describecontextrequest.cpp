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

#include "describecontextrequest.h"
#include "describecontextrequest_p.h"
#include "describecontextresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeContextRequest
 * \brief The DescribeContextRequest class provides an interface for SageMaker DescribeContext requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeContext
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContextRequest::DescribeContextRequest(const DescribeContextRequest &other)
    : SageMakerRequest(new DescribeContextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContextRequest object.
 */
DescribeContextRequest::DescribeContextRequest()
    : SageMakerRequest(new DescribeContextRequestPrivate(SageMakerRequest::DescribeContextAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContextRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContextResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeContextRequestPrivate
 * \brief The DescribeContextRequestPrivate class provides private implementation for DescribeContextRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeContextRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeContextRequestPrivate::DescribeContextRequestPrivate(
    const SageMakerRequest::Action action, DescribeContextRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContextRequest
 * class' copy constructor.
 */
DescribeContextRequestPrivate::DescribeContextRequestPrivate(
    const DescribeContextRequestPrivate &other, DescribeContextRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
