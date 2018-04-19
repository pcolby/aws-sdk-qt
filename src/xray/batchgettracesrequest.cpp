/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
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
 *
 * Constructs a BatchGetTracesRequestPrivate object for XRay \a action with,
 * public implementation \a q.
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
