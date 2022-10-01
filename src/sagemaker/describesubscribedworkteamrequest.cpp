// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesubscribedworkteamrequest.h"
#include "describesubscribedworkteamrequest_p.h"
#include "describesubscribedworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeSubscribedWorkteamRequest
 * \brief The DescribeSubscribedWorkteamRequest class provides an interface for SageMaker DescribeSubscribedWorkteam requests.
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
 * \sa SageMakerClient::describeSubscribedWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSubscribedWorkteamRequest::DescribeSubscribedWorkteamRequest(const DescribeSubscribedWorkteamRequest &other)
    : SageMakerRequest(new DescribeSubscribedWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSubscribedWorkteamRequest object.
 */
DescribeSubscribedWorkteamRequest::DescribeSubscribedWorkteamRequest()
    : SageMakerRequest(new DescribeSubscribedWorkteamRequestPrivate(SageMakerRequest::DescribeSubscribedWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSubscribedWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSubscribedWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubscribedWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubscribedWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeSubscribedWorkteamRequestPrivate
 * \brief The DescribeSubscribedWorkteamRequestPrivate class provides private implementation for DescribeSubscribedWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeSubscribedWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeSubscribedWorkteamRequestPrivate::DescribeSubscribedWorkteamRequestPrivate(
    const SageMakerRequest::Action action, DescribeSubscribedWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubscribedWorkteamRequest
 * class' copy constructor.
 */
DescribeSubscribedWorkteamRequestPrivate::DescribeSubscribedWorkteamRequestPrivate(
    const DescribeSubscribedWorkteamRequestPrivate &other, DescribeSubscribedWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
