// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimageversionrequest.h"
#include "deleteimageversionrequest_p.h"
#include "deleteimageversionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteImageVersionRequest
 * \brief The DeleteImageVersionRequest class provides an interface for SageMaker DeleteImageVersion requests.
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
 * \sa SageMakerClient::deleteImageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageVersionRequest::DeleteImageVersionRequest(const DeleteImageVersionRequest &other)
    : SageMakerRequest(new DeleteImageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageVersionRequest object.
 */
DeleteImageVersionRequest::DeleteImageVersionRequest()
    : SageMakerRequest(new DeleteImageVersionRequestPrivate(SageMakerRequest::DeleteImageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteImageVersionRequestPrivate
 * \brief The DeleteImageVersionRequestPrivate class provides private implementation for DeleteImageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteImageVersionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteImageVersionRequestPrivate::DeleteImageVersionRequestPrivate(
    const SageMakerRequest::Action action, DeleteImageVersionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageVersionRequest
 * class' copy constructor.
 */
DeleteImageVersionRequestPrivate::DeleteImageVersionRequestPrivate(
    const DeleteImageVersionRequestPrivate &other, DeleteImageVersionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
