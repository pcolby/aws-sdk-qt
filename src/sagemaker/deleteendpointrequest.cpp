// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointrequest.h"
#include "deleteendpointrequest_p.h"
#include "deleteendpointresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEndpointRequest
 * \brief The DeleteEndpointRequest class provides an interface for SageMaker DeleteEndpoint requests.
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
 * \sa SageMakerClient::deleteEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEndpointRequest::DeleteEndpointRequest(const DeleteEndpointRequest &other)
    : SageMakerRequest(new DeleteEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEndpointRequest object.
 */
DeleteEndpointRequest::DeleteEndpointRequest()
    : SageMakerRequest(new DeleteEndpointRequestPrivate(SageMakerRequest::DeleteEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteEndpointRequestPrivate
 * \brief The DeleteEndpointRequestPrivate class provides private implementation for DeleteEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEndpointRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const SageMakerRequest::Action action, DeleteEndpointRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointRequest
 * class' copy constructor.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const DeleteEndpointRequestPrivate &other, DeleteEndpointRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
