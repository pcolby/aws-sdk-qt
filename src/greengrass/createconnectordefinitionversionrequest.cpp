// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectordefinitionversionrequest.h"
#include "createconnectordefinitionversionrequest_p.h"
#include "createconnectordefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionRequest
 * \brief The CreateConnectorDefinitionVersionRequest class provides an interface for Greengrass CreateConnectorDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createConnectorDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectorDefinitionVersionRequest::CreateConnectorDefinitionVersionRequest(const CreateConnectorDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateConnectorDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectorDefinitionVersionRequest object.
 */
CreateConnectorDefinitionVersionRequest::CreateConnectorDefinitionVersionRequest()
    : GreengrassRequest(new CreateConnectorDefinitionVersionRequestPrivate(GreengrassRequest::CreateConnectorDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectorDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectorDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectorDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectorDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionRequestPrivate
 * \brief The CreateConnectorDefinitionVersionRequestPrivate class provides private implementation for CreateConnectorDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateConnectorDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateConnectorDefinitionVersionRequestPrivate::CreateConnectorDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateConnectorDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectorDefinitionVersionRequest
 * class' copy constructor.
 */
CreateConnectorDefinitionVersionRequestPrivate::CreateConnectorDefinitionVersionRequestPrivate(
    const CreateConnectorDefinitionVersionRequestPrivate &other, CreateConnectorDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
