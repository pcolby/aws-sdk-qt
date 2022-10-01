// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenotebookinstancerequest.h"
#include "describenotebookinstancerequest_p.h"
#include "describenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceRequest
 * \brief The DescribeNotebookInstanceRequest class provides an interface for SageMaker DescribeNotebookInstance requests.
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
 * \sa SageMakerClient::describeNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotebookInstanceRequest::DescribeNotebookInstanceRequest(const DescribeNotebookInstanceRequest &other)
    : SageMakerRequest(new DescribeNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotebookInstanceRequest object.
 */
DescribeNotebookInstanceRequest::DescribeNotebookInstanceRequest()
    : SageMakerRequest(new DescribeNotebookInstanceRequestPrivate(SageMakerRequest::DescribeNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceRequestPrivate
 * \brief The DescribeNotebookInstanceRequestPrivate class provides private implementation for DescribeNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeNotebookInstanceRequestPrivate::DescribeNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, DescribeNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotebookInstanceRequest
 * class' copy constructor.
 */
DescribeNotebookInstanceRequestPrivate::DescribeNotebookInstanceRequestPrivate(
    const DescribeNotebookInstanceRequestPrivate &other, DescribeNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
