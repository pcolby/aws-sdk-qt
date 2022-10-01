// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointconfigrequest.h"
#include "deleteendpointconfigrequest_p.h"
#include "deleteendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigRequest
 * \brief The DeleteEndpointConfigRequest class provides an interface for SageMaker DeleteEndpointConfig requests.
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
 * \sa SageMakerClient::deleteEndpointConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEndpointConfigRequest::DeleteEndpointConfigRequest(const DeleteEndpointConfigRequest &other)
    : SageMakerRequest(new DeleteEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEndpointConfigRequest object.
 */
DeleteEndpointConfigRequest::DeleteEndpointConfigRequest()
    : SageMakerRequest(new DeleteEndpointConfigRequestPrivate(SageMakerRequest::DeleteEndpointConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEndpointConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEndpointConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigRequestPrivate
 * \brief The DeleteEndpointConfigRequestPrivate class provides private implementation for DeleteEndpointConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEndpointConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteEndpointConfigRequestPrivate::DeleteEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointConfigRequest
 * class' copy constructor.
 */
DeleteEndpointConfigRequestPrivate::DeleteEndpointConfigRequestPrivate(
    const DeleteEndpointConfigRequestPrivate &other, DeleteEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
