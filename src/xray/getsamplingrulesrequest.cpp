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

#include "getsamplingrulesrequest.h"
#include "getsamplingrulesrequest_p.h"
#include "getsamplingrulesresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingRulesRequest
 * \brief The GetSamplingRulesRequest class provides an interface for XRay GetSamplingRules requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getSamplingRules
 */

/*!
 * Constructs a copy of \a other.
 */
GetSamplingRulesRequest::GetSamplingRulesRequest(const GetSamplingRulesRequest &other)
    : XRayRequest(new GetSamplingRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSamplingRulesRequest object.
 */
GetSamplingRulesRequest::GetSamplingRulesRequest()
    : XRayRequest(new GetSamplingRulesRequestPrivate(XRayRequest::GetSamplingRulesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSamplingRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSamplingRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSamplingRulesRequest::response(QNetworkReply * const reply) const
{
    return new GetSamplingRulesResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetSamplingRulesRequestPrivate
 * \brief The GetSamplingRulesRequestPrivate class provides private implementation for GetSamplingRulesRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingRulesRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetSamplingRulesRequestPrivate::GetSamplingRulesRequestPrivate(
    const XRayRequest::Action action, GetSamplingRulesRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSamplingRulesRequest
 * class' copy constructor.
 */
GetSamplingRulesRequestPrivate::GetSamplingRulesRequestPrivate(
    const GetSamplingRulesRequestPrivate &other, GetSamplingRulesRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
