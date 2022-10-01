// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptriggerrequest.h"
#include "stoptriggerrequest_p.h"
#include "stoptriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopTriggerRequest
 * \brief The StopTriggerRequest class provides an interface for Glue StopTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
StopTriggerRequest::StopTriggerRequest(const StopTriggerRequest &other)
    : GlueRequest(new StopTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTriggerRequest object.
 */
StopTriggerRequest::StopTriggerRequest()
    : GlueRequest(new StopTriggerRequestPrivate(GlueRequest::StopTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool StopTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTriggerRequest::response(QNetworkReply * const reply) const
{
    return new StopTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StopTriggerRequestPrivate
 * \brief The StopTriggerRequestPrivate class provides private implementation for StopTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StopTriggerRequestPrivate::StopTriggerRequestPrivate(
    const GlueRequest::Action action, StopTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTriggerRequest
 * class' copy constructor.
 */
StopTriggerRequestPrivate::StopTriggerRequestPrivate(
    const StopTriggerRequestPrivate &other, StopTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
