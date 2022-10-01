// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkforcerequest.h"
#include "updateworkforcerequest_p.h"
#include "updateworkforceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateWorkforceRequest
 * \brief The UpdateWorkforceRequest class provides an interface for SageMaker UpdateWorkforce requests.
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
 * \sa SageMakerClient::updateWorkforce
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkforceRequest::UpdateWorkforceRequest(const UpdateWorkforceRequest &other)
    : SageMakerRequest(new UpdateWorkforceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkforceRequest object.
 */
UpdateWorkforceRequest::UpdateWorkforceRequest()
    : SageMakerRequest(new UpdateWorkforceRequestPrivate(SageMakerRequest::UpdateWorkforceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkforceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkforceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkforceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkforceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateWorkforceRequestPrivate
 * \brief The UpdateWorkforceRequestPrivate class provides private implementation for UpdateWorkforceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateWorkforceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateWorkforceRequestPrivate::UpdateWorkforceRequestPrivate(
    const SageMakerRequest::Action action, UpdateWorkforceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkforceRequest
 * class' copy constructor.
 */
UpdateWorkforceRequestPrivate::UpdateWorkforceRequestPrivate(
    const UpdateWorkforceRequestPrivate &other, UpdateWorkforceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
