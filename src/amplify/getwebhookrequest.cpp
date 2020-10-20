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

#include "getwebhookrequest.h"
#include "getwebhookrequest_p.h"
#include "getwebhookresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetWebhookRequest
 * \brief The GetWebhookRequest class provides an interface for Amplify GetWebhook requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::getWebhook
 */

/*!
 * Constructs a copy of \a other.
 */
GetWebhookRequest::GetWebhookRequest(const GetWebhookRequest &other)
    : AmplifyRequest(new GetWebhookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWebhookRequest object.
 */
GetWebhookRequest::GetWebhookRequest()
    : AmplifyRequest(new GetWebhookRequestPrivate(AmplifyRequest::GetWebhookAction, this))
{

}

/*!
 * \reimp
 */
bool GetWebhookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWebhookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWebhookRequest::response(QNetworkReply * const reply) const
{
    return new GetWebhookResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetWebhookRequestPrivate
 * \brief The GetWebhookRequestPrivate class provides private implementation for GetWebhookRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetWebhookRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetWebhookRequestPrivate::GetWebhookRequestPrivate(
    const AmplifyRequest::Action action, GetWebhookRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWebhookRequest
 * class' copy constructor.
 */
GetWebhookRequestPrivate::GetWebhookRequestPrivate(
    const GetWebhookRequestPrivate &other, GetWebhookRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
