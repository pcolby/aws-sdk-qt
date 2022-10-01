// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcedefinitionversionrequest.h"
#include "getresourcedefinitionversionrequest_p.h"
#include "getresourcedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionVersionRequest
 * \brief The GetResourceDefinitionVersionRequest class provides an interface for Greengrass GetResourceDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getResourceDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceDefinitionVersionRequest::GetResourceDefinitionVersionRequest(const GetResourceDefinitionVersionRequest &other)
    : GreengrassRequest(new GetResourceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceDefinitionVersionRequest object.
 */
GetResourceDefinitionVersionRequest::GetResourceDefinitionVersionRequest()
    : GreengrassRequest(new GetResourceDefinitionVersionRequestPrivate(GreengrassRequest::GetResourceDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionVersionRequestPrivate
 * \brief The GetResourceDefinitionVersionRequestPrivate class provides private implementation for GetResourceDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetResourceDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetResourceDefinitionVersionRequestPrivate::GetResourceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetResourceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceDefinitionVersionRequest
 * class' copy constructor.
 */
GetResourceDefinitionVersionRequestPrivate::GetResourceDefinitionVersionRequestPrivate(
    const GetResourceDefinitionVersionRequestPrivate &other, GetResourceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
