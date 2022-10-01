// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmanagedscalingpolicyrequest.h"
#include "getmanagedscalingpolicyrequest_p.h"
#include "getmanagedscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetManagedScalingPolicyRequest
 * \brief The GetManagedScalingPolicyRequest class provides an interface for Emr GetManagedScalingPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getManagedScalingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetManagedScalingPolicyRequest::GetManagedScalingPolicyRequest(const GetManagedScalingPolicyRequest &other)
    : EmrRequest(new GetManagedScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetManagedScalingPolicyRequest object.
 */
GetManagedScalingPolicyRequest::GetManagedScalingPolicyRequest()
    : EmrRequest(new GetManagedScalingPolicyRequestPrivate(EmrRequest::GetManagedScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetManagedScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetManagedScalingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetManagedScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetManagedScalingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::GetManagedScalingPolicyRequestPrivate
 * \brief The GetManagedScalingPolicyRequestPrivate class provides private implementation for GetManagedScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetManagedScalingPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
GetManagedScalingPolicyRequestPrivate::GetManagedScalingPolicyRequestPrivate(
    const EmrRequest::Action action, GetManagedScalingPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetManagedScalingPolicyRequest
 * class' copy constructor.
 */
GetManagedScalingPolicyRequestPrivate::GetManagedScalingPolicyRequestPrivate(
    const GetManagedScalingPolicyRequestPrivate &other, GetManagedScalingPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
