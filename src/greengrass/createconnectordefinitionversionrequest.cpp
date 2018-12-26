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

#include "createconnectordefinitionversionrequest.h"
#include "createconnectordefinitionversionrequest_p.h"
#include "createconnectordefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionRequest
 * \brief The CreateConnectorDefinitionVersionRequest class provides an interface for Greengrass CreateConnectorDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createConnectorDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectorDefinitionVersionRequest::CreateConnectorDefinitionVersionRequest(const CreateConnectorDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateConnectorDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectorDefinitionVersionRequest object.
 */
CreateConnectorDefinitionVersionRequest::CreateConnectorDefinitionVersionRequest()
    : GreengrassRequest(new CreateConnectorDefinitionVersionRequestPrivate(GreengrassRequest::CreateConnectorDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectorDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectorDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectorDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectorDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionRequestPrivate
 * \brief The CreateConnectorDefinitionVersionRequestPrivate class provides private implementation for CreateConnectorDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateConnectorDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateConnectorDefinitionVersionRequestPrivate::CreateConnectorDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateConnectorDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectorDefinitionVersionRequest
 * class' copy constructor.
 */
CreateConnectorDefinitionVersionRequestPrivate::CreateConnectorDefinitionVersionRequestPrivate(
    const CreateConnectorDefinitionVersionRequestPrivate &other, CreateConnectorDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
