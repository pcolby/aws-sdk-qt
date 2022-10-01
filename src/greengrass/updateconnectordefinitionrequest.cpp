// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectordefinitionrequest.h"
#include "updateconnectordefinitionrequest_p.h"
#include "updateconnectordefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionRequest
 * \brief The UpdateConnectorDefinitionRequest class provides an interface for Greengrass UpdateConnectorDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateConnectorDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectorDefinitionRequest::UpdateConnectorDefinitionRequest(const UpdateConnectorDefinitionRequest &other)
    : GreengrassRequest(new UpdateConnectorDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectorDefinitionRequest object.
 */
UpdateConnectorDefinitionRequest::UpdateConnectorDefinitionRequest()
    : GreengrassRequest(new UpdateConnectorDefinitionRequestPrivate(GreengrassRequest::UpdateConnectorDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectorDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectorDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectorDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectorDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionRequestPrivate
 * \brief The UpdateConnectorDefinitionRequestPrivate class provides private implementation for UpdateConnectorDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateConnectorDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateConnectorDefinitionRequestPrivate::UpdateConnectorDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectorDefinitionRequest
 * class' copy constructor.
 */
UpdateConnectorDefinitionRequestPrivate::UpdateConnectorDefinitionRequestPrivate(
    const UpdateConnectorDefinitionRequestPrivate &other, UpdateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
