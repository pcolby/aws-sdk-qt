// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcedefinitionrequest.h"
#include "getresourcedefinitionrequest_p.h"
#include "getresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionRequest
 * \brief The GetResourceDefinitionRequest class provides an interface for Greengrass GetResourceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getResourceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceDefinitionRequest::GetResourceDefinitionRequest(const GetResourceDefinitionRequest &other)
    : GreengrassRequest(new GetResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceDefinitionRequest object.
 */
GetResourceDefinitionRequest::GetResourceDefinitionRequest()
    : GreengrassRequest(new GetResourceDefinitionRequestPrivate(GreengrassRequest::GetResourceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionRequestPrivate
 * \brief The GetResourceDefinitionRequestPrivate class provides private implementation for GetResourceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetResourceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetResourceDefinitionRequestPrivate::GetResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceDefinitionRequest
 * class' copy constructor.
 */
GetResourceDefinitionRequestPrivate::GetResourceDefinitionRequestPrivate(
    const GetResourceDefinitionRequestPrivate &other, GetResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
