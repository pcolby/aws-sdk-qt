// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putautoscalingpolicyrequest.h"
#include "putautoscalingpolicyrequest_p.h"
#include "putautoscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutAutoScalingPolicyRequest
 * \brief The PutAutoScalingPolicyRequest class provides an interface for Emr PutAutoScalingPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putAutoScalingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutAutoScalingPolicyRequest::PutAutoScalingPolicyRequest(const PutAutoScalingPolicyRequest &other)
    : EmrRequest(new PutAutoScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAutoScalingPolicyRequest object.
 */
PutAutoScalingPolicyRequest::PutAutoScalingPolicyRequest()
    : EmrRequest(new PutAutoScalingPolicyRequestPrivate(EmrRequest::PutAutoScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutAutoScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAutoScalingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAutoScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutAutoScalingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::PutAutoScalingPolicyRequestPrivate
 * \brief The PutAutoScalingPolicyRequestPrivate class provides private implementation for PutAutoScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutAutoScalingPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
PutAutoScalingPolicyRequestPrivate::PutAutoScalingPolicyRequestPrivate(
    const EmrRequest::Action action, PutAutoScalingPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAutoScalingPolicyRequest
 * class' copy constructor.
 */
PutAutoScalingPolicyRequestPrivate::PutAutoScalingPolicyRequestPrivate(
    const PutAutoScalingPolicyRequestPrivate &other, PutAutoScalingPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
