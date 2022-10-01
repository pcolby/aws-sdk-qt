// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
