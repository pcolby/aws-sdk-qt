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

#include "deleteresourcedefinitionrequest.h"
#include "deleteresourcedefinitionrequest_p.h"
#include "deleteresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteResourceDefinitionRequest
 * \brief The DeleteResourceDefinitionRequest class provides an interface for Greengrass DeleteResourceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteResourceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceDefinitionRequest::DeleteResourceDefinitionRequest(const DeleteResourceDefinitionRequest &other)
    : GreengrassRequest(new DeleteResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceDefinitionRequest object.
 */
DeleteResourceDefinitionRequest::DeleteResourceDefinitionRequest()
    : GreengrassRequest(new DeleteResourceDefinitionRequestPrivate(GreengrassRequest::DeleteResourceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteResourceDefinitionRequestPrivate
 * \brief The DeleteResourceDefinitionRequestPrivate class provides private implementation for DeleteResourceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteResourceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteResourceDefinitionRequestPrivate::DeleteResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceDefinitionRequest
 * class' copy constructor.
 */
DeleteResourceDefinitionRequestPrivate::DeleteResourceDefinitionRequestPrivate(
    const DeleteResourceDefinitionRequestPrivate &other, DeleteResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
