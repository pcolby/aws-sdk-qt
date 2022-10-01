// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectordefinitionrequest.h"
#include "createconnectordefinitionrequest_p.h"
#include "createconnectordefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionRequest
 * \brief The CreateConnectorDefinitionRequest class provides an interface for Greengrass CreateConnectorDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createConnectorDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectorDefinitionRequest::CreateConnectorDefinitionRequest(const CreateConnectorDefinitionRequest &other)
    : GreengrassRequest(new CreateConnectorDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectorDefinitionRequest object.
 */
CreateConnectorDefinitionRequest::CreateConnectorDefinitionRequest()
    : GreengrassRequest(new CreateConnectorDefinitionRequestPrivate(GreengrassRequest::CreateConnectorDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectorDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectorDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectorDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectorDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionRequestPrivate
 * \brief The CreateConnectorDefinitionRequestPrivate class provides private implementation for CreateConnectorDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateConnectorDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateConnectorDefinitionRequestPrivate::CreateConnectorDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectorDefinitionRequest
 * class' copy constructor.
 */
CreateConnectorDefinitionRequestPrivate::CreateConnectorDefinitionRequestPrivate(
    const CreateConnectorDefinitionRequestPrivate &other, CreateConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
