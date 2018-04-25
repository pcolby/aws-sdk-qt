/*
    Copyright 2013-2018 Paul Colby

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

#include "addinstancegroupsrequest.h"
#include "addinstancegroupsrequest_p.h"
#include "addinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::AddInstanceGroupsRequest
 * \brief The AddInstanceGroupsRequest class provides an interface for EMR AddInstanceGroups requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::addInstanceGroups
 */

/*!
 * Constructs a copy of \a other.
 */
AddInstanceGroupsRequest::AddInstanceGroupsRequest(const AddInstanceGroupsRequest &other)
    : EmrRequest(new AddInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddInstanceGroupsRequest object.
 */
AddInstanceGroupsRequest::AddInstanceGroupsRequest()
    : EmrRequest(new AddInstanceGroupsRequestPrivate(EmrRequest::AddInstanceGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool AddInstanceGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddInstanceGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new AddInstanceGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::AddInstanceGroupsRequestPrivate
 * \brief The AddInstanceGroupsRequestPrivate class provides private implementation for AddInstanceGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a AddInstanceGroupsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
AddInstanceGroupsRequestPrivate::AddInstanceGroupsRequestPrivate(
    const EmrRequest::Action action, AddInstanceGroupsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddInstanceGroupsRequest
 * class' copy constructor.
 */
AddInstanceGroupsRequestPrivate::AddInstanceGroupsRequestPrivate(
    const AddInstanceGroupsRequestPrivate &other, AddInstanceGroupsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
