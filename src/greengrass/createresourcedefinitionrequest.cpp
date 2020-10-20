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

#include "createresourcedefinitionrequest.h"
#include "createresourcedefinitionrequest_p.h"
#include "createresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionRequest
 * \brief The CreateResourceDefinitionRequest class provides an interface for Greengrass CreateResourceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createResourceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceDefinitionRequest::CreateResourceDefinitionRequest(const CreateResourceDefinitionRequest &other)
    : GreengrassRequest(new CreateResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceDefinitionRequest object.
 */
CreateResourceDefinitionRequest::CreateResourceDefinitionRequest()
    : GreengrassRequest(new CreateResourceDefinitionRequestPrivate(GreengrassRequest::CreateResourceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionRequestPrivate
 * \brief The CreateResourceDefinitionRequestPrivate class provides private implementation for CreateResourceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateResourceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateResourceDefinitionRequestPrivate::CreateResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceDefinitionRequest
 * class' copy constructor.
 */
CreateResourceDefinitionRequestPrivate::CreateResourceDefinitionRequestPrivate(
    const CreateResourceDefinitionRequestPrivate &other, CreateResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
