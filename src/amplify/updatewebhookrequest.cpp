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

#include "updatewebhookrequest.h"
#include "updatewebhookrequest_p.h"
#include "updatewebhookresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateWebhookRequest
 * \brief The UpdateWebhookRequest class provides an interface for Amplify UpdateWebhook requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::updateWebhook
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWebhookRequest::UpdateWebhookRequest(const UpdateWebhookRequest &other)
    : AmplifyRequest(new UpdateWebhookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWebhookRequest object.
 */
UpdateWebhookRequest::UpdateWebhookRequest()
    : AmplifyRequest(new UpdateWebhookRequestPrivate(AmplifyRequest::UpdateWebhookAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWebhookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWebhookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWebhookRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWebhookResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateWebhookRequestPrivate
 * \brief The UpdateWebhookRequestPrivate class provides private implementation for UpdateWebhookRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateWebhookRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateWebhookRequestPrivate::UpdateWebhookRequestPrivate(
    const AmplifyRequest::Action action, UpdateWebhookRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWebhookRequest
 * class' copy constructor.
 */
UpdateWebhookRequestPrivate::UpdateWebhookRequestPrivate(
    const UpdateWebhookRequestPrivate &other, UpdateWebhookRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
