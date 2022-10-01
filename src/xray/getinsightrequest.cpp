// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinsightrequest.h"
#include "getinsightrequest_p.h"
#include "getinsightresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightRequest
 * \brief The GetInsightRequest class provides an interface for XRay GetInsight requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsight
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightRequest::GetInsightRequest(const GetInsightRequest &other)
    : XRayRequest(new GetInsightRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightRequest object.
 */
GetInsightRequest::GetInsightRequest()
    : XRayRequest(new GetInsightRequestPrivate(XRayRequest::GetInsightAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetInsightRequestPrivate
 * \brief The GetInsightRequestPrivate class provides private implementation for GetInsightRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetInsightRequestPrivate::GetInsightRequestPrivate(
    const XRayRequest::Action action, GetInsightRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightRequest
 * class' copy constructor.
 */
GetInsightRequestPrivate::GetInsightRequestPrivate(
    const GetInsightRequestPrivate &other, GetInsightRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
