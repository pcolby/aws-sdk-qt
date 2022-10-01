// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcoredefinitionversionrequest.h"
#include "createcoredefinitionversionrequest_p.h"
#include "createcoredefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionRequest
 * \brief The CreateCoreDefinitionVersionRequest class provides an interface for Greengrass CreateCoreDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createCoreDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCoreDefinitionVersionRequest::CreateCoreDefinitionVersionRequest(const CreateCoreDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateCoreDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCoreDefinitionVersionRequest object.
 */
CreateCoreDefinitionVersionRequest::CreateCoreDefinitionVersionRequest()
    : GreengrassRequest(new CreateCoreDefinitionVersionRequestPrivate(GreengrassRequest::CreateCoreDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCoreDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCoreDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCoreDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCoreDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionRequestPrivate
 * \brief The CreateCoreDefinitionVersionRequestPrivate class provides private implementation for CreateCoreDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateCoreDefinitionVersionRequestPrivate::CreateCoreDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCoreDefinitionVersionRequest
 * class' copy constructor.
 */
CreateCoreDefinitionVersionRequestPrivate::CreateCoreDefinitionVersionRequestPrivate(
    const CreateCoreDefinitionVersionRequestPrivate &other, CreateCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
