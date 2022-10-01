// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectordefinitionversionrequest.h"
#include "getconnectordefinitionversionrequest_p.h"
#include "getconnectordefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionVersionRequest
 * \brief The GetConnectorDefinitionVersionRequest class provides an interface for Greengrass GetConnectorDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectorDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectorDefinitionVersionRequest::GetConnectorDefinitionVersionRequest(const GetConnectorDefinitionVersionRequest &other)
    : GreengrassRequest(new GetConnectorDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectorDefinitionVersionRequest object.
 */
GetConnectorDefinitionVersionRequest::GetConnectorDefinitionVersionRequest()
    : GreengrassRequest(new GetConnectorDefinitionVersionRequestPrivate(GreengrassRequest::GetConnectorDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectorDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectorDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectorDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectorDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionVersionRequestPrivate
 * \brief The GetConnectorDefinitionVersionRequestPrivate class provides private implementation for GetConnectorDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectorDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetConnectorDefinitionVersionRequestPrivate::GetConnectorDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetConnectorDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectorDefinitionVersionRequest
 * class' copy constructor.
 */
GetConnectorDefinitionVersionRequestPrivate::GetConnectorDefinitionVersionRequestPrivate(
    const GetConnectorDefinitionVersionRequestPrivate &other, GetConnectorDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
