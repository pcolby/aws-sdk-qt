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
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
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
