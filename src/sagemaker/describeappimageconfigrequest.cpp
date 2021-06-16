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

#include "describeappimageconfigrequest.h"
#include "describeappimageconfigrequest_p.h"
#include "describeappimageconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAppImageConfigRequest
 * \brief The DescribeAppImageConfigRequest class provides an interface for SageMaker DescribeAppImageConfig requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeAppImageConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppImageConfigRequest::DescribeAppImageConfigRequest(const DescribeAppImageConfigRequest &other)
    : SageMakerRequest(new DescribeAppImageConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppImageConfigRequest object.
 */
DescribeAppImageConfigRequest::DescribeAppImageConfigRequest()
    : SageMakerRequest(new DescribeAppImageConfigRequestPrivate(SageMakerRequest::DescribeAppImageConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppImageConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppImageConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppImageConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppImageConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeAppImageConfigRequestPrivate
 * \brief The DescribeAppImageConfigRequestPrivate class provides private implementation for DescribeAppImageConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAppImageConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeAppImageConfigRequestPrivate::DescribeAppImageConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppImageConfigRequest
 * class' copy constructor.
 */
DescribeAppImageConfigRequestPrivate::DescribeAppImageConfigRequestPrivate(
    const DescribeAppImageConfigRequestPrivate &other, DescribeAppImageConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
