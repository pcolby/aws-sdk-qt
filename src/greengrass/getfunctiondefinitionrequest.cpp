// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfunctiondefinitionrequest.h"
#include "getfunctiondefinitionrequest_p.h"
#include "getfunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionRequest
 * \brief The GetFunctionDefinitionRequest class provides an interface for Greengrass GetFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest(const GetFunctionDefinitionRequest &other)
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFunctionDefinitionRequest object.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest()
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(GreengrassRequest::GetFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionRequestPrivate
 * \brief The GetFunctionDefinitionRequestPrivate class provides private implementation for GetFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionDefinitionRequest
 * class' copy constructor.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GetFunctionDefinitionRequestPrivate &other, GetFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
