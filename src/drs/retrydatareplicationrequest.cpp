// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrydatareplicationrequest.h"
#include "retrydatareplicationrequest_p.h"
#include "retrydatareplicationresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::RetryDataReplicationRequest
 * \brief The RetryDataReplicationRequest class provides an interface for Drs RetryDataReplication requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::retryDataReplication
 */

/*!
 * Constructs a copy of \a other.
 */
RetryDataReplicationRequest::RetryDataReplicationRequest(const RetryDataReplicationRequest &other)
    : DrsRequest(new RetryDataReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RetryDataReplicationRequest object.
 */
RetryDataReplicationRequest::RetryDataReplicationRequest()
    : DrsRequest(new RetryDataReplicationRequestPrivate(DrsRequest::RetryDataReplicationAction, this))
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
 * \class QtAws::Drs::RetryDataReplicationRequestPrivate
 * \brief The RetryDataReplicationRequestPrivate class provides private implementation for RetryDataReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a RetryDataReplicationRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
RetryDataReplicationRequestPrivate::RetryDataReplicationRequestPrivate(
    const DrsRequest::Action action, RetryDataReplicationRequest * const q)
    : DrsRequestPrivate(action, q)
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
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
