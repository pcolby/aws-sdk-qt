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

#include "putautoterminationpolicyrequest.h"
#include "putautoterminationpolicyrequest_p.h"
#include "putautoterminationpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutAutoTerminationPolicyRequest
 * \brief The PutAutoTerminationPolicyRequest class provides an interface for Emr PutAutoTerminationPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putAutoTerminationPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutAutoTerminationPolicyRequest::PutAutoTerminationPolicyRequest(const PutAutoTerminationPolicyRequest &other)
    : EmrRequest(new PutAutoTerminationPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAutoTerminationPolicyRequest object.
 */
PutAutoTerminationPolicyRequest::PutAutoTerminationPolicyRequest()
    : EmrRequest(new PutAutoTerminationPolicyRequestPrivate(EmrRequest::PutAutoTerminationPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutAutoTerminationPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAutoTerminationPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAutoTerminationPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutAutoTerminationPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::PutAutoTerminationPolicyRequestPrivate
 * \brief The PutAutoTerminationPolicyRequestPrivate class provides private implementation for PutAutoTerminationPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutAutoTerminationPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
PutAutoTerminationPolicyRequestPrivate::PutAutoTerminationPolicyRequestPrivate(
    const EmrRequest::Action action, PutAutoTerminationPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAutoTerminationPolicyRequest
 * class' copy constructor.
 */
PutAutoTerminationPolicyRequestPrivate::PutAutoTerminationPolicyRequestPrivate(
    const PutAutoTerminationPolicyRequestPrivate &other, PutAutoTerminationPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
