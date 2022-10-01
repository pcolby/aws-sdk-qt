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
