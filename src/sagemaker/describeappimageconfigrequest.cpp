// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
