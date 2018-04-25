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

#include "createcoredefinitionversionrequest.h"
#include "createcoredefinitionversionrequest_p.h"
#include "createcoredefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionRequest
 * \brief The CreateCoreDefinitionVersionRequest class provides an interface for Greengrass CreateCoreDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createCoreDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCoreDefinitionVersionRequest::CreateCoreDefinitionVersionRequest(const CreateCoreDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateCoreDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCoreDefinitionVersionRequest object.
 */
CreateCoreDefinitionVersionRequest::CreateCoreDefinitionVersionRequest()
    : GreengrassRequest(new CreateCoreDefinitionVersionRequestPrivate(GreengrassRequest::CreateCoreDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCoreDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCoreDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCoreDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCoreDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionRequestPrivate
 * \brief The CreateCoreDefinitionVersionRequestPrivate class provides private implementation for CreateCoreDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateCoreDefinitionVersionRequestPrivate::CreateCoreDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCoreDefinitionVersionRequest
 * class' copy constructor.
 */
CreateCoreDefinitionVersionRequestPrivate::CreateCoreDefinitionVersionRequestPrivate(
    const CreateCoreDefinitionVersionRequestPrivate &other, CreateCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
