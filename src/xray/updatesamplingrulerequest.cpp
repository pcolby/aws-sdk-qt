// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesamplingrulerequest.h"
#include "updatesamplingrulerequest_p.h"
#include "updatesamplingruleresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::UpdateSamplingRuleRequest
 * \brief The UpdateSamplingRuleRequest class provides an interface for XRay UpdateSamplingRule requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::updateSamplingRule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSamplingRuleRequest::UpdateSamplingRuleRequest(const UpdateSamplingRuleRequest &other)
    : XRayRequest(new UpdateSamplingRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSamplingRuleRequest object.
 */
UpdateSamplingRuleRequest::UpdateSamplingRuleRequest()
    : XRayRequest(new UpdateSamplingRuleRequestPrivate(XRayRequest::UpdateSamplingRuleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSamplingRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSamplingRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSamplingRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSamplingRuleResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::UpdateSamplingRuleRequestPrivate
 * \brief The UpdateSamplingRuleRequestPrivate class provides private implementation for UpdateSamplingRuleRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a UpdateSamplingRuleRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
UpdateSamplingRuleRequestPrivate::UpdateSamplingRuleRequestPrivate(
    const XRayRequest::Action action, UpdateSamplingRuleRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSamplingRuleRequest
 * class' copy constructor.
 */
UpdateSamplingRuleRequestPrivate::UpdateSamplingRuleRequestPrivate(
    const UpdateSamplingRuleRequestPrivate &other, UpdateSamplingRuleRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
