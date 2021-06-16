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

#include "changeserverlifecyclestaterequest.h"
#include "changeserverlifecyclestaterequest_p.h"
#include "changeserverlifecyclestateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::ChangeServerLifeCycleStateRequest
 * \brief The ChangeServerLifeCycleStateRequest class provides an interface for mgn ChangeServerLifeCycleState requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::changeServerLifeCycleState
 */

/*!
 * Constructs a copy of \a other.
 */
ChangeServerLifeCycleStateRequest::ChangeServerLifeCycleStateRequest(const ChangeServerLifeCycleStateRequest &other)
    : mgnRequest(new ChangeServerLifeCycleStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangeServerLifeCycleStateRequest object.
 */
ChangeServerLifeCycleStateRequest::ChangeServerLifeCycleStateRequest()
    : mgnRequest(new ChangeServerLifeCycleStateRequestPrivate(mgnRequest::ChangeServerLifeCycleStateAction, this))
{

}

/*!
 * \reimp
 */
bool ChangeServerLifeCycleStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChangeServerLifeCycleStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeServerLifeCycleStateRequest::response(QNetworkReply * const reply) const
{
    return new ChangeServerLifeCycleStateResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::ChangeServerLifeCycleStateRequestPrivate
 * \brief The ChangeServerLifeCycleStateRequestPrivate class provides private implementation for ChangeServerLifeCycleStateRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a ChangeServerLifeCycleStateRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
ChangeServerLifeCycleStateRequestPrivate::ChangeServerLifeCycleStateRequestPrivate(
    const mgnRequest::Action action, ChangeServerLifeCycleStateRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChangeServerLifeCycleStateRequest
 * class' copy constructor.
 */
ChangeServerLifeCycleStateRequestPrivate::ChangeServerLifeCycleStateRequestPrivate(
    const ChangeServerLifeCycleStateRequestPrivate &other, ChangeServerLifeCycleStateRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
