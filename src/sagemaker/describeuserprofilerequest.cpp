// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserprofilerequest.h"
#include "describeuserprofilerequest_p.h"
#include "describeuserprofileresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeUserProfileRequest
 * \brief The DescribeUserProfileRequest class provides an interface for SageMaker DescribeUserProfile requests.
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
 * \sa SageMakerClient::describeUserProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserProfileRequest::DescribeUserProfileRequest(const DescribeUserProfileRequest &other)
    : SageMakerRequest(new DescribeUserProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserProfileRequest object.
 */
DescribeUserProfileRequest::DescribeUserProfileRequest()
    : SageMakerRequest(new DescribeUserProfileRequestPrivate(SageMakerRequest::DescribeUserProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserProfileResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeUserProfileRequestPrivate
 * \brief The DescribeUserProfileRequestPrivate class provides private implementation for DescribeUserProfileRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeUserProfileRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeUserProfileRequestPrivate::DescribeUserProfileRequestPrivate(
    const SageMakerRequest::Action action, DescribeUserProfileRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserProfileRequest
 * class' copy constructor.
 */
DescribeUserProfileRequestPrivate::DescribeUserProfileRequestPrivate(
    const DescribeUserProfileRequestPrivate &other, DescribeUserProfileRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
