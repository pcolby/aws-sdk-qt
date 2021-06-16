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

#include "modifyinstancegroupsrequest.h"
#include "modifyinstancegroupsrequest_p.h"
#include "modifyinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ModifyInstanceGroupsRequest
 * \brief The ModifyInstanceGroupsRequest class provides an interface for EMR ModifyInstanceGroups requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::modifyInstanceGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest(const ModifyInstanceGroupsRequest &other)
    : EmrRequest(new ModifyInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyInstanceGroupsRequest object.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest()
    : EmrRequest(new ModifyInstanceGroupsRequestPrivate(EmrRequest::ModifyInstanceGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyInstanceGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyInstanceGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::ModifyInstanceGroupsRequestPrivate
 * \brief The ModifyInstanceGroupsRequestPrivate class provides private implementation for ModifyInstanceGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ModifyInstanceGroupsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const EmrRequest::Action action, ModifyInstanceGroupsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceGroupsRequest
 * class' copy constructor.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const ModifyInstanceGroupsRequestPrivate &other, ModifyInstanceGroupsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
