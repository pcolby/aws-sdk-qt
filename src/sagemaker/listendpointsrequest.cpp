/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
