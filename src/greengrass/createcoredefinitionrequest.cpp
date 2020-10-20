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

#include "createcoredefinitionrequest.h"
#include "createcoredefinitionrequest_p.h"
#include "createcoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionRequest
 * \brief The CreateCoreDefinitionRequest class provides an interface for Greengrass CreateCoreDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createCoreDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCoreDefinitionRequest::CreateCoreDefinitionRequest(const CreateCoreDefinitionRequest &other)
    : GreengrassRequest(new CreateCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCoreDefinitionRequest object.
 */
CreateCoreDefinitionRequest::CreateCoreDefinitionRequest()
    : GreengrassRequest(new CreateCoreDefinitionRequestPrivate(GreengrassRequest::CreateCoreDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCoreDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCoreDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCoreDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionRequestPrivate
 * \brief The CreateCoreDefinitionRequestPrivate class provides private implementation for CreateCoreDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateCoreDefinitionRequestPrivate::CreateCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCoreDefinitionRequest
 * class' copy constructor.
 */
CreateCoreDefinitionRequestPrivate::CreateCoreDefinitionRequestPrivate(
    const CreateCoreDefinitionRequestPrivate &other, CreateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
