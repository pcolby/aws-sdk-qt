/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletedevicedefinitionrequest.h"
#include "deletedevicedefinitionrequest_p.h"
#include "deletedevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteDeviceDefinitionRequest
 * \brief The DeleteDeviceDefinitionRequest class provides an interface for Greengrass DeleteDeviceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::deleteDeviceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeviceDefinitionRequest::DeleteDeviceDefinitionRequest(const DeleteDeviceDefinitionRequest &other)
    : GreengrassRequest(new DeleteDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeviceDefinitionRequest object.
 */
DeleteDeviceDefinitionRequest::DeleteDeviceDefinitionRequest()
    : GreengrassRequest(new DeleteDeviceDefinitionRequestPrivate(GreengrassRequest::DeleteDeviceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeviceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeviceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteDeviceDefinitionRequestPrivate
 * \brief The DeleteDeviceDefinitionRequestPrivate class provides private implementation for DeleteDeviceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 *
 * Constructs a DeleteDeviceDefinitionRequestPrivate object for Greengrass \a action with,
 * public implementation \a q.
 */
DeleteDeviceDefinitionRequestPrivate::DeleteDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceDefinitionRequest
 * class' copy constructor.
 */
DeleteDeviceDefinitionRequestPrivate::DeleteDeviceDefinitionRequestPrivate(
    const DeleteDeviceDefinitionRequestPrivate &other, DeleteDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
