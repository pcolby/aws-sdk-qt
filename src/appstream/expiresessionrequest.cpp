/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "expiresessionrequest.h"
#include "expiresessionrequest_p.h"
#include "expiresessionresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::ExpireSessionRequest
 * \brief The ExpireSessionRequest class provides an interface for AppStream ExpireSession requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::expireSession
 */

/*!
 * Constructs a copy of \a other.
 */
ExpireSessionRequest::ExpireSessionRequest(const ExpireSessionRequest &other)
    : AppStreamRequest(new ExpireSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExpireSessionRequest object.
 */
ExpireSessionRequest::ExpireSessionRequest()
    : AppStreamRequest(new ExpireSessionRequestPrivate(AppStreamRequest::ExpireSessionAction, this))
{

}

/*!
 * \reimp
 */
bool ExpireSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExpireSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExpireSessionRequest::response(QNetworkReply * const reply) const
{
    return new ExpireSessionResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::ExpireSessionRequestPrivate
 * \brief The ExpireSessionRequestPrivate class provides private implementation for ExpireSessionRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 *
 * Constructs a ExpireSessionRequestPrivate object for AppStream \a action with,
 * public implementation \a q.
 */
ExpireSessionRequestPrivate::ExpireSessionRequestPrivate(
    const AppStreamRequest::Action action, ExpireSessionRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExpireSessionRequest
 * class' copy constructor.
 */
ExpireSessionRequestPrivate::ExpireSessionRequestPrivate(
    const ExpireSessionRequestPrivate &other, ExpireSessionRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
