// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
