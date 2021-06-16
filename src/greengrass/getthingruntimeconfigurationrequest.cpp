/*
    Copyright 2013-2021 Paul Colby

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

#include "getthingruntimeconfigurationrequest.h"
#include "getthingruntimeconfigurationrequest_p.h"
#include "getthingruntimeconfigurationresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationRequest
 * \brief The GetThingRuntimeConfigurationRequest class provides an interface for Greengrass GetThingRuntimeConfiguration requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getThingRuntimeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetThingRuntimeConfigurationRequest::GetThingRuntimeConfigurationRequest(const GetThingRuntimeConfigurationRequest &other)
    : GreengrassRequest(new GetThingRuntimeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetThingRuntimeConfigurationRequest object.
 */
GetThingRuntimeConfigurationRequest::GetThingRuntimeConfigurationRequest()
    : GreengrassRequest(new GetThingRuntimeConfigurationRequestPrivate(GreengrassRequest::GetThingRuntimeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetThingRuntimeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetThingRuntimeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThingRuntimeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetThingRuntimeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationRequestPrivate
 * \brief The GetThingRuntimeConfigurationRequestPrivate class provides private implementation for GetThingRuntimeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetThingRuntimeConfigurationRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetThingRuntimeConfigurationRequestPrivate::GetThingRuntimeConfigurationRequestPrivate(
    const GreengrassRequest::Action action, GetThingRuntimeConfigurationRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetThingRuntimeConfigurationRequest
 * class' copy constructor.
 */
GetThingRuntimeConfigurationRequestPrivate::GetThingRuntimeConfigurationRequestPrivate(
    const GetThingRuntimeConfigurationRequestPrivate &other, GetThingRuntimeConfigurationRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
