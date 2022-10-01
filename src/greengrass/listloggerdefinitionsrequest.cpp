// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listloggerdefinitionsrequest.h"
#include "listloggerdefinitionsrequest_p.h"
#include "listloggerdefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionsRequest
 * \brief The ListLoggerDefinitionsRequest class provides an interface for Greengrass ListLoggerDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listLoggerDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest(const ListLoggerDefinitionsRequest &other)
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLoggerDefinitionsRequest object.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest()
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(GreengrassRequest::ListLoggerDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLoggerDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLoggerDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLoggerDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLoggerDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionsRequestPrivate
 * \brief The ListLoggerDefinitionsRequestPrivate class provides private implementation for ListLoggerDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListLoggerDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListLoggerDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLoggerDefinitionsRequest
 * class' copy constructor.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const ListLoggerDefinitionsRequestPrivate &other, ListLoggerDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
