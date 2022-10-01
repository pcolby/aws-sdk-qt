// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicedefinitionrequest.h"
#include "updatedevicedefinitionrequest_p.h"
#include "updatedevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateDeviceDefinitionRequest
 * \brief The UpdateDeviceDefinitionRequest class provides an interface for Greengrass UpdateDeviceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateDeviceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceDefinitionRequest::UpdateDeviceDefinitionRequest(const UpdateDeviceDefinitionRequest &other)
    : GreengrassRequest(new UpdateDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceDefinitionRequest object.
 */
UpdateDeviceDefinitionRequest::UpdateDeviceDefinitionRequest()
    : GreengrassRequest(new UpdateDeviceDefinitionRequestPrivate(GreengrassRequest::UpdateDeviceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateDeviceDefinitionRequestPrivate
 * \brief The UpdateDeviceDefinitionRequestPrivate class provides private implementation for UpdateDeviceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateDeviceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateDeviceDefinitionRequestPrivate::UpdateDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceDefinitionRequest
 * class' copy constructor.
 */
UpdateDeviceDefinitionRequestPrivate::UpdateDeviceDefinitionRequestPrivate(
    const UpdateDeviceDefinitionRequestPrivate &other, UpdateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
