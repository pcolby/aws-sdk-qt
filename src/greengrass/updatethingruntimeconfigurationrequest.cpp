// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethingruntimeconfigurationrequest.h"
#include "updatethingruntimeconfigurationrequest_p.h"
#include "updatethingruntimeconfigurationresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateThingRuntimeConfigurationRequest
 * \brief The UpdateThingRuntimeConfigurationRequest class provides an interface for Greengrass UpdateThingRuntimeConfiguration requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateThingRuntimeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThingRuntimeConfigurationRequest::UpdateThingRuntimeConfigurationRequest(const UpdateThingRuntimeConfigurationRequest &other)
    : GreengrassRequest(new UpdateThingRuntimeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThingRuntimeConfigurationRequest object.
 */
UpdateThingRuntimeConfigurationRequest::UpdateThingRuntimeConfigurationRequest()
    : GreengrassRequest(new UpdateThingRuntimeConfigurationRequestPrivate(GreengrassRequest::UpdateThingRuntimeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThingRuntimeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThingRuntimeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThingRuntimeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThingRuntimeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateThingRuntimeConfigurationRequestPrivate
 * \brief The UpdateThingRuntimeConfigurationRequestPrivate class provides private implementation for UpdateThingRuntimeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateThingRuntimeConfigurationRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateThingRuntimeConfigurationRequestPrivate::UpdateThingRuntimeConfigurationRequestPrivate(
    const GreengrassRequest::Action action, UpdateThingRuntimeConfigurationRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThingRuntimeConfigurationRequest
 * class' copy constructor.
 */
UpdateThingRuntimeConfigurationRequestPrivate::UpdateThingRuntimeConfigurationRequestPrivate(
    const UpdateThingRuntimeConfigurationRequestPrivate &other, UpdateThingRuntimeConfigurationRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
