// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelrequest.h"
#include "deletemodelrequest_p.h"
#include "deletemodelresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelRequest
 * \brief The DeleteModelRequest class provides an interface for SageMaker DeleteModel requests.
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
 * \sa SageMakerClient::deleteModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelRequest::DeleteModelRequest(const DeleteModelRequest &other)
    : SageMakerRequest(new DeleteModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelRequest object.
 */
DeleteModelRequest::DeleteModelRequest()
    : SageMakerRequest(new DeleteModelRequestPrivate(SageMakerRequest::DeleteModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelRequestPrivate
 * \brief The DeleteModelRequestPrivate class provides private implementation for DeleteModelRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelRequest
 * class' copy constructor.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const DeleteModelRequestPrivate &other, DeleteModelRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
