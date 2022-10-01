// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listendpointconfigsrequest.h"
#include "listendpointconfigsrequest_p.h"
#include "listendpointconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEndpointConfigsRequest
 * \brief The ListEndpointConfigsRequest class provides an interface for SageMaker ListEndpointConfigs requests.
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
 * \sa SageMakerClient::listEndpointConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListEndpointConfigsRequest::ListEndpointConfigsRequest(const ListEndpointConfigsRequest &other)
    : SageMakerRequest(new ListEndpointConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEndpointConfigsRequest object.
 */
ListEndpointConfigsRequest::ListEndpointConfigsRequest()
    : SageMakerRequest(new ListEndpointConfigsRequestPrivate(SageMakerRequest::ListEndpointConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEndpointConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEndpointConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEndpointConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListEndpointConfigsRequestPrivate
 * \brief The ListEndpointConfigsRequestPrivate class provides private implementation for ListEndpointConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEndpointConfigsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListEndpointConfigsRequestPrivate::ListEndpointConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListEndpointConfigsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointConfigsRequest
 * class' copy constructor.
 */
ListEndpointConfigsRequestPrivate::ListEndpointConfigsRequestPrivate(
    const ListEndpointConfigsRequestPrivate &other, ListEndpointConfigsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
