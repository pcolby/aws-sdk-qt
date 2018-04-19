/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "creategroupversionrequest.h"
#include "creategroupversionrequest_p.h"
#include "creategroupversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateGroupVersionRequest
 * \brief The CreateGroupVersionRequest class provides an interface for Greengrass CreateGroupVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createGroupVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupVersionRequest::CreateGroupVersionRequest(const CreateGroupVersionRequest &other)
    : GreengrassRequest(new CreateGroupVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupVersionRequest object.
 */
CreateGroupVersionRequest::CreateGroupVersionRequest()
    : GreengrassRequest(new CreateGroupVersionRequestPrivate(GreengrassRequest::CreateGroupVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateGroupVersionRequestPrivate
 * \brief The CreateGroupVersionRequestPrivate class provides private implementation for CreateGroupVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 *
 * Constructs a CreateGroupVersionRequestPrivate object for Greengrass \a action with,
 * public implementation \a q.
 */
CreateGroupVersionRequestPrivate::CreateGroupVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateGroupVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupVersionRequest
 * class' copy constructor.
 */
CreateGroupVersionRequestPrivate::CreateGroupVersionRequestPrivate(
    const CreateGroupVersionRequestPrivate &other, CreateGroupVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
