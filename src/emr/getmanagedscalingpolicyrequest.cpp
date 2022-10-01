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
