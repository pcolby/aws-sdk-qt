// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecoredefinitionrequest.h"
#include "updatecoredefinitionrequest_p.h"
#include "updatecoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionRequest
 * \brief The UpdateCoreDefinitionRequest class provides an interface for Greengrass UpdateCoreDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateCoreDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCoreDefinitionRequest::UpdateCoreDefinitionRequest(const UpdateCoreDefinitionRequest &other)
    : GreengrassRequest(new UpdateCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCoreDefinitionRequest object.
 */
UpdateCoreDefinitionRequest::UpdateCoreDefinitionRequest()
    : GreengrassRequest(new UpdateCoreDefinitionRequestPrivate(GreengrassRequest::UpdateCoreDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCoreDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCoreDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCoreDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionRequestPrivate
 * \brief The UpdateCoreDefinitionRequestPrivate class provides private implementation for UpdateCoreDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateCoreDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateCoreDefinitionRequestPrivate::UpdateCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCoreDefinitionRequest
 * class' copy constructor.
 */
UpdateCoreDefinitionRequestPrivate::UpdateCoreDefinitionRequestPrivate(
    const UpdateCoreDefinitionRequestPrivate &other, UpdateCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
