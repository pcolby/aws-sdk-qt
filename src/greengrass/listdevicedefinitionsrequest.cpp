// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicedefinitionsrequest.h"
#include "listdevicedefinitionsrequest_p.h"
#include "listdevicedefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsRequest
 * \brief The ListDeviceDefinitionsRequest class provides an interface for Greengrass ListDeviceDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeviceDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceDefinitionsRequest::ListDeviceDefinitionsRequest(const ListDeviceDefinitionsRequest &other)
    : GreengrassRequest(new ListDeviceDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceDefinitionsRequest object.
 */
ListDeviceDefinitionsRequest::ListDeviceDefinitionsRequest()
    : GreengrassRequest(new ListDeviceDefinitionsRequestPrivate(GreengrassRequest::ListDeviceDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsRequestPrivate
 * \brief The ListDeviceDefinitionsRequestPrivate class provides private implementation for ListDeviceDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeviceDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListDeviceDefinitionsRequestPrivate::ListDeviceDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListDeviceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceDefinitionsRequest
 * class' copy constructor.
 */
ListDeviceDefinitionsRequestPrivate::ListDeviceDefinitionsRequestPrivate(
    const ListDeviceDefinitionsRequestPrivate &other, ListDeviceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
