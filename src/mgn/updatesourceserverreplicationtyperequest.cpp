// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesourceserverreplicationtyperequest.h"
#include "updatesourceserverreplicationtyperequest_p.h"
#include "updatesourceserverreplicationtyperesponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateSourceServerReplicationTypeRequest
 * \brief The UpdateSourceServerReplicationTypeRequest class provides an interface for Mgn UpdateSourceServerReplicationType requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateSourceServerReplicationType
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSourceServerReplicationTypeRequest::UpdateSourceServerReplicationTypeRequest(const UpdateSourceServerReplicationTypeRequest &other)
    : MgnRequest(new UpdateSourceServerReplicationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSourceServerReplicationTypeRequest object.
 */
UpdateSourceServerReplicationTypeRequest::UpdateSourceServerReplicationTypeRequest()
    : MgnRequest(new UpdateSourceServerReplicationTypeRequestPrivate(MgnRequest::UpdateSourceServerReplicationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSourceServerReplicationTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSourceServerReplicationTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSourceServerReplicationTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSourceServerReplicationTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::UpdateSourceServerReplicationTypeRequestPrivate
 * \brief The UpdateSourceServerReplicationTypeRequestPrivate class provides private implementation for UpdateSourceServerReplicationTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateSourceServerReplicationTypeRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
UpdateSourceServerReplicationTypeRequestPrivate::UpdateSourceServerReplicationTypeRequestPrivate(
    const MgnRequest::Action action, UpdateSourceServerReplicationTypeRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSourceServerReplicationTypeRequest
 * class' copy constructor.
 */
UpdateSourceServerReplicationTypeRequestPrivate::UpdateSourceServerReplicationTypeRequestPrivate(
    const UpdateSourceServerReplicationTypeRequestPrivate &other, UpdateSourceServerReplicationTypeRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
