// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
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
