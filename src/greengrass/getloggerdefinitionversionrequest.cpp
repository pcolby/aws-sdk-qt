// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getloggerdefinitionversionrequest.h"
#include "getloggerdefinitionversionrequest_p.h"
#include "getloggerdefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionRequest
 * \brief The GetLoggerDefinitionVersionRequest class provides an interface for Greengrass GetLoggerDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getLoggerDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetLoggerDefinitionVersionRequest::GetLoggerDefinitionVersionRequest(const GetLoggerDefinitionVersionRequest &other)
    : GreengrassRequest(new GetLoggerDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLoggerDefinitionVersionRequest object.
 */
GetLoggerDefinitionVersionRequest::GetLoggerDefinitionVersionRequest()
    : GreengrassRequest(new GetLoggerDefinitionVersionRequestPrivate(GreengrassRequest::GetLoggerDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetLoggerDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLoggerDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoggerDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetLoggerDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionRequestPrivate
 * \brief The GetLoggerDefinitionVersionRequestPrivate class provides private implementation for GetLoggerDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetLoggerDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetLoggerDefinitionVersionRequestPrivate::GetLoggerDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLoggerDefinitionVersionRequest
 * class' copy constructor.
 */
GetLoggerDefinitionVersionRequestPrivate::GetLoggerDefinitionVersionRequestPrivate(
    const GetLoggerDefinitionVersionRequestPrivate &other, GetLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
