// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefunctiondefinitionrequest.h"
#include "updatefunctiondefinitionrequest_p.h"
#include "updatefunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateFunctionDefinitionRequest
 * \brief The UpdateFunctionDefinitionRequest class provides an interface for Greengrass UpdateFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFunctionDefinitionRequest::UpdateFunctionDefinitionRequest(const UpdateFunctionDefinitionRequest &other)
    : GreengrassRequest(new UpdateFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFunctionDefinitionRequest object.
 */
UpdateFunctionDefinitionRequest::UpdateFunctionDefinitionRequest()
    : GreengrassRequest(new UpdateFunctionDefinitionRequestPrivate(GreengrassRequest::UpdateFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateFunctionDefinitionRequestPrivate
 * \brief The UpdateFunctionDefinitionRequestPrivate class provides private implementation for UpdateFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateFunctionDefinitionRequestPrivate::UpdateFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionDefinitionRequest
 * class' copy constructor.
 */
UpdateFunctionDefinitionRequestPrivate::UpdateFunctionDefinitionRequestPrivate(
    const UpdateFunctionDefinitionRequestPrivate &other, UpdateFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
