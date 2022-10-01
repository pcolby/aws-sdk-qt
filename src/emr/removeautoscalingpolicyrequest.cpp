// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeautoscalingpolicyrequest.h"
#include "removeautoscalingpolicyrequest_p.h"
#include "removeautoscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RemoveAutoScalingPolicyRequest
 * \brief The RemoveAutoScalingPolicyRequest class provides an interface for Emr RemoveAutoScalingPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::removeAutoScalingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAutoScalingPolicyRequest::RemoveAutoScalingPolicyRequest(const RemoveAutoScalingPolicyRequest &other)
    : EmrRequest(new RemoveAutoScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAutoScalingPolicyRequest object.
 */
RemoveAutoScalingPolicyRequest::RemoveAutoScalingPolicyRequest()
    : EmrRequest(new RemoveAutoScalingPolicyRequestPrivate(EmrRequest::RemoveAutoScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAutoScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAutoScalingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAutoScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAutoScalingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::RemoveAutoScalingPolicyRequestPrivate
 * \brief The RemoveAutoScalingPolicyRequestPrivate class provides private implementation for RemoveAutoScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RemoveAutoScalingPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
RemoveAutoScalingPolicyRequestPrivate::RemoveAutoScalingPolicyRequestPrivate(
    const EmrRequest::Action action, RemoveAutoScalingPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAutoScalingPolicyRequest
 * class' copy constructor.
 */
RemoveAutoScalingPolicyRequestPrivate::RemoveAutoScalingPolicyRequestPrivate(
    const RemoveAutoScalingPolicyRequestPrivate &other, RemoveAutoScalingPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
