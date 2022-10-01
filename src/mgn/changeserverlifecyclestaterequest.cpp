// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changeserverlifecyclestaterequest.h"
#include "changeserverlifecyclestaterequest_p.h"
#include "changeserverlifecyclestateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::ChangeServerLifeCycleStateRequest
 * \brief The ChangeServerLifeCycleStateRequest class provides an interface for Mgn ChangeServerLifeCycleState requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::changeServerLifeCycleState
 */

/*!
 * Constructs a copy of \a other.
 */
ChangeServerLifeCycleStateRequest::ChangeServerLifeCycleStateRequest(const ChangeServerLifeCycleStateRequest &other)
    : MgnRequest(new ChangeServerLifeCycleStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangeServerLifeCycleStateRequest object.
 */
ChangeServerLifeCycleStateRequest::ChangeServerLifeCycleStateRequest()
    : MgnRequest(new ChangeServerLifeCycleStateRequestPrivate(MgnRequest::ChangeServerLifeCycleStateAction, this))
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
 * \class QtAws::Mgn::ChangeServerLifeCycleStateRequestPrivate
 * \brief The ChangeServerLifeCycleStateRequestPrivate class provides private implementation for ChangeServerLifeCycleStateRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a ChangeServerLifeCycleStateRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
ChangeServerLifeCycleStateRequestPrivate::ChangeServerLifeCycleStateRequestPrivate(
    const MgnRequest::Action action, ChangeServerLifeCycleStateRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
