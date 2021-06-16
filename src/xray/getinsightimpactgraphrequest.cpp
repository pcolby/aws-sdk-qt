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

#include "getinsightimpactgraphrequest.h"
#include "getinsightimpactgraphrequest_p.h"
#include "getinsightimpactgraphresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightImpactGraphRequest
 * \brief The GetInsightImpactGraphRequest class provides an interface for XRay GetInsightImpactGraph requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getInsightImpactGraph
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightImpactGraphRequest::GetInsightImpactGraphRequest(const GetInsightImpactGraphRequest &other)
    : XRayRequest(new GetInsightImpactGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightImpactGraphRequest object.
 */
GetInsightImpactGraphRequest::GetInsightImpactGraphRequest()
    : XRayRequest(new GetInsightImpactGraphRequestPrivate(XRayRequest::GetInsightImpactGraphAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightImpactGraphRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightImpactGraphResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightImpactGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightImpactGraphResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetInsightImpactGraphRequestPrivate
 * \brief The GetInsightImpactGraphRequestPrivate class provides private implementation for GetInsightImpactGraphRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightImpactGraphRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetInsightImpactGraphRequestPrivate::GetInsightImpactGraphRequestPrivate(
    const XRayRequest::Action action, GetInsightImpactGraphRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightImpactGraphRequest
 * class' copy constructor.
 */
GetInsightImpactGraphRequestPrivate::GetInsightImpactGraphRequestPrivate(
    const GetInsightImpactGraphRequestPrivate &other, GetInsightImpactGraphRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
