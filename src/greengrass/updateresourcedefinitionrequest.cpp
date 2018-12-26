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

#include "updateresourcedefinitionrequest.h"
#include "updateresourcedefinitionrequest_p.h"
#include "updateresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionRequest
 * \brief The UpdateResourceDefinitionRequest class provides an interface for Greengrass UpdateResourceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateResourceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourceDefinitionRequest::UpdateResourceDefinitionRequest(const UpdateResourceDefinitionRequest &other)
    : GreengrassRequest(new UpdateResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourceDefinitionRequest object.
 */
UpdateResourceDefinitionRequest::UpdateResourceDefinitionRequest()
    : GreengrassRequest(new UpdateResourceDefinitionRequestPrivate(GreengrassRequest::UpdateResourceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionRequestPrivate
 * \brief The UpdateResourceDefinitionRequestPrivate class provides private implementation for UpdateResourceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateResourceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateResourceDefinitionRequestPrivate::UpdateResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceDefinitionRequest
 * class' copy constructor.
 */
UpdateResourceDefinitionRequestPrivate::UpdateResourceDefinitionRequestPrivate(
    const UpdateResourceDefinitionRequestPrivate &other, UpdateResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
