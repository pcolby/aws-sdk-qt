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

#include "updateapprequest.h"
#include "updateapprequest_p.h"
#include "updateappresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateAppRequest
 * \brief The UpdateAppRequest class provides an interface for Amplify UpdateApp requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::updateApp
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppRequest::UpdateAppRequest(const UpdateAppRequest &other)
    : AmplifyRequest(new UpdateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppRequest object.
 */
UpdateAppRequest::UpdateAppRequest()
    : AmplifyRequest(new UpdateAppRequestPrivate(AmplifyRequest::UpdateAppAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateAppRequestPrivate
 * \brief The UpdateAppRequestPrivate class provides private implementation for UpdateAppRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateAppRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const AmplifyRequest::Action action, UpdateAppRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppRequest
 * class' copy constructor.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const UpdateAppRequestPrivate &other, UpdateAppRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
