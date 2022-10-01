// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrecoveryrequest.h"
#include "startrecoveryrequest_p.h"
#include "startrecoveryresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::StartRecoveryRequest
 * \brief The StartRecoveryRequest class provides an interface for Drs StartRecovery requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::startRecovery
 */

/*!
 * Constructs a copy of \a other.
 */
StartRecoveryRequest::StartRecoveryRequest(const StartRecoveryRequest &other)
    : DrsRequest(new StartRecoveryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartRecoveryRequest object.
 */
StartRecoveryRequest::StartRecoveryRequest()
    : DrsRequest(new StartRecoveryRequestPrivate(DrsRequest::StartRecoveryAction, this))
{

}

/*!
 * \reimp
 */
bool StartRecoveryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartRecoveryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartRecoveryRequest::response(QNetworkReply * const reply) const
{
    return new StartRecoveryResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::StartRecoveryRequestPrivate
 * \brief The StartRecoveryRequestPrivate class provides private implementation for StartRecoveryRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a StartRecoveryRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
StartRecoveryRequestPrivate::StartRecoveryRequestPrivate(
    const DrsRequest::Action action, StartRecoveryRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartRecoveryRequest
 * class' copy constructor.
 */
StartRecoveryRequestPrivate::StartRecoveryRequestPrivate(
    const StartRecoveryRequestPrivate &other, StartRecoveryRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
