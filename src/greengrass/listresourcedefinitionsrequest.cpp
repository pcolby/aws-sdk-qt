// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcedefinitionsrequest.h"
#include "listresourcedefinitionsrequest_p.h"
#include "listresourcedefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionsRequest
 * \brief The ListResourceDefinitionsRequest class provides an interface for Greengrass ListResourceDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listResourceDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceDefinitionsRequest::ListResourceDefinitionsRequest(const ListResourceDefinitionsRequest &other)
    : GreengrassRequest(new ListResourceDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceDefinitionsRequest object.
 */
ListResourceDefinitionsRequest::ListResourceDefinitionsRequest()
    : GreengrassRequest(new ListResourceDefinitionsRequestPrivate(GreengrassRequest::ListResourceDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionsRequestPrivate
 * \brief The ListResourceDefinitionsRequestPrivate class provides private implementation for ListResourceDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListResourceDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListResourceDefinitionsRequestPrivate::ListResourceDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListResourceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceDefinitionsRequest
 * class' copy constructor.
 */
ListResourceDefinitionsRequestPrivate::ListResourceDefinitionsRequestPrivate(
    const ListResourceDefinitionsRequestPrivate &other, ListResourceDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
