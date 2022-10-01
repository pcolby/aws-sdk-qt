// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfunctiondefinitionversionsrequest.h"
#include "listfunctiondefinitionversionsrequest_p.h"
#include "listfunctiondefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionVersionsRequest
 * \brief The ListFunctionDefinitionVersionsRequest class provides an interface for Greengrass ListFunctionDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listFunctionDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListFunctionDefinitionVersionsRequest::ListFunctionDefinitionVersionsRequest(const ListFunctionDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListFunctionDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFunctionDefinitionVersionsRequest object.
 */
ListFunctionDefinitionVersionsRequest::ListFunctionDefinitionVersionsRequest()
    : GreengrassRequest(new ListFunctionDefinitionVersionsRequestPrivate(GreengrassRequest::ListFunctionDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFunctionDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFunctionDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFunctionDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionVersionsRequestPrivate
 * \brief The ListFunctionDefinitionVersionsRequestPrivate class provides private implementation for ListFunctionDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListFunctionDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListFunctionDefinitionVersionsRequestPrivate::ListFunctionDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListFunctionDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionDefinitionVersionsRequest
 * class' copy constructor.
 */
ListFunctionDefinitionVersionsRequestPrivate::ListFunctionDefinitionVersionsRequestPrivate(
    const ListFunctionDefinitionVersionsRequestPrivate &other, ListFunctionDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
