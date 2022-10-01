// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresiliencypolicyrequest.h"
#include "updateresiliencypolicyrequest_p.h"
#include "updateresiliencypolicyresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::UpdateResiliencyPolicyRequest
 * \brief The UpdateResiliencyPolicyRequest class provides an interface for ResilienceHub UpdateResiliencyPolicy requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::updateResiliencyPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResiliencyPolicyRequest::UpdateResiliencyPolicyRequest(const UpdateResiliencyPolicyRequest &other)
    : ResilienceHubRequest(new UpdateResiliencyPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResiliencyPolicyRequest object.
 */
UpdateResiliencyPolicyRequest::UpdateResiliencyPolicyRequest()
    : ResilienceHubRequest(new UpdateResiliencyPolicyRequestPrivate(ResilienceHubRequest::UpdateResiliencyPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResiliencyPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResiliencyPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResiliencyPolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResiliencyPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::UpdateResiliencyPolicyRequestPrivate
 * \brief The UpdateResiliencyPolicyRequestPrivate class provides private implementation for UpdateResiliencyPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a UpdateResiliencyPolicyRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
UpdateResiliencyPolicyRequestPrivate::UpdateResiliencyPolicyRequestPrivate(
    const ResilienceHubRequest::Action action, UpdateResiliencyPolicyRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResiliencyPolicyRequest
 * class' copy constructor.
 */
UpdateResiliencyPolicyRequestPrivate::UpdateResiliencyPolicyRequestPrivate(
    const UpdateResiliencyPolicyRequestPrivate &other, UpdateResiliencyPolicyRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
