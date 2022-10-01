// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectordefinitionrequest.h"
#include "deleteconnectordefinitionrequest_p.h"
#include "deleteconnectordefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteConnectorDefinitionRequest
 * \brief The DeleteConnectorDefinitionRequest class provides an interface for Greengrass DeleteConnectorDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteConnectorDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectorDefinitionRequest::DeleteConnectorDefinitionRequest(const DeleteConnectorDefinitionRequest &other)
    : GreengrassRequest(new DeleteConnectorDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectorDefinitionRequest object.
 */
DeleteConnectorDefinitionRequest::DeleteConnectorDefinitionRequest()
    : GreengrassRequest(new DeleteConnectorDefinitionRequestPrivate(GreengrassRequest::DeleteConnectorDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectorDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectorDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectorDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectorDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteConnectorDefinitionRequestPrivate
 * \brief The DeleteConnectorDefinitionRequestPrivate class provides private implementation for DeleteConnectorDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteConnectorDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteConnectorDefinitionRequestPrivate::DeleteConnectorDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectorDefinitionRequest
 * class' copy constructor.
 */
DeleteConnectorDefinitionRequestPrivate::DeleteConnectorDefinitionRequestPrivate(
    const DeleteConnectorDefinitionRequestPrivate &other, DeleteConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
