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

#include "putmanagedscalingpolicyrequest.h"
#include "putmanagedscalingpolicyrequest_p.h"
#include "putmanagedscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::PutManagedScalingPolicyRequest
 * \brief The PutManagedScalingPolicyRequest class provides an interface for EMR PutManagedScalingPolicy requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
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
 * \class QtAws::EMR::PutManagedScalingPolicyRequestPrivate
 * \brief The PutManagedScalingPolicyRequestPrivate class provides private implementation for PutManagedScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
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

} // namespace EMR
} // namespace QtAws
