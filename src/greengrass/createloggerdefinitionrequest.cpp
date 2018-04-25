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

#include "createloggerdefinitionrequest.h"
#include "createloggerdefinitionrequest_p.h"
#include "createloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionRequest
 * \brief The CreateLoggerDefinitionRequest class provides an interface for Greengrass CreateLoggerDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createLoggerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLoggerDefinitionRequest::CreateLoggerDefinitionRequest(const CreateLoggerDefinitionRequest &other)
    : GreengrassRequest(new CreateLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLoggerDefinitionRequest object.
 */
CreateLoggerDefinitionRequest::CreateLoggerDefinitionRequest()
    : GreengrassRequest(new CreateLoggerDefinitionRequestPrivate(GreengrassRequest::CreateLoggerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLoggerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLoggerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoggerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionRequestPrivate
 * \brief The CreateLoggerDefinitionRequestPrivate class provides private implementation for CreateLoggerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateLoggerDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateLoggerDefinitionRequestPrivate::CreateLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLoggerDefinitionRequest
 * class' copy constructor.
 */
CreateLoggerDefinitionRequestPrivate::CreateLoggerDefinitionRequestPrivate(
    const CreateLoggerDefinitionRequestPrivate &other, CreateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
