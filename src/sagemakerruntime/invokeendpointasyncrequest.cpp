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

#include "invokeendpointasyncrequest.h"
#include "invokeendpointasyncrequest_p.h"
#include "invokeendpointasyncresponse.h"
#include "sagemakerruntimerequest_p.h"

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointAsyncRequest
 * \brief The InvokeEndpointAsyncRequest class provides an interface for SageMakerRuntime InvokeEndpointAsync requests.
 *
 * \inmodule QtAwsSageMakerRuntime
 *
 *  The Amazon SageMaker runtime API.
 *
 * \sa SageMakerRuntimeClient::invokeEndpointAsync
 */

/*!
 * Constructs a copy of \a other.
 */
InvokeEndpointAsyncRequest::InvokeEndpointAsyncRequest(const InvokeEndpointAsyncRequest &other)
    : SageMakerRuntimeRequest(new InvokeEndpointAsyncRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvokeEndpointAsyncRequest object.
 */
InvokeEndpointAsyncRequest::InvokeEndpointAsyncRequest()
    : SageMakerRuntimeRequest(new InvokeEndpointAsyncRequestPrivate(SageMakerRuntimeRequest::InvokeEndpointAsyncAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeEndpointAsyncRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InvokeEndpointAsyncResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeEndpointAsyncRequest::response(QNetworkReply * const reply) const
{
    return new InvokeEndpointAsyncResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerRuntime::InvokeEndpointAsyncRequestPrivate
 * \brief The InvokeEndpointAsyncRequestPrivate class provides private implementation for InvokeEndpointAsyncRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a InvokeEndpointAsyncRequestPrivate object for SageMakerRuntime \a action,
 * with public implementation \a q.
 */
InvokeEndpointAsyncRequestPrivate::InvokeEndpointAsyncRequestPrivate(
    const SageMakerRuntimeRequest::Action action, InvokeEndpointAsyncRequest * const q)
    : SageMakerRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InvokeEndpointAsyncRequest
 * class' copy constructor.
 */
InvokeEndpointAsyncRequestPrivate::InvokeEndpointAsyncRequestPrivate(
    const InvokeEndpointAsyncRequestPrivate &other, InvokeEndpointAsyncRequest * const q)
    : SageMakerRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerRuntime
} // namespace QtAws
