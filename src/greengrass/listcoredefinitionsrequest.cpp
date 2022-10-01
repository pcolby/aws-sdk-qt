// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoredefinitionsrequest.h"
#include "listcoredefinitionsrequest_p.h"
#include "listcoredefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionsRequest
 * \brief The ListCoreDefinitionsRequest class provides an interface for Greengrass ListCoreDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listCoreDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoreDefinitionsRequest::ListCoreDefinitionsRequest(const ListCoreDefinitionsRequest &other)
    : GreengrassRequest(new ListCoreDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoreDefinitionsRequest object.
 */
ListCoreDefinitionsRequest::ListCoreDefinitionsRequest()
    : GreengrassRequest(new ListCoreDefinitionsRequestPrivate(GreengrassRequest::ListCoreDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoreDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoreDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoreDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCoreDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionsRequestPrivate
 * \brief The ListCoreDefinitionsRequestPrivate class provides private implementation for ListCoreDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListCoreDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListCoreDefinitionsRequestPrivate::ListCoreDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListCoreDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoreDefinitionsRequest
 * class' copy constructor.
 */
ListCoreDefinitionsRequestPrivate::ListCoreDefinitionsRequestPrivate(
    const ListCoreDefinitionsRequestPrivate &other, ListCoreDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
