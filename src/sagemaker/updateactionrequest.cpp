// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateactionrequest.h"
#include "updateactionrequest_p.h"
#include "updateactionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateActionRequest
 * \brief The UpdateActionRequest class provides an interface for SageMaker UpdateAction requests.
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
 * \sa SageMakerClient::updateAction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateActionRequest::UpdateActionRequest(const UpdateActionRequest &other)
    : SageMakerRequest(new UpdateActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateActionRequest object.
 */
UpdateActionRequest::UpdateActionRequest()
    : SageMakerRequest(new UpdateActionRequestPrivate(SageMakerRequest::UpdateActionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateActionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateActionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateActionRequestPrivate
 * \brief The UpdateActionRequestPrivate class provides private implementation for UpdateActionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateActionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateActionRequestPrivate::UpdateActionRequestPrivate(
    const SageMakerRequest::Action action, UpdateActionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateActionRequest
 * class' copy constructor.
 */
UpdateActionRequestPrivate::UpdateActionRequestPrivate(
    const UpdateActionRequestPrivate &other, UpdateActionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
