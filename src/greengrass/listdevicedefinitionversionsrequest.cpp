// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicedefinitionversionsrequest.h"
#include "listdevicedefinitionversionsrequest_p.h"
#include "listdevicedefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionVersionsRequest
 * \brief The ListDeviceDefinitionVersionsRequest class provides an interface for Greengrass ListDeviceDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeviceDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceDefinitionVersionsRequest::ListDeviceDefinitionVersionsRequest(const ListDeviceDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListDeviceDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceDefinitionVersionsRequest object.
 */
ListDeviceDefinitionVersionsRequest::ListDeviceDefinitionVersionsRequest()
    : GreengrassRequest(new ListDeviceDefinitionVersionsRequestPrivate(GreengrassRequest::ListDeviceDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionVersionsRequestPrivate
 * \brief The ListDeviceDefinitionVersionsRequestPrivate class provides private implementation for ListDeviceDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeviceDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListDeviceDefinitionVersionsRequestPrivate::ListDeviceDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListDeviceDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceDefinitionVersionsRequest
 * class' copy constructor.
 */
ListDeviceDefinitionVersionsRequestPrivate::ListDeviceDefinitionVersionsRequestPrivate(
    const ListDeviceDefinitionVersionsRequestPrivate &other, ListDeviceDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
