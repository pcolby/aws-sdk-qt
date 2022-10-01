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

#include "getautoterminationpolicyrequest.h"
#include "getautoterminationpolicyrequest_p.h"
#include "getautoterminationpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetAutoTerminationPolicyRequest
 * \brief The GetAutoTerminationPolicyRequest class provides an interface for Emr GetAutoTerminationPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getAutoTerminationPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetAutoTerminationPolicyRequest::GetAutoTerminationPolicyRequest(const GetAutoTerminationPolicyRequest &other)
    : EmrRequest(new GetAutoTerminationPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAutoTerminationPolicyRequest object.
 */
GetAutoTerminationPolicyRequest::GetAutoTerminationPolicyRequest()
    : EmrRequest(new GetAutoTerminationPolicyRequestPrivate(EmrRequest::GetAutoTerminationPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetAutoTerminationPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAutoTerminationPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAutoTerminationPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetAutoTerminationPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::GetAutoTerminationPolicyRequestPrivate
 * \brief The GetAutoTerminationPolicyRequestPrivate class provides private implementation for GetAutoTerminationPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetAutoTerminationPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
GetAutoTerminationPolicyRequestPrivate::GetAutoTerminationPolicyRequestPrivate(
    const EmrRequest::Action action, GetAutoTerminationPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAutoTerminationPolicyRequest
 * class' copy constructor.
 */
GetAutoTerminationPolicyRequestPrivate::GetAutoTerminationPolicyRequestPrivate(
    const GetAutoTerminationPolicyRequestPrivate &other, GetAutoTerminationPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
