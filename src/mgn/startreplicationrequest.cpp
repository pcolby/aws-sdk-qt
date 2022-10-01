// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreplicationrequest.h"
#include "startreplicationrequest_p.h"
#include "startreplicationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::StartReplicationRequest
 * \brief The StartReplicationRequest class provides an interface for Mgn StartReplication requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::startReplication
 */

/*!
 * Constructs a copy of \a other.
 */
StartReplicationRequest::StartReplicationRequest(const StartReplicationRequest &other)
    : MgnRequest(new StartReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartReplicationRequest object.
 */
StartReplicationRequest::StartReplicationRequest()
    : MgnRequest(new StartReplicationRequestPrivate(MgnRequest::StartReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StartReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartReplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::StartReplicationRequestPrivate
 * \brief The StartReplicationRequestPrivate class provides private implementation for StartReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a StartReplicationRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
StartReplicationRequestPrivate::StartReplicationRequestPrivate(
    const MgnRequest::Action action, StartReplicationRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartReplicationRequest
 * class' copy constructor.
 */
StartReplicationRequestPrivate::StartReplicationRequestPrivate(
    const StartReplicationRequestPrivate &other, StartReplicationRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
