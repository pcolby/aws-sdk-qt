// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcedefinitionrequest.h"
#include "updateresourcedefinitionrequest_p.h"
#include "updateresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionRequest
 * \brief The UpdateResourceDefinitionRequest class provides an interface for Greengrass UpdateResourceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateResourceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourceDefinitionRequest::UpdateResourceDefinitionRequest(const UpdateResourceDefinitionRequest &other)
    : GreengrassRequest(new UpdateResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourceDefinitionRequest object.
 */
UpdateResourceDefinitionRequest::UpdateResourceDefinitionRequest()
    : GreengrassRequest(new UpdateResourceDefinitionRequestPrivate(GreengrassRequest::UpdateResourceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionRequestPrivate
 * \brief The UpdateResourceDefinitionRequestPrivate class provides private implementation for UpdateResourceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateResourceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateResourceDefinitionRequestPrivate::UpdateResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceDefinitionRequest
 * class' copy constructor.
 */
UpdateResourceDefinitionRequestPrivate::UpdateResourceDefinitionRequestPrivate(
    const UpdateResourceDefinitionRequestPrivate &other, UpdateResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
