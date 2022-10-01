// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminatetargetinstancesrequest.h"
#include "terminatetargetinstancesrequest_p.h"
#include "terminatetargetinstancesresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::TerminateTargetInstancesRequest
 * \brief The TerminateTargetInstancesRequest class provides an interface for Mgn TerminateTargetInstances requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::terminateTargetInstances
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateTargetInstancesRequest::TerminateTargetInstancesRequest(const TerminateTargetInstancesRequest &other)
    : MgnRequest(new TerminateTargetInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateTargetInstancesRequest object.
 */
TerminateTargetInstancesRequest::TerminateTargetInstancesRequest()
    : MgnRequest(new TerminateTargetInstancesRequestPrivate(MgnRequest::TerminateTargetInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateTargetInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateTargetInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateTargetInstancesRequest::response(QNetworkReply * const reply) const
{
    return new TerminateTargetInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::TerminateTargetInstancesRequestPrivate
 * \brief The TerminateTargetInstancesRequestPrivate class provides private implementation for TerminateTargetInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a TerminateTargetInstancesRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
TerminateTargetInstancesRequestPrivate::TerminateTargetInstancesRequestPrivate(
    const MgnRequest::Action action, TerminateTargetInstancesRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateTargetInstancesRequest
 * class' copy constructor.
 */
TerminateTargetInstancesRequestPrivate::TerminateTargetInstancesRequestPrivate(
    const TerminateTargetInstancesRequestPrivate &other, TerminateTargetInstancesRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
