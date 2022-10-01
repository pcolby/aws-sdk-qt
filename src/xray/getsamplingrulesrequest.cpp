// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
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
