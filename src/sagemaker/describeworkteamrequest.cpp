// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkteamrequest.h"
#include "describeworkteamrequest_p.h"
#include "describeworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeWorkteamRequest
 * \brief The DescribeWorkteamRequest class provides an interface for SageMaker DescribeWorkteam requests.
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
 * \sa SageMakerClient::describeWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkteamRequest::DescribeWorkteamRequest(const DescribeWorkteamRequest &other)
    : SageMakerRequest(new DescribeWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkteamRequest object.
 */
DescribeWorkteamRequest::DescribeWorkteamRequest()
    : SageMakerRequest(new DescribeWorkteamRequestPrivate(SageMakerRequest::DescribeWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeWorkteamRequestPrivate
 * \brief The DescribeWorkteamRequestPrivate class provides private implementation for DescribeWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeWorkteamRequestPrivate::DescribeWorkteamRequestPrivate(
    const SageMakerRequest::Action action, DescribeWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkteamRequest
 * class' copy constructor.
 */
DescribeWorkteamRequestPrivate::DescribeWorkteamRequestPrivate(
    const DescribeWorkteamRequestPrivate &other, DescribeWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
