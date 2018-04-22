/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putautoscalingpolicyrequest.h"
#include "putautoscalingpolicyrequest_p.h"
#include "putautoscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::PutAutoScalingPolicyRequest
 * \brief The PutAutoScalingPolicyRequest class provides an interface for EMR PutAutoScalingPolicy requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
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
 * \class QtAws::EMR::PutAutoScalingPolicyRequestPrivate
 * \brief The PutAutoScalingPolicyRequestPrivate class provides private implementation for PutAutoScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
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

} // namespace EMR
} // namespace QtAws
