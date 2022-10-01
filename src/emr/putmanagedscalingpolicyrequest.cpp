// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmanagedscalingpolicyrequest.h"
#include "putmanagedscalingpolicyrequest_p.h"
#include "putmanagedscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutManagedScalingPolicyRequest
 * \brief The PutManagedScalingPolicyRequest class provides an interface for Emr PutManagedScalingPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putManagedScalingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutManagedScalingPolicyRequest::PutManagedScalingPolicyRequest(const PutManagedScalingPolicyRequest &other)
    : EmrRequest(new PutManagedScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutManagedScalingPolicyRequest object.
 */
PutManagedScalingPolicyRequest::PutManagedScalingPolicyRequest()
    : EmrRequest(new PutManagedScalingPolicyRequestPrivate(EmrRequest::PutManagedScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutManagedScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutManagedScalingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutManagedScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutManagedScalingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::PutManagedScalingPolicyRequestPrivate
 * \brief The PutManagedScalingPolicyRequestPrivate class provides private implementation for PutManagedScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutManagedScalingPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
PutManagedScalingPolicyRequestPrivate::PutManagedScalingPolicyRequestPrivate(
    const EmrRequest::Action action, PutManagedScalingPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutManagedScalingPolicyRequest
 * class' copy constructor.
 */
PutManagedScalingPolicyRequestPrivate::PutManagedScalingPolicyRequestPrivate(
    const PutManagedScalingPolicyRequestPrivate &other, PutManagedScalingPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
