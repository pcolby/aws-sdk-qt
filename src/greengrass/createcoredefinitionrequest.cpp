// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcoredefinitionrequest.h"
#include "createcoredefinitionrequest_p.h"
#include "createcoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionRequest
 * \brief The CreateCoreDefinitionRequest class provides an interface for Greengrass CreateCoreDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createCoreDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCoreDefinitionRequest::CreateCoreDefinitionRequest(const CreateCoreDefinitionRequest &other)
    : GreengrassRequest(new CreateCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCoreDefinitionRequest object.
 */
CreateCoreDefinitionRequest::CreateCoreDefinitionRequest()
    : GreengrassRequest(new CreateCoreDefinitionRequestPrivate(GreengrassRequest::CreateCoreDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCoreDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCoreDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCoreDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionRequestPrivate
 * \brief The CreateCoreDefinitionRequestPrivate class provides private implementation for CreateCoreDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateCoreDefinitionRequestPrivate::CreateCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCoreDefinitionRequest
 * class' copy constructor.
 */
CreateCoreDefinitionRequestPrivate::CreateCoreDefinitionRequestPrivate(
    const CreateCoreDefinitionRequestPrivate &other, CreateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
