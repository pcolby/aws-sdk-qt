// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinsightsummariesrequest.h"
#include "getinsightsummariesrequest_p.h"
#include "getinsightsummariesresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightSummariesRequest
 * \brief The GetInsightSummariesRequest class provides an interface for XRay GetInsightSummaries requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsightSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightSummariesRequest::GetInsightSummariesRequest(const GetInsightSummariesRequest &other)
    : XRayRequest(new GetInsightSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightSummariesRequest object.
 */
GetInsightSummariesRequest::GetInsightSummariesRequest()
    : XRayRequest(new GetInsightSummariesRequestPrivate(XRayRequest::GetInsightSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightSummariesRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetInsightSummariesRequestPrivate
 * \brief The GetInsightSummariesRequestPrivate class provides private implementation for GetInsightSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightSummariesRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetInsightSummariesRequestPrivate::GetInsightSummariesRequestPrivate(
    const XRayRequest::Action action, GetInsightSummariesRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightSummariesRequest
 * class' copy constructor.
 */
GetInsightSummariesRequestPrivate::GetInsightSummariesRequestPrivate(
    const GetInsightSummariesRequestPrivate &other, GetInsightSummariesRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
