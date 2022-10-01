// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
