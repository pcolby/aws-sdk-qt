// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupversionsrequest.h"
#include "listgroupversionsrequest_p.h"
#include "listgroupversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupVersionsRequest
 * \brief The ListGroupVersionsRequest class provides an interface for Greengrass ListGroupVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listGroupVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupVersionsRequest::ListGroupVersionsRequest(const ListGroupVersionsRequest &other)
    : GreengrassRequest(new ListGroupVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupVersionsRequest object.
 */
ListGroupVersionsRequest::ListGroupVersionsRequest()
    : GreengrassRequest(new ListGroupVersionsRequestPrivate(GreengrassRequest::ListGroupVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListGroupVersionsRequestPrivate
 * \brief The ListGroupVersionsRequestPrivate class provides private implementation for ListGroupVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListGroupVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListGroupVersionsRequestPrivate::ListGroupVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListGroupVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupVersionsRequest
 * class' copy constructor.
 */
ListGroupVersionsRequestPrivate::ListGroupVersionsRequestPrivate(
    const ListGroupVersionsRequestPrivate &other, ListGroupVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
