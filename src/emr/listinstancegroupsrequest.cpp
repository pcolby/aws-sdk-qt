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

#include "listinstancegroupsrequest.h"
#include "listinstancegroupsrequest_p.h"
#include "listinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListInstanceGroupsRequest
 * \brief The ListInstanceGroupsRequest class provides an interface for Emr ListInstanceGroups requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listInstanceGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceGroupsRequest::ListInstanceGroupsRequest(const ListInstanceGroupsRequest &other)
    : EmrRequest(new ListInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceGroupsRequest object.
 */
ListInstanceGroupsRequest::ListInstanceGroupsRequest()
    : EmrRequest(new ListInstanceGroupsRequestPrivate(EmrRequest::ListInstanceGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListInstanceGroupsRequestPrivate
 * \brief The ListInstanceGroupsRequestPrivate class provides private implementation for ListInstanceGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListInstanceGroupsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListInstanceGroupsRequestPrivate::ListInstanceGroupsRequestPrivate(
    const EmrRequest::Action action, ListInstanceGroupsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceGroupsRequest
 * class' copy constructor.
 */
ListInstanceGroupsRequestPrivate::ListInstanceGroupsRequestPrivate(
    const ListInstanceGroupsRequestPrivate &other, ListInstanceGroupsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
