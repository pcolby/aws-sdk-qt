// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopfailbackrequest.h"
#include "stopfailbackrequest_p.h"
#include "stopfailbackresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::StopFailbackRequest
 * \brief The StopFailbackRequest class provides an interface for Drs StopFailback requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::stopFailback
 */

/*!
 * Constructs a copy of \a other.
 */
StopFailbackRequest::StopFailbackRequest(const StopFailbackRequest &other)
    : DrsRequest(new StopFailbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopFailbackRequest object.
 */
StopFailbackRequest::StopFailbackRequest()
    : DrsRequest(new StopFailbackRequestPrivate(DrsRequest::StopFailbackAction, this))
{

}

/*!
 * \reimp
 */
bool StopFailbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopFailbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopFailbackRequest::response(QNetworkReply * const reply) const
{
    return new StopFailbackResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::StopFailbackRequestPrivate
 * \brief The StopFailbackRequestPrivate class provides private implementation for StopFailbackRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a StopFailbackRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
StopFailbackRequestPrivate::StopFailbackRequestPrivate(
    const DrsRequest::Action action, StopFailbackRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopFailbackRequest
 * class' copy constructor.
 */
StopFailbackRequestPrivate::StopFailbackRequestPrivate(
    const StopFailbackRequestPrivate &other, StopFailbackRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
