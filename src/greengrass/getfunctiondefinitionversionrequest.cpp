// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfunctiondefinitionversionrequest.h"
#include "getfunctiondefinitionversionrequest_p.h"
#include "getfunctiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionRequest
 * \brief The GetFunctionDefinitionVersionRequest class provides an interface for Greengrass GetFunctionDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getFunctionDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetFunctionDefinitionVersionRequest::GetFunctionDefinitionVersionRequest(const GetFunctionDefinitionVersionRequest &other)
    : GreengrassRequest(new GetFunctionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFunctionDefinitionVersionRequest object.
 */
GetFunctionDefinitionVersionRequest::GetFunctionDefinitionVersionRequest()
    : GreengrassRequest(new GetFunctionDefinitionVersionRequestPrivate(GreengrassRequest::GetFunctionDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFunctionDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionRequestPrivate
 * \brief The GetFunctionDefinitionVersionRequestPrivate class provides private implementation for GetFunctionDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetFunctionDefinitionVersionRequestPrivate::GetFunctionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionDefinitionVersionRequest
 * class' copy constructor.
 */
GetFunctionDefinitionVersionRequestPrivate::GetFunctionDefinitionVersionRequestPrivate(
    const GetFunctionDefinitionVersionRequestPrivate &other, GetFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
