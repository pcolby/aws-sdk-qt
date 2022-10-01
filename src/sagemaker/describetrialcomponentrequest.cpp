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

#include "describetrialcomponentrequest.h"
#include "describetrialcomponentrequest_p.h"
#include "describetrialcomponentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrialComponentRequest
 * \brief The DescribeTrialComponentRequest class provides an interface for SageMaker DescribeTrialComponent requests.
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
 * \sa SageMakerClient::describeTrialComponent
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTrialComponentRequest::DescribeTrialComponentRequest(const DescribeTrialComponentRequest &other)
    : SageMakerRequest(new DescribeTrialComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTrialComponentRequest object.
 */
DescribeTrialComponentRequest::DescribeTrialComponentRequest()
    : SageMakerRequest(new DescribeTrialComponentRequestPrivate(SageMakerRequest::DescribeTrialComponentAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTrialComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTrialComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrialComponentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrialComponentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeTrialComponentRequestPrivate
 * \brief The DescribeTrialComponentRequestPrivate class provides private implementation for DescribeTrialComponentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrialComponentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeTrialComponentRequestPrivate::DescribeTrialComponentRequestPrivate(
    const SageMakerRequest::Action action, DescribeTrialComponentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrialComponentRequest
 * class' copy constructor.
 */
DescribeTrialComponentRequestPrivate::DescribeTrialComponentRequestPrivate(
    const DescribeTrialComponentRequestPrivate &other, DescribeTrialComponentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
