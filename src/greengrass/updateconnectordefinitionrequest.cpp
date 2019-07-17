/*
    Copyright 2013-2019 Paul Colby

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

#include "updateconnectordefinitionrequest.h"
#include "updateconnectordefinitionrequest_p.h"
#include "updateconnectordefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionRequest
 * \brief The UpdateConnectorDefinitionRequest class provides an interface for Greengrass UpdateConnectorDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateConnectorDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectorDefinitionRequest::UpdateConnectorDefinitionRequest(const UpdateConnectorDefinitionRequest &other)
    : GreengrassRequest(new UpdateConnectorDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectorDefinitionRequest object.
 */
UpdateConnectorDefinitionRequest::UpdateConnectorDefinitionRequest()
    : GreengrassRequest(new UpdateConnectorDefinitionRequestPrivate(GreengrassRequest::UpdateConnectorDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectorDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectorDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectorDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectorDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionRequestPrivate
 * \brief The UpdateConnectorDefinitionRequestPrivate class provides private implementation for UpdateConnectorDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateConnectorDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateConnectorDefinitionRequestPrivate::UpdateConnectorDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectorDefinitionRequest
 * class' copy constructor.
 */
UpdateConnectorDefinitionRequestPrivate::UpdateConnectorDefinitionRequestPrivate(
    const UpdateConnectorDefinitionRequestPrivate &other, UpdateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
