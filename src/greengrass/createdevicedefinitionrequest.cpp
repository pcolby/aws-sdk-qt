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

#include "createdevicedefinitionrequest.h"
#include "createdevicedefinitionrequest_p.h"
#include "createdevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionRequest
 * \brief The CreateDeviceDefinitionRequest class provides an interface for Greengrass CreateDeviceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createDeviceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeviceDefinitionRequest::CreateDeviceDefinitionRequest(const CreateDeviceDefinitionRequest &other)
    : GreengrassRequest(new CreateDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeviceDefinitionRequest object.
 */
CreateDeviceDefinitionRequest::CreateDeviceDefinitionRequest()
    : GreengrassRequest(new CreateDeviceDefinitionRequestPrivate(GreengrassRequest::CreateDeviceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeviceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeviceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionRequestPrivate
 * \brief The CreateDeviceDefinitionRequestPrivate class provides private implementation for CreateDeviceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateDeviceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateDeviceDefinitionRequestPrivate::CreateDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceDefinitionRequest
 * class' copy constructor.
 */
CreateDeviceDefinitionRequestPrivate::CreateDeviceDefinitionRequestPrivate(
    const CreateDeviceDefinitionRequestPrivate &other, CreateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
