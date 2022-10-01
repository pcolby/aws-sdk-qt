// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecoredefinitionrequest.h"
#include "deletecoredefinitionrequest_p.h"
#include "deletecoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteCoreDefinitionRequest
 * \brief The DeleteCoreDefinitionRequest class provides an interface for Greengrass DeleteCoreDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteCoreDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCoreDefinitionRequest::DeleteCoreDefinitionRequest(const DeleteCoreDefinitionRequest &other)
    : GreengrassRequest(new DeleteCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCoreDefinitionRequest object.
 */
DeleteCoreDefinitionRequest::DeleteCoreDefinitionRequest()
    : GreengrassRequest(new DeleteCoreDefinitionRequestPrivate(GreengrassRequest::DeleteCoreDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCoreDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCoreDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCoreDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteCoreDefinitionRequestPrivate
 * \brief The DeleteCoreDefinitionRequestPrivate class provides private implementation for DeleteCoreDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteCoreDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteCoreDefinitionRequestPrivate::DeleteCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCoreDefinitionRequest
 * class' copy constructor.
 */
DeleteCoreDefinitionRequestPrivate::DeleteCoreDefinitionRequestPrivate(
    const DeleteCoreDefinitionRequestPrivate &other, DeleteCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
