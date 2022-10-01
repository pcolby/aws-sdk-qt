// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectrecoveryinstancerequest.h"
#include "disconnectrecoveryinstancerequest_p.h"
#include "disconnectrecoveryinstanceresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DisconnectRecoveryInstanceRequest
 * \brief The DisconnectRecoveryInstanceRequest class provides an interface for Drs DisconnectRecoveryInstance requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::disconnectRecoveryInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DisconnectRecoveryInstanceRequest::DisconnectRecoveryInstanceRequest(const DisconnectRecoveryInstanceRequest &other)
    : DrsRequest(new DisconnectRecoveryInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisconnectRecoveryInstanceRequest object.
 */
DisconnectRecoveryInstanceRequest::DisconnectRecoveryInstanceRequest()
    : DrsRequest(new DisconnectRecoveryInstanceRequestPrivate(DrsRequest::DisconnectRecoveryInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DisconnectRecoveryInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisconnectRecoveryInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisconnectRecoveryInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DisconnectRecoveryInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DisconnectRecoveryInstanceRequestPrivate
 * \brief The DisconnectRecoveryInstanceRequestPrivate class provides private implementation for DisconnectRecoveryInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DisconnectRecoveryInstanceRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DisconnectRecoveryInstanceRequestPrivate::DisconnectRecoveryInstanceRequestPrivate(
    const DrsRequest::Action action, DisconnectRecoveryInstanceRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisconnectRecoveryInstanceRequest
 * class' copy constructor.
 */
DisconnectRecoveryInstanceRequestPrivate::DisconnectRecoveryInstanceRequestPrivate(
    const DisconnectRecoveryInstanceRequestPrivate &other, DisconnectRecoveryInstanceRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
