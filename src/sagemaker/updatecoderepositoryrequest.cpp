// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecoderepositoryrequest.h"
#include "updatecoderepositoryrequest_p.h"
#include "updatecoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryRequest
 * \brief The UpdateCodeRepositoryRequest class provides an interface for SageMaker UpdateCodeRepository requests.
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
 * \sa SageMakerClient::updateCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCodeRepositoryRequest::UpdateCodeRepositoryRequest(const UpdateCodeRepositoryRequest &other)
    : SageMakerRequest(new UpdateCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCodeRepositoryRequest object.
 */
UpdateCodeRepositoryRequest::UpdateCodeRepositoryRequest()
    : SageMakerRequest(new UpdateCodeRepositoryRequestPrivate(SageMakerRequest::UpdateCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryRequestPrivate
 * \brief The UpdateCodeRepositoryRequestPrivate class provides private implementation for UpdateCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateCodeRepositoryRequestPrivate::UpdateCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, UpdateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCodeRepositoryRequest
 * class' copy constructor.
 */
UpdateCodeRepositoryRequestPrivate::UpdateCodeRepositoryRequestPrivate(
    const UpdateCodeRepositoryRequestPrivate &other, UpdateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
