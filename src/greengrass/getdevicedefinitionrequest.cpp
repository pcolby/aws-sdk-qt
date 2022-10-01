// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicedefinitionrequest.h"
#include "getdevicedefinitionrequest_p.h"
#include "getdevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionRequest
 * \brief The GetDeviceDefinitionRequest class provides an interface for Greengrass GetDeviceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getDeviceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceDefinitionRequest::GetDeviceDefinitionRequest(const GetDeviceDefinitionRequest &other)
    : GreengrassRequest(new GetDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceDefinitionRequest object.
 */
GetDeviceDefinitionRequest::GetDeviceDefinitionRequest()
    : GreengrassRequest(new GetDeviceDefinitionRequestPrivate(GreengrassRequest::GetDeviceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionRequestPrivate
 * \brief The GetDeviceDefinitionRequestPrivate class provides private implementation for GetDeviceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeviceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetDeviceDefinitionRequestPrivate::GetDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceDefinitionRequest
 * class' copy constructor.
 */
GetDeviceDefinitionRequestPrivate::GetDeviceDefinitionRequestPrivate(
    const GetDeviceDefinitionRequestPrivate &other, GetDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
