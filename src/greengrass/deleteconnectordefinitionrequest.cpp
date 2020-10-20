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

#include "deleteconnectordefinitionrequest.h"
#include "deleteconnectordefinitionrequest_p.h"
#include "deleteconnectordefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteConnectorDefinitionRequest
 * \brief The DeleteConnectorDefinitionRequest class provides an interface for Greengrass DeleteConnectorDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteConnectorDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectorDefinitionRequest::DeleteConnectorDefinitionRequest(const DeleteConnectorDefinitionRequest &other)
    : GreengrassRequest(new DeleteConnectorDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectorDefinitionRequest object.
 */
DeleteConnectorDefinitionRequest::DeleteConnectorDefinitionRequest()
    : GreengrassRequest(new DeleteConnectorDefinitionRequestPrivate(GreengrassRequest::DeleteConnectorDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectorDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectorDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectorDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectorDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteConnectorDefinitionRequestPrivate
 * \brief The DeleteConnectorDefinitionRequestPrivate class provides private implementation for DeleteConnectorDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteConnectorDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteConnectorDefinitionRequestPrivate::DeleteConnectorDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectorDefinitionRequest
 * class' copy constructor.
 */
DeleteConnectorDefinitionRequestPrivate::DeleteConnectorDefinitionRequestPrivate(
    const DeleteConnectorDefinitionRequestPrivate &other, DeleteConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
