// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
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
