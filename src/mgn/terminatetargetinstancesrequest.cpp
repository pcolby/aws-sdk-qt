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

#include "terminatetargetinstancesrequest.h"
#include "terminatetargetinstancesrequest_p.h"
#include "terminatetargetinstancesresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::TerminateTargetInstancesRequest
 * \brief The TerminateTargetInstancesRequest class provides an interface for mgn TerminateTargetInstances requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::terminateTargetInstances
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateTargetInstancesRequest::TerminateTargetInstancesRequest(const TerminateTargetInstancesRequest &other)
    : mgnRequest(new TerminateTargetInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateTargetInstancesRequest object.
 */
TerminateTargetInstancesRequest::TerminateTargetInstancesRequest()
    : mgnRequest(new TerminateTargetInstancesRequestPrivate(mgnRequest::TerminateTargetInstancesAction, this))
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
 * \class QtAws::mgn::TerminateTargetInstancesRequestPrivate
 * \brief The TerminateTargetInstancesRequestPrivate class provides private implementation for TerminateTargetInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a TerminateTargetInstancesRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
TerminateTargetInstancesRequestPrivate::TerminateTargetInstancesRequestPrivate(
    const mgnRequest::Action action, TerminateTargetInstancesRequest * const q)
    : mgnRequestPrivate(action, q)
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
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
