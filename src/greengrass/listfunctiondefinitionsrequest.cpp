// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfunctiondefinitionsrequest.h"
#include "listfunctiondefinitionsrequest_p.h"
#include "listfunctiondefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionsRequest
 * \brief The ListFunctionDefinitionsRequest class provides an interface for Greengrass ListFunctionDefinitions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listFunctionDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListFunctionDefinitionsRequest::ListFunctionDefinitionsRequest(const ListFunctionDefinitionsRequest &other)
    : GreengrassRequest(new ListFunctionDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFunctionDefinitionsRequest object.
 */
ListFunctionDefinitionsRequest::ListFunctionDefinitionsRequest()
    : GreengrassRequest(new ListFunctionDefinitionsRequestPrivate(GreengrassRequest::ListFunctionDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFunctionDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFunctionDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFunctionDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionsRequestPrivate
 * \brief The ListFunctionDefinitionsRequestPrivate class provides private implementation for ListFunctionDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListFunctionDefinitionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListFunctionDefinitionsRequestPrivate::ListFunctionDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListFunctionDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionDefinitionsRequest
 * class' copy constructor.
 */
ListFunctionDefinitionsRequestPrivate::ListFunctionDefinitionsRequestPrivate(
    const ListFunctionDefinitionsRequestPrivate &other, ListFunctionDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
