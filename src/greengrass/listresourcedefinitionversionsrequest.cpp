// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcedefinitionversionsrequest.h"
#include "listresourcedefinitionversionsrequest_p.h"
#include "listresourcedefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionVersionsRequest
 * \brief The ListResourceDefinitionVersionsRequest class provides an interface for Greengrass ListResourceDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listResourceDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceDefinitionVersionsRequest::ListResourceDefinitionVersionsRequest(const ListResourceDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListResourceDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceDefinitionVersionsRequest object.
 */
ListResourceDefinitionVersionsRequest::ListResourceDefinitionVersionsRequest()
    : GreengrassRequest(new ListResourceDefinitionVersionsRequestPrivate(GreengrassRequest::ListResourceDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionVersionsRequestPrivate
 * \brief The ListResourceDefinitionVersionsRequestPrivate class provides private implementation for ListResourceDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListResourceDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListResourceDefinitionVersionsRequestPrivate::ListResourceDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListResourceDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceDefinitionVersionsRequest
 * class' copy constructor.
 */
ListResourceDefinitionVersionsRequestPrivate::ListResourceDefinitionVersionsRequestPrivate(
    const ListResourceDefinitionVersionsRequestPrivate &other, ListResourceDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
