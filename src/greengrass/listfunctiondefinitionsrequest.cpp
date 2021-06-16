/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
