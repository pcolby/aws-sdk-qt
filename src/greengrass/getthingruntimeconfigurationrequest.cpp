// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getthingruntimeconfigurationrequest.h"
#include "getthingruntimeconfigurationrequest_p.h"
#include "getthingruntimeconfigurationresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationRequest
 * \brief The GetThingRuntimeConfigurationRequest class provides an interface for Greengrass GetThingRuntimeConfiguration requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getThingRuntimeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetThingRuntimeConfigurationRequest::GetThingRuntimeConfigurationRequest(const GetThingRuntimeConfigurationRequest &other)
    : GreengrassRequest(new GetThingRuntimeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetThingRuntimeConfigurationRequest object.
 */
GetThingRuntimeConfigurationRequest::GetThingRuntimeConfigurationRequest()
    : GreengrassRequest(new GetThingRuntimeConfigurationRequestPrivate(GreengrassRequest::GetThingRuntimeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetThingRuntimeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetThingRuntimeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThingRuntimeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetThingRuntimeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationRequestPrivate
 * \brief The GetThingRuntimeConfigurationRequestPrivate class provides private implementation for GetThingRuntimeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetThingRuntimeConfigurationRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetThingRuntimeConfigurationRequestPrivate::GetThingRuntimeConfigurationRequestPrivate(
    const GreengrassRequest::Action action, GetThingRuntimeConfigurationRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetThingRuntimeConfigurationRequest
 * class' copy constructor.
 */
GetThingRuntimeConfigurationRequestPrivate::GetThingRuntimeConfigurationRequestPrivate(
    const GetThingRuntimeConfigurationRequestPrivate &other, GetThingRuntimeConfigurationRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
