// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateendpointrequest.h"
#include "updateendpointrequest_p.h"
#include "updateendpointresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateEndpointRequest
 * \brief The UpdateEndpointRequest class provides an interface for SageMaker UpdateEndpoint requests.
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
 * \sa SageMakerClient::updateEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointRequest::UpdateEndpointRequest(const UpdateEndpointRequest &other)
    : SageMakerRequest(new UpdateEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointRequest object.
 */
UpdateEndpointRequest::UpdateEndpointRequest()
    : SageMakerRequest(new UpdateEndpointRequestPrivate(SageMakerRequest::UpdateEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateEndpointRequestPrivate
 * \brief The UpdateEndpointRequestPrivate class provides private implementation for UpdateEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateEndpointRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const SageMakerRequest::Action action, UpdateEndpointRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointRequest
 * class' copy constructor.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const UpdateEndpointRequestPrivate &other, UpdateEndpointRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
