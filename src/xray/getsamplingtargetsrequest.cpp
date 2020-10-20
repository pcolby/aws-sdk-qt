/*
    Copyright 2013-2020 Paul Colby

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

#include "getsamplingtargetsrequest.h"
#include "getsamplingtargetsrequest_p.h"
#include "getsamplingtargetsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingTargetsRequest
 * \brief The GetSamplingTargetsRequest class provides an interface for XRay GetSamplingTargets requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getSamplingTargets
 */

/*!
 * Constructs a copy of \a other.
 */
GetSamplingTargetsRequest::GetSamplingTargetsRequest(const GetSamplingTargetsRequest &other)
    : XRayRequest(new GetSamplingTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSamplingTargetsRequest object.
 */
GetSamplingTargetsRequest::GetSamplingTargetsRequest()
    : XRayRequest(new GetSamplingTargetsRequestPrivate(XRayRequest::GetSamplingTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSamplingTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSamplingTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSamplingTargetsRequest::response(QNetworkReply * const reply) const
{
    return new GetSamplingTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetSamplingTargetsRequestPrivate
 * \brief The GetSamplingTargetsRequestPrivate class provides private implementation for GetSamplingTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingTargetsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetSamplingTargetsRequestPrivate::GetSamplingTargetsRequestPrivate(
    const XRayRequest::Action action, GetSamplingTargetsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSamplingTargetsRequest
 * class' copy constructor.
 */
GetSamplingTargetsRequestPrivate::GetSamplingTargetsRequestPrivate(
    const GetSamplingTargetsRequestPrivate &other, GetSamplingTargetsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
