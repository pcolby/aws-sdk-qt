// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfailbacklaunchrequest.h"
#include "startfailbacklaunchrequest_p.h"
#include "startfailbacklaunchresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::StartFailbackLaunchRequest
 * \brief The StartFailbackLaunchRequest class provides an interface for Drs StartFailbackLaunch requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::startFailbackLaunch
 */

/*!
 * Constructs a copy of \a other.
 */
StartFailbackLaunchRequest::StartFailbackLaunchRequest(const StartFailbackLaunchRequest &other)
    : DrsRequest(new StartFailbackLaunchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFailbackLaunchRequest object.
 */
StartFailbackLaunchRequest::StartFailbackLaunchRequest()
    : DrsRequest(new StartFailbackLaunchRequestPrivate(DrsRequest::StartFailbackLaunchAction, this))
{

}

/*!
 * \reimp
 */
bool StartFailbackLaunchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFailbackLaunchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFailbackLaunchRequest::response(QNetworkReply * const reply) const
{
    return new StartFailbackLaunchResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::StartFailbackLaunchRequestPrivate
 * \brief The StartFailbackLaunchRequestPrivate class provides private implementation for StartFailbackLaunchRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a StartFailbackLaunchRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
StartFailbackLaunchRequestPrivate::StartFailbackLaunchRequestPrivate(
    const DrsRequest::Action action, StartFailbackLaunchRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFailbackLaunchRequest
 * class' copy constructor.
 */
StartFailbackLaunchRequestPrivate::StartFailbackLaunchRequestPrivate(
    const StartFailbackLaunchRequestPrivate &other, StartFailbackLaunchRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
