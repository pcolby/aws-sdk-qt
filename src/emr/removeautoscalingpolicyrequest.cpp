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
