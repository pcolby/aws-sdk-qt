// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoredefinitionversionsrequest.h"
#include "listcoredefinitionversionsrequest_p.h"
#include "listcoredefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsRequest
 * \brief The ListCoreDefinitionVersionsRequest class provides an interface for Greengrass ListCoreDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listCoreDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoreDefinitionVersionsRequest::ListCoreDefinitionVersionsRequest(const ListCoreDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListCoreDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoreDefinitionVersionsRequest object.
 */
ListCoreDefinitionVersionsRequest::ListCoreDefinitionVersionsRequest()
    : GreengrassRequest(new ListCoreDefinitionVersionsRequestPrivate(GreengrassRequest::ListCoreDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoreDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoreDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoreDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCoreDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsRequestPrivate
 * \brief The ListCoreDefinitionVersionsRequestPrivate class provides private implementation for ListCoreDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListCoreDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListCoreDefinitionVersionsRequestPrivate::ListCoreDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListCoreDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoreDefinitionVersionsRequest
 * class' copy constructor.
 */
ListCoreDefinitionVersionsRequestPrivate::ListCoreDefinitionVersionsRequestPrivate(
    const ListCoreDefinitionVersionsRequestPrivate &other, ListCoreDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
