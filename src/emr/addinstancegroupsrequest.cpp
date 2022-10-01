// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addinstancegroupsrequest.h"
#include "addinstancegroupsrequest_p.h"
#include "addinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::AddInstanceGroupsRequest
 * \brief The AddInstanceGroupsRequest class provides an interface for Emr AddInstanceGroups requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
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
 * \class QtAws::Emr::AddInstanceGroupsRequestPrivate
 * \brief The AddInstanceGroupsRequestPrivate class provides private implementation for AddInstanceGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
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

} // namespace Emr
} // namespace QtAws
