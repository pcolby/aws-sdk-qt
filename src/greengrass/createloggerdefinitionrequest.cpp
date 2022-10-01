// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createloggerdefinitionrequest.h"
#include "createloggerdefinitionrequest_p.h"
#include "createloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionRequest
 * \brief The CreateLoggerDefinitionRequest class provides an interface for Greengrass CreateLoggerDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createLoggerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLoggerDefinitionRequest::CreateLoggerDefinitionRequest(const CreateLoggerDefinitionRequest &other)
    : GreengrassRequest(new CreateLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLoggerDefinitionRequest object.
 */
CreateLoggerDefinitionRequest::CreateLoggerDefinitionRequest()
    : GreengrassRequest(new CreateLoggerDefinitionRequestPrivate(GreengrassRequest::CreateLoggerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLoggerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLoggerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoggerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionRequestPrivate
 * \brief The CreateLoggerDefinitionRequestPrivate class provides private implementation for CreateLoggerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateLoggerDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateLoggerDefinitionRequestPrivate::CreateLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLoggerDefinitionRequest
 * class' copy constructor.
 */
CreateLoggerDefinitionRequestPrivate::CreateLoggerDefinitionRequestPrivate(
    const CreateLoggerDefinitionRequestPrivate &other, CreateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
