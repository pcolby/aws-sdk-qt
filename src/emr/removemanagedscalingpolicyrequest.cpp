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

#include "removemanagedscalingpolicyrequest.h"
#include "removemanagedscalingpolicyrequest_p.h"
#include "removemanagedscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::RemoveManagedScalingPolicyRequest
 * \brief The RemoveManagedScalingPolicyRequest class provides an interface for EMR RemoveManagedScalingPolicy requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
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
 * \class QtAws::EMR::RemoveManagedScalingPolicyRequestPrivate
 * \brief The RemoveManagedScalingPolicyRequestPrivate class provides private implementation for RemoveManagedScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
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

} // namespace EMR
} // namespace QtAws
