// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcedefinitionversionrequest.h"
#include "createresourcedefinitionversionrequest_p.h"
#include "createresourcedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionRequest
 * \brief The CreateResourceDefinitionVersionRequest class provides an interface for Greengrass CreateResourceDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createResourceDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceDefinitionVersionRequest::CreateResourceDefinitionVersionRequest(const CreateResourceDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateResourceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceDefinitionVersionRequest object.
 */
CreateResourceDefinitionVersionRequest::CreateResourceDefinitionVersionRequest()
    : GreengrassRequest(new CreateResourceDefinitionVersionRequestPrivate(GreengrassRequest::CreateResourceDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionRequestPrivate
 * \brief The CreateResourceDefinitionVersionRequestPrivate class provides private implementation for CreateResourceDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateResourceDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateResourceDefinitionVersionRequestPrivate::CreateResourceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateResourceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceDefinitionVersionRequest
 * class' copy constructor.
 */
CreateResourceDefinitionVersionRequestPrivate::CreateResourceDefinitionVersionRequestPrivate(
    const CreateResourceDefinitionVersionRequestPrivate &other, CreateResourceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
