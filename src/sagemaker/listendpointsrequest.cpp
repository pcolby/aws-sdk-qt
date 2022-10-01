// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listendpointsrequest.h"
#include "listendpointsrequest_p.h"
#include "listendpointsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEndpointsRequest
 * \brief The ListEndpointsRequest class provides an interface for SageMaker ListEndpoints requests.
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
 * \sa SageMakerClient::listEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListEndpointsRequest::ListEndpointsRequest(const ListEndpointsRequest &other)
    : SageMakerRequest(new ListEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEndpointsRequest object.
 */
ListEndpointsRequest::ListEndpointsRequest()
    : SageMakerRequest(new ListEndpointsRequestPrivate(SageMakerRequest::ListEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListEndpointsRequestPrivate
 * \brief The ListEndpointsRequestPrivate class provides private implementation for ListEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEndpointsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const SageMakerRequest::Action action, ListEndpointsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointsRequest
 * class' copy constructor.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const ListEndpointsRequestPrivate &other, ListEndpointsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
