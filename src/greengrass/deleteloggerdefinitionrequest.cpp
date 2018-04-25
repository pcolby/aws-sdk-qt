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

#include "deleteloggerdefinitionrequest.h"
#include "deleteloggerdefinitionrequest_p.h"
#include "deleteloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteLoggerDefinitionRequest
 * \brief The DeleteLoggerDefinitionRequest class provides an interface for Greengrass DeleteLoggerDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::deleteLoggerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLoggerDefinitionRequest::DeleteLoggerDefinitionRequest(const DeleteLoggerDefinitionRequest &other)
    : GreengrassRequest(new DeleteLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLoggerDefinitionRequest object.
 */
DeleteLoggerDefinitionRequest::DeleteLoggerDefinitionRequest()
    : GreengrassRequest(new DeleteLoggerDefinitionRequestPrivate(GreengrassRequest::DeleteLoggerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLoggerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLoggerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoggerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteLoggerDefinitionRequestPrivate
 * \brief The DeleteLoggerDefinitionRequestPrivate class provides private implementation for DeleteLoggerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteLoggerDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteLoggerDefinitionRequestPrivate::DeleteLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoggerDefinitionRequest
 * class' copy constructor.
 */
DeleteLoggerDefinitionRequestPrivate::DeleteLoggerDefinitionRequestPrivate(
    const DeleteLoggerDefinitionRequestPrivate &other, DeleteLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
