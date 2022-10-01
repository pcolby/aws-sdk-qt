// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createloggerdefinitionversionrequest.h"
#include "createloggerdefinitionversionrequest_p.h"
#include "createloggerdefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionVersionRequest
 * \brief The CreateLoggerDefinitionVersionRequest class provides an interface for Greengrass CreateLoggerDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createLoggerDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLoggerDefinitionVersionRequest::CreateLoggerDefinitionVersionRequest(const CreateLoggerDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateLoggerDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLoggerDefinitionVersionRequest object.
 */
CreateLoggerDefinitionVersionRequest::CreateLoggerDefinitionVersionRequest()
    : GreengrassRequest(new CreateLoggerDefinitionVersionRequestPrivate(GreengrassRequest::CreateLoggerDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLoggerDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLoggerDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoggerDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoggerDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionVersionRequestPrivate
 * \brief The CreateLoggerDefinitionVersionRequestPrivate class provides private implementation for CreateLoggerDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateLoggerDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateLoggerDefinitionVersionRequestPrivate::CreateLoggerDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLoggerDefinitionVersionRequest
 * class' copy constructor.
 */
CreateLoggerDefinitionVersionRequestPrivate::CreateLoggerDefinitionVersionRequestPrivate(
    const CreateLoggerDefinitionVersionRequestPrivate &other, CreateLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
