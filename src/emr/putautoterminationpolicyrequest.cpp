// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
