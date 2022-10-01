// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloggerdefinitionrequest.h"
#include "deleteloggerdefinitionrequest_p.h"
#include "deleteloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteLoggerDefinitionRequest
 * \brief The DeleteLoggerDefinitionRequest class provides an interface for Greengrass DeleteLoggerDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteLoggerDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLoggerDefinitionRequest::DeleteLoggerDefinitionRequest(const DeleteLoggerDefinitionRequest &other)
    : GreengrassRequest(new DeleteLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLoggerDefinitionRequest object.
 */
DeleteLoggerDefinitionRequest::DeleteLoggerDefinitionRequest()
    : GreengrassRequest(new DeleteLoggerDefinitionRequestPrivate(GreengrassRequest::DeleteLoggerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLoggerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLoggerDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoggerDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteLoggerDefinitionRequestPrivate
 * \brief The DeleteLoggerDefinitionRequestPrivate class provides private implementation for DeleteLoggerDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteLoggerDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteLoggerDefinitionRequestPrivate::DeleteLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoggerDefinitionRequest
 * class' copy constructor.
 */
DeleteLoggerDefinitionRequestPrivate::DeleteLoggerDefinitionRequestPrivate(
    const DeleteLoggerDefinitionRequestPrivate &other, DeleteLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
