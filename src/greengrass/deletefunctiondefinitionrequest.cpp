// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefunctiondefinitionrequest.h"
#include "deletefunctiondefinitionrequest_p.h"
#include "deletefunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionRequest
 * \brief The DeleteFunctionDefinitionRequest class provides an interface for Greengrass DeleteFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFunctionDefinitionRequest::DeleteFunctionDefinitionRequest(const DeleteFunctionDefinitionRequest &other)
    : GreengrassRequest(new DeleteFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFunctionDefinitionRequest object.
 */
DeleteFunctionDefinitionRequest::DeleteFunctionDefinitionRequest()
    : GreengrassRequest(new DeleteFunctionDefinitionRequestPrivate(GreengrassRequest::DeleteFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionRequestPrivate
 * \brief The DeleteFunctionDefinitionRequestPrivate class provides private implementation for DeleteFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteFunctionDefinitionRequestPrivate::DeleteFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionDefinitionRequest
 * class' copy constructor.
 */
DeleteFunctionDefinitionRequestPrivate::DeleteFunctionDefinitionRequestPrivate(
    const DeleteFunctionDefinitionRequestPrivate &other, DeleteFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
