// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsrequest.h"
#include "listgroupsrequest_p.h"
#include "listgroupsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupsRequest
 * \brief The ListGroupsRequest class provides an interface for Greengrass ListGroups requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupsRequest::ListGroupsRequest(const ListGroupsRequest &other)
    : GreengrassRequest(new ListGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupsRequest object.
 */
ListGroupsRequest::ListGroupsRequest()
    : GreengrassRequest(new ListGroupsRequestPrivate(GreengrassRequest::ListGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListGroupsRequestPrivate
 * \brief The ListGroupsRequestPrivate class provides private implementation for ListGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListGroupsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const GreengrassRequest::Action action, ListGroupsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsRequest
 * class' copy constructor.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const ListGroupsRequestPrivate &other, ListGroupsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
