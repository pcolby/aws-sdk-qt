/*
    Copyright 2013-2020 Paul Colby

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

#include "listwebhooksrequest.h"
#include "listwebhooksrequest_p.h"
#include "listwebhooksresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListWebhooksRequest
 * \brief The ListWebhooksRequest class provides an interface for Amplify ListWebhooks requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::listWebhooks
 */

/*!
 * Constructs a copy of \a other.
 */
ListWebhooksRequest::ListWebhooksRequest(const ListWebhooksRequest &other)
    : AmplifyRequest(new ListWebhooksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWebhooksRequest object.
 */
ListWebhooksRequest::ListWebhooksRequest()
    : AmplifyRequest(new ListWebhooksRequestPrivate(AmplifyRequest::ListWebhooksAction, this))
{

}

/*!
 * \reimp
 */
bool ListWebhooksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWebhooksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWebhooksRequest::response(QNetworkReply * const reply) const
{
    return new ListWebhooksResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListWebhooksRequestPrivate
 * \brief The ListWebhooksRequestPrivate class provides private implementation for ListWebhooksRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListWebhooksRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListWebhooksRequestPrivate::ListWebhooksRequestPrivate(
    const AmplifyRequest::Action action, ListWebhooksRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWebhooksRequest
 * class' copy constructor.
 */
ListWebhooksRequestPrivate::ListWebhooksRequestPrivate(
    const ListWebhooksRequestPrivate &other, ListWebhooksRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
