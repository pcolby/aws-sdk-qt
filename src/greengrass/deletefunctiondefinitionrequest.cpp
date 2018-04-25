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

#include "deletefunctiondefinitionrequest.h"
#include "deletefunctiondefinitionrequest_p.h"
#include "deletefunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionRequest
 * \brief The DeleteFunctionDefinitionRequest class provides an interface for Greengrass DeleteFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::deleteFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFunctionDefinitionRequest::DeleteFunctionDefinitionRequest(const DeleteFunctionDefinitionRequest &other)
    : GreengrassRequest(new DeleteFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFunctionDefinitionRequest object.
 */
DeleteFunctionDefinitionRequest::DeleteFunctionDefinitionRequest()
    : GreengrassRequest(new DeleteFunctionDefinitionRequestPrivate(GreengrassRequest::DeleteFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionRequestPrivate
 * \brief The DeleteFunctionDefinitionRequestPrivate class provides private implementation for DeleteFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteFunctionDefinitionRequestPrivate::DeleteFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionDefinitionRequest
 * class' copy constructor.
 */
DeleteFunctionDefinitionRequestPrivate::DeleteFunctionDefinitionRequestPrivate(
    const DeleteFunctionDefinitionRequestPrivate &other, DeleteFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
