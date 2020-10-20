/*
    Copyright 2013-2020 Paul Colby

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

#include "getdevicedefinitionversionrequest.h"
#include "getdevicedefinitionversionrequest_p.h"
#include "getdevicedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionVersionRequest
 * \brief The GetDeviceDefinitionVersionRequest class provides an interface for Greengrass GetDeviceDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getDeviceDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceDefinitionVersionRequest::GetDeviceDefinitionVersionRequest(const GetDeviceDefinitionVersionRequest &other)
    : GreengrassRequest(new GetDeviceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceDefinitionVersionRequest object.
 */
GetDeviceDefinitionVersionRequest::GetDeviceDefinitionVersionRequest()
    : GreengrassRequest(new GetDeviceDefinitionVersionRequestPrivate(GreengrassRequest::GetDeviceDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionVersionRequestPrivate
 * \brief The GetDeviceDefinitionVersionRequestPrivate class provides private implementation for GetDeviceDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeviceDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetDeviceDefinitionVersionRequestPrivate::GetDeviceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetDeviceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceDefinitionVersionRequest
 * class' copy constructor.
 */
GetDeviceDefinitionVersionRequestPrivate::GetDeviceDefinitionVersionRequestPrivate(
    const GetDeviceDefinitionVersionRequestPrivate &other, GetDeviceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
