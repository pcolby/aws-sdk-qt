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

#include "updatecoredefinitionrequest.h"
#include "updatecoredefinitionrequest_p.h"
#include "updatecoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionRequest
 * \brief The UpdateCoreDefinitionRequest class provides an interface for Greengrass UpdateCoreDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateCoreDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCoreDefinitionRequest::UpdateCoreDefinitionRequest(const UpdateCoreDefinitionRequest &other)
    : GreengrassRequest(new UpdateCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCoreDefinitionRequest object.
 */
UpdateCoreDefinitionRequest::UpdateCoreDefinitionRequest()
    : GreengrassRequest(new UpdateCoreDefinitionRequestPrivate(GreengrassRequest::UpdateCoreDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCoreDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCoreDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCoreDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionRequestPrivate
 * \brief The UpdateCoreDefinitionRequestPrivate class provides private implementation for UpdateCoreDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateCoreDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateCoreDefinitionRequestPrivate::UpdateCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCoreDefinitionRequest
 * class' copy constructor.
 */
UpdateCoreDefinitionRequestPrivate::UpdateCoreDefinitionRequestPrivate(
    const UpdateCoreDefinitionRequestPrivate &other, UpdateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
