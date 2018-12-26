/*
    Copyright 2013-2018 Paul Colby

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

#include "createsamplingrulerequest.h"
#include "createsamplingrulerequest_p.h"
#include "createsamplingruleresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::CreateSamplingRuleRequest
 * \brief The CreateSamplingRuleRequest class provides an interface for XRay CreateSamplingRule requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::createSamplingRule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSamplingRuleRequest::CreateSamplingRuleRequest(const CreateSamplingRuleRequest &other)
    : XRayRequest(new CreateSamplingRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSamplingRuleRequest object.
 */
CreateSamplingRuleRequest::CreateSamplingRuleRequest()
    : XRayRequest(new CreateSamplingRuleRequestPrivate(XRayRequest::CreateSamplingRuleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSamplingRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSamplingRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSamplingRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateSamplingRuleResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::CreateSamplingRuleRequestPrivate
 * \brief The CreateSamplingRuleRequestPrivate class provides private implementation for CreateSamplingRuleRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a CreateSamplingRuleRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
CreateSamplingRuleRequestPrivate::CreateSamplingRuleRequestPrivate(
    const XRayRequest::Action action, CreateSamplingRuleRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSamplingRuleRequest
 * class' copy constructor.
 */
CreateSamplingRuleRequestPrivate::CreateSamplingRuleRequestPrivate(
    const CreateSamplingRuleRequestPrivate &other, CreateSamplingRuleRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
