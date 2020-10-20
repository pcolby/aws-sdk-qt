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

#include "createsoftwareupdatejobrequest.h"
#include "createsoftwareupdatejobrequest_p.h"
#include "createsoftwareupdatejobresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateSoftwareUpdateJobRequest
 * \brief The CreateSoftwareUpdateJobRequest class provides an interface for Greengrass CreateSoftwareUpdateJob requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createSoftwareUpdateJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSoftwareUpdateJobRequest::CreateSoftwareUpdateJobRequest(const CreateSoftwareUpdateJobRequest &other)
    : GreengrassRequest(new CreateSoftwareUpdateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSoftwareUpdateJobRequest object.
 */
CreateSoftwareUpdateJobRequest::CreateSoftwareUpdateJobRequest()
    : GreengrassRequest(new CreateSoftwareUpdateJobRequestPrivate(GreengrassRequest::CreateSoftwareUpdateJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSoftwareUpdateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSoftwareUpdateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSoftwareUpdateJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateSoftwareUpdateJobResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateSoftwareUpdateJobRequestPrivate
 * \brief The CreateSoftwareUpdateJobRequestPrivate class provides private implementation for CreateSoftwareUpdateJobRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateSoftwareUpdateJobRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateSoftwareUpdateJobRequestPrivate::CreateSoftwareUpdateJobRequestPrivate(
    const GreengrassRequest::Action action, CreateSoftwareUpdateJobRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSoftwareUpdateJobRequest
 * class' copy constructor.
 */
CreateSoftwareUpdateJobRequestPrivate::CreateSoftwareUpdateJobRequestPrivate(
    const CreateSoftwareUpdateJobRequestPrivate &other, CreateSoftwareUpdateJobRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
