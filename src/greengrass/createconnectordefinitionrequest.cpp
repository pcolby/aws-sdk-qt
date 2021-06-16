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

#include "createconnectordefinitionrequest.h"
#include "createconnectordefinitionrequest_p.h"
#include "createconnectordefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionRequest
 * \brief The CreateConnectorDefinitionRequest class provides an interface for Greengrass CreateConnectorDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createConnectorDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectorDefinitionRequest::CreateConnectorDefinitionRequest(const CreateConnectorDefinitionRequest &other)
    : GreengrassRequest(new CreateConnectorDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectorDefinitionRequest object.
 */
CreateConnectorDefinitionRequest::CreateConnectorDefinitionRequest()
    : GreengrassRequest(new CreateConnectorDefinitionRequestPrivate(GreengrassRequest::CreateConnectorDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectorDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectorDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectorDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectorDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionRequestPrivate
 * \brief The CreateConnectorDefinitionRequestPrivate class provides private implementation for CreateConnectorDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateConnectorDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateConnectorDefinitionRequestPrivate::CreateConnectorDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectorDefinitionRequest
 * class' copy constructor.
 */
CreateConnectorDefinitionRequestPrivate::CreateConnectorDefinitionRequestPrivate(
    const CreateConnectorDefinitionRequestPrivate &other, CreateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
