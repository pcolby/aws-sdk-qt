/*
    Copyright 2013-2018 Paul Colby

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

#include "batchdisassociateuserstackrequest.h"
#include "batchdisassociateuserstackrequest_p.h"
#include "batchdisassociateuserstackresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::BatchDisassociateUserStackRequest
 * \brief The BatchDisassociateUserStackRequest class provides an interface for AppStream BatchDisassociateUserStack requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::batchDisassociateUserStack
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDisassociateUserStackRequest::BatchDisassociateUserStackRequest(const BatchDisassociateUserStackRequest &other)
    : AppStreamRequest(new BatchDisassociateUserStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDisassociateUserStackRequest object.
 */
BatchDisassociateUserStackRequest::BatchDisassociateUserStackRequest()
    : AppStreamRequest(new BatchDisassociateUserStackRequestPrivate(AppStreamRequest::BatchDisassociateUserStackAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDisassociateUserStackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDisassociateUserStackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDisassociateUserStackRequest::response(QNetworkReply * const reply) const
{
    return new BatchDisassociateUserStackResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::BatchDisassociateUserStackRequestPrivate
 * \brief The BatchDisassociateUserStackRequestPrivate class provides private implementation for BatchDisassociateUserStackRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a BatchDisassociateUserStackRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
BatchDisassociateUserStackRequestPrivate::BatchDisassociateUserStackRequestPrivate(
    const AppStreamRequest::Action action, BatchDisassociateUserStackRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDisassociateUserStackRequest
 * class' copy constructor.
 */
BatchDisassociateUserStackRequestPrivate::BatchDisassociateUserStackRequestPrivate(
    const BatchDisassociateUserStackRequestPrivate &other, BatchDisassociateUserStackRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
