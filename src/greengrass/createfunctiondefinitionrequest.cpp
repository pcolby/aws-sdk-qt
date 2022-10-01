// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfunctiondefinitionrequest.h"
#include "createfunctiondefinitionrequest_p.h"
#include "createfunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionRequest
 * \brief The CreateFunctionDefinitionRequest class provides an interface for Greengrass CreateFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFunctionDefinitionRequest::CreateFunctionDefinitionRequest(const CreateFunctionDefinitionRequest &other)
    : GreengrassRequest(new CreateFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFunctionDefinitionRequest object.
 */
CreateFunctionDefinitionRequest::CreateFunctionDefinitionRequest()
    : GreengrassRequest(new CreateFunctionDefinitionRequestPrivate(GreengrassRequest::CreateFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionRequestPrivate
 * \brief The CreateFunctionDefinitionRequestPrivate class provides private implementation for CreateFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateFunctionDefinitionRequestPrivate::CreateFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionDefinitionRequest
 * class' copy constructor.
 */
CreateFunctionDefinitionRequestPrivate::CreateFunctionDefinitionRequestPrivate(
    const CreateFunctionDefinitionRequestPrivate &other, CreateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
