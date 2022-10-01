// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrydatareplicationrequest.h"
#include "retrydatareplicationrequest_p.h"
#include "retrydatareplicationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::RetryDataReplicationRequest
 * \brief The RetryDataReplicationRequest class provides an interface for Mgn RetryDataReplication requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::retryDataReplication
 */

/*!
 * Constructs a copy of \a other.
 */
RetryDataReplicationRequest::RetryDataReplicationRequest(const RetryDataReplicationRequest &other)
    : MgnRequest(new RetryDataReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RetryDataReplicationRequest object.
 */
RetryDataReplicationRequest::RetryDataReplicationRequest()
    : MgnRequest(new RetryDataReplicationRequestPrivate(MgnRequest::RetryDataReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool RetryDataReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RetryDataReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RetryDataReplicationRequest::response(QNetworkReply * const reply) const
{
    return new RetryDataReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::RetryDataReplicationRequestPrivate
 * \brief The RetryDataReplicationRequestPrivate class provides private implementation for RetryDataReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a RetryDataReplicationRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
RetryDataReplicationRequestPrivate::RetryDataReplicationRequestPrivate(
    const MgnRequest::Action action, RetryDataReplicationRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RetryDataReplicationRequest
 * class' copy constructor.
 */
RetryDataReplicationRequestPrivate::RetryDataReplicationRequestPrivate(
    const RetryDataReplicationRequestPrivate &other, RetryDataReplicationRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
