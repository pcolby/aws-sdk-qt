/*
    Copyright 2013-2018 Paul Colby

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

#include "invokeendpointrequest.h"
#include "invokeendpointrequest_p.h"
#include "invokeendpointresponse.h"
#include "sagemakerruntimerequest_p.h"

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointRequest
 * \brief The InvokeEndpointRequest class provides an interface for SageMakerRuntime InvokeEndpoint requests.
 *
 * \inmodule QtAwsSageMakerRuntime
 *
 *  The Amazon SageMaker runtime API.
 *
 * \sa SageMakerRuntimeClient::invokeEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
InvokeEndpointRequest::InvokeEndpointRequest(const InvokeEndpointRequest &other)
    : SageMakerRuntimeRequest(new InvokeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvokeEndpointRequest object.
 */
InvokeEndpointRequest::InvokeEndpointRequest()
    : SageMakerRuntimeRequest(new InvokeEndpointRequestPrivate(SageMakerRuntimeRequest::InvokeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InvokeEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new InvokeEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointRequestPrivate
 * \brief The InvokeEndpointRequestPrivate class provides private implementation for InvokeEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a InvokeEndpointRequestPrivate object for SageMakerRuntime \a action,
 * with public implementation \a q.
 */
InvokeEndpointRequestPrivate::InvokeEndpointRequestPrivate(
    const SageMakerRuntimeRequest::Action action, InvokeEndpointRequest * const q)
    : SageMakerRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InvokeEndpointRequest
 * class' copy constructor.
 */
InvokeEndpointRequestPrivate::InvokeEndpointRequestPrivate(
    const InvokeEndpointRequestPrivate &other, InvokeEndpointRequest * const q)
    : SageMakerRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerRuntime
} // namespace QtAws
