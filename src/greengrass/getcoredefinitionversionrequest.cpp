// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcoredefinitionversionrequest.h"
#include "getcoredefinitionversionrequest_p.h"
#include "getcoredefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionRequest
 * \brief The GetCoreDefinitionVersionRequest class provides an interface for Greengrass GetCoreDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getCoreDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreDefinitionVersionRequest::GetCoreDefinitionVersionRequest(const GetCoreDefinitionVersionRequest &other)
    : GreengrassRequest(new GetCoreDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreDefinitionVersionRequest object.
 */
GetCoreDefinitionVersionRequest::GetCoreDefinitionVersionRequest()
    : GreengrassRequest(new GetCoreDefinitionVersionRequestPrivate(GreengrassRequest::GetCoreDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionRequestPrivate
 * \brief The GetCoreDefinitionVersionRequestPrivate class provides private implementation for GetCoreDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetCoreDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetCoreDefinitionVersionRequestPrivate::GetCoreDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreDefinitionVersionRequest
 * class' copy constructor.
 */
GetCoreDefinitionVersionRequestPrivate::GetCoreDefinitionVersionRequestPrivate(
    const GetCoreDefinitionVersionRequestPrivate &other, GetCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
