// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgettracesrequest.h"
#include "batchgettracesrequest_p.h"
#include "batchgettracesresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::BatchGetTracesRequest
 * \brief The BatchGetTracesRequest class provides an interface for XRay BatchGetTraces requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::batchGetTraces
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetTracesRequest::BatchGetTracesRequest(const BatchGetTracesRequest &other)
    : XRayRequest(new BatchGetTracesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetTracesRequest object.
 */
BatchGetTracesRequest::BatchGetTracesRequest()
    : XRayRequest(new BatchGetTracesRequestPrivate(XRayRequest::BatchGetTracesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetTracesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetTracesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetTracesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetTracesResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::BatchGetTracesRequestPrivate
 * \brief The BatchGetTracesRequestPrivate class provides private implementation for BatchGetTracesRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a BatchGetTracesRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
BatchGetTracesRequestPrivate::BatchGetTracesRequestPrivate(
    const XRayRequest::Action action, BatchGetTracesRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetTracesRequest
 * class' copy constructor.
 */
BatchGetTracesRequestPrivate::BatchGetTracesRequestPrivate(
    const BatchGetTracesRequestPrivate &other, BatchGetTracesRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
