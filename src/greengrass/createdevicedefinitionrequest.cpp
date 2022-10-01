// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevicedefinitionrequest.h"
#include "createdevicedefinitionrequest_p.h"
#include "createdevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionRequest
 * \brief The CreateDeviceDefinitionRequest class provides an interface for Greengrass CreateDeviceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createDeviceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeviceDefinitionRequest::CreateDeviceDefinitionRequest(const CreateDeviceDefinitionRequest &other)
    : GreengrassRequest(new CreateDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeviceDefinitionRequest object.
 */
CreateDeviceDefinitionRequest::CreateDeviceDefinitionRequest()
    : GreengrassRequest(new CreateDeviceDefinitionRequestPrivate(GreengrassRequest::CreateDeviceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeviceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeviceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionRequestPrivate
 * \brief The CreateDeviceDefinitionRequestPrivate class provides private implementation for CreateDeviceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateDeviceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateDeviceDefinitionRequestPrivate::CreateDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceDefinitionRequest
 * class' copy constructor.
 */
CreateDeviceDefinitionRequestPrivate::CreateDeviceDefinitionRequestPrivate(
    const CreateDeviceDefinitionRequestPrivate &other, CreateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
