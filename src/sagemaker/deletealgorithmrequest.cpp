// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealgorithmrequest.h"
#include "deletealgorithmrequest_p.h"
#include "deletealgorithmresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAlgorithmRequest
 * \brief The DeleteAlgorithmRequest class provides an interface for SageMaker DeleteAlgorithm requests.
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
 * \sa SageMakerClient::deleteAlgorithm
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAlgorithmRequest::DeleteAlgorithmRequest(const DeleteAlgorithmRequest &other)
    : SageMakerRequest(new DeleteAlgorithmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAlgorithmRequest object.
 */
DeleteAlgorithmRequest::DeleteAlgorithmRequest()
    : SageMakerRequest(new DeleteAlgorithmRequestPrivate(SageMakerRequest::DeleteAlgorithmAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAlgorithmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAlgorithmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAlgorithmRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlgorithmResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteAlgorithmRequestPrivate
 * \brief The DeleteAlgorithmRequestPrivate class provides private implementation for DeleteAlgorithmRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAlgorithmRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteAlgorithmRequestPrivate::DeleteAlgorithmRequestPrivate(
    const SageMakerRequest::Action action, DeleteAlgorithmRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlgorithmRequest
 * class' copy constructor.
 */
DeleteAlgorithmRequestPrivate::DeleteAlgorithmRequestPrivate(
    const DeleteAlgorithmRequestPrivate &other, DeleteAlgorithmRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
