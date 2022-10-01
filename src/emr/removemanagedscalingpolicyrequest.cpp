// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removemanagedscalingpolicyrequest.h"
#include "removemanagedscalingpolicyrequest_p.h"
#include "removemanagedscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RemoveManagedScalingPolicyRequest
 * \brief The RemoveManagedScalingPolicyRequest class provides an interface for Emr RemoveManagedScalingPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::removeManagedScalingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveManagedScalingPolicyRequest::RemoveManagedScalingPolicyRequest(const RemoveManagedScalingPolicyRequest &other)
    : EmrRequest(new RemoveManagedScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveManagedScalingPolicyRequest object.
 */
RemoveManagedScalingPolicyRequest::RemoveManagedScalingPolicyRequest()
    : EmrRequest(new RemoveManagedScalingPolicyRequestPrivate(EmrRequest::RemoveManagedScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveManagedScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveManagedScalingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveManagedScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new RemoveManagedScalingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::RemoveManagedScalingPolicyRequestPrivate
 * \brief The RemoveManagedScalingPolicyRequestPrivate class provides private implementation for RemoveManagedScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RemoveManagedScalingPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
RemoveManagedScalingPolicyRequestPrivate::RemoveManagedScalingPolicyRequestPrivate(
    const EmrRequest::Action action, RemoveManagedScalingPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveManagedScalingPolicyRequest
 * class' copy constructor.
 */
RemoveManagedScalingPolicyRequestPrivate::RemoveManagedScalingPolicyRequestPrivate(
    const RemoveManagedScalingPolicyRequestPrivate &other, RemoveManagedScalingPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
