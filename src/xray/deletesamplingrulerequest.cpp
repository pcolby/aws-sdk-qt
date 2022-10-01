// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesamplingrulerequest.h"
#include "deletesamplingrulerequest_p.h"
#include "deletesamplingruleresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::DeleteSamplingRuleRequest
 * \brief The DeleteSamplingRuleRequest class provides an interface for XRay DeleteSamplingRule requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::deleteSamplingRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSamplingRuleRequest::DeleteSamplingRuleRequest(const DeleteSamplingRuleRequest &other)
    : XRayRequest(new DeleteSamplingRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSamplingRuleRequest object.
 */
DeleteSamplingRuleRequest::DeleteSamplingRuleRequest()
    : XRayRequest(new DeleteSamplingRuleRequestPrivate(XRayRequest::DeleteSamplingRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSamplingRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSamplingRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSamplingRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSamplingRuleResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::DeleteSamplingRuleRequestPrivate
 * \brief The DeleteSamplingRuleRequestPrivate class provides private implementation for DeleteSamplingRuleRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a DeleteSamplingRuleRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
DeleteSamplingRuleRequestPrivate::DeleteSamplingRuleRequestPrivate(
    const XRayRequest::Action action, DeleteSamplingRuleRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSamplingRuleRequest
 * class' copy constructor.
 */
DeleteSamplingRuleRequestPrivate::DeleteSamplingRuleRequestPrivate(
    const DeleteSamplingRuleRequestPrivate &other, DeleteSamplingRuleRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
