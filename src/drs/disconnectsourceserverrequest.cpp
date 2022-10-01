// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectsourceserverrequest.h"
#include "disconnectsourceserverrequest_p.h"
#include "disconnectsourceserverresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DisconnectSourceServerRequest
 * \brief The DisconnectSourceServerRequest class provides an interface for Drs DisconnectSourceServer requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::disconnectSourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
DisconnectSourceServerRequest::DisconnectSourceServerRequest(const DisconnectSourceServerRequest &other)
    : DrsRequest(new DisconnectSourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisconnectSourceServerRequest object.
 */
DisconnectSourceServerRequest::DisconnectSourceServerRequest()
    : DrsRequest(new DisconnectSourceServerRequestPrivate(DrsRequest::DisconnectSourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool DisconnectSourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisconnectSourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisconnectSourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DisconnectSourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DisconnectSourceServerRequestPrivate
 * \brief The DisconnectSourceServerRequestPrivate class provides private implementation for DisconnectSourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DisconnectSourceServerRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DisconnectSourceServerRequestPrivate::DisconnectSourceServerRequestPrivate(
    const DrsRequest::Action action, DisconnectSourceServerRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisconnectSourceServerRequest
 * class' copy constructor.
 */
DisconnectSourceServerRequestPrivate::DisconnectSourceServerRequestPrivate(
    const DisconnectSourceServerRequestPrivate &other, DisconnectSourceServerRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
