// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminaterecoveryinstancesrequest.h"
#include "terminaterecoveryinstancesrequest_p.h"
#include "terminaterecoveryinstancesresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::TerminateRecoveryInstancesRequest
 * \brief The TerminateRecoveryInstancesRequest class provides an interface for Drs TerminateRecoveryInstances requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::terminateRecoveryInstances
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateRecoveryInstancesRequest::TerminateRecoveryInstancesRequest(const TerminateRecoveryInstancesRequest &other)
    : DrsRequest(new TerminateRecoveryInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateRecoveryInstancesRequest object.
 */
TerminateRecoveryInstancesRequest::TerminateRecoveryInstancesRequest()
    : DrsRequest(new TerminateRecoveryInstancesRequestPrivate(DrsRequest::TerminateRecoveryInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateRecoveryInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateRecoveryInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateRecoveryInstancesRequest::response(QNetworkReply * const reply) const
{
    return new TerminateRecoveryInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::TerminateRecoveryInstancesRequestPrivate
 * \brief The TerminateRecoveryInstancesRequestPrivate class provides private implementation for TerminateRecoveryInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a TerminateRecoveryInstancesRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
TerminateRecoveryInstancesRequestPrivate::TerminateRecoveryInstancesRequestPrivate(
    const DrsRequest::Action action, TerminateRecoveryInstancesRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateRecoveryInstancesRequest
 * class' copy constructor.
 */
TerminateRecoveryInstancesRequestPrivate::TerminateRecoveryInstancesRequestPrivate(
    const TerminateRecoveryInstancesRequestPrivate &other, TerminateRecoveryInstancesRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
