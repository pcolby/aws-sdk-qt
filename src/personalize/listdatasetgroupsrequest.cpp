/*
    Copyright 2013-2019 Paul Colby

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

#include "listdatasetgroupsrequest.h"
#include "listdatasetgroupsrequest_p.h"
#include "listdatasetgroupsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetGroupsRequest
 * \brief The ListDatasetGroupsRequest class provides an interface for Personalize ListDatasetGroups requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetGroupsRequest::ListDatasetGroupsRequest(const ListDatasetGroupsRequest &other)
    : PersonalizeRequest(new ListDatasetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetGroupsRequest object.
 */
ListDatasetGroupsRequest::ListDatasetGroupsRequest()
    : PersonalizeRequest(new ListDatasetGroupsRequestPrivate(PersonalizeRequest::ListDatasetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListDatasetGroupsRequestPrivate
 * \brief The ListDatasetGroupsRequestPrivate class provides private implementation for ListDatasetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetGroupsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListDatasetGroupsRequestPrivate::ListDatasetGroupsRequestPrivate(
    const PersonalizeRequest::Action action, ListDatasetGroupsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetGroupsRequest
 * class' copy constructor.
 */
ListDatasetGroupsRequestPrivate::ListDatasetGroupsRequestPrivate(
    const ListDatasetGroupsRequestPrivate &other, ListDatasetGroupsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
