/*
    Copyright 2013-2018 Paul Colby

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

#include "getdevicedefinitionrequest.h"
#include "getdevicedefinitionrequest_p.h"
#include "getdevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionRequest
 * \brief The GetDeviceDefinitionRequest class provides an interface for Greengrass GetDeviceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getDeviceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceDefinitionRequest::GetDeviceDefinitionRequest(const GetDeviceDefinitionRequest &other)
    : GreengrassRequest(new GetDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceDefinitionRequest object.
 */
GetDeviceDefinitionRequest::GetDeviceDefinitionRequest()
    : GreengrassRequest(new GetDeviceDefinitionRequestPrivate(GreengrassRequest::GetDeviceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionRequestPrivate
 * \brief The GetDeviceDefinitionRequestPrivate class provides private implementation for GetDeviceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeviceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetDeviceDefinitionRequestPrivate::GetDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceDefinitionRequest
 * class' copy constructor.
 */
GetDeviceDefinitionRequestPrivate::GetDeviceDefinitionRequestPrivate(
    const GetDeviceDefinitionRequestPrivate &other, GetDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
