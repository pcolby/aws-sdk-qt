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

#include "createfunctiondefinitionrequest.h"
#include "createfunctiondefinitionrequest_p.h"
#include "createfunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionRequest
 * \brief The CreateFunctionDefinitionRequest class provides an interface for Greengrass CreateFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFunctionDefinitionRequest::CreateFunctionDefinitionRequest(const CreateFunctionDefinitionRequest &other)
    : GreengrassRequest(new CreateFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFunctionDefinitionRequest object.
 */
CreateFunctionDefinitionRequest::CreateFunctionDefinitionRequest()
    : GreengrassRequest(new CreateFunctionDefinitionRequestPrivate(GreengrassRequest::CreateFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionRequestPrivate
 * \brief The CreateFunctionDefinitionRequestPrivate class provides private implementation for CreateFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateFunctionDefinitionRequestPrivate::CreateFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionDefinitionRequest
 * class' copy constructor.
 */
CreateFunctionDefinitionRequestPrivate::CreateFunctionDefinitionRequestPrivate(
    const CreateFunctionDefinitionRequestPrivate &other, CreateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
