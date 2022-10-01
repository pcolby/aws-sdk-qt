// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttriggerrequest.h"
#include "starttriggerrequest_p.h"
#include "starttriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartTriggerRequest
 * \brief The StartTriggerRequest class provides an interface for Glue StartTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
StartTriggerRequest::StartTriggerRequest(const StartTriggerRequest &other)
    : GlueRequest(new StartTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTriggerRequest object.
 */
StartTriggerRequest::StartTriggerRequest()
    : GlueRequest(new StartTriggerRequestPrivate(GlueRequest::StartTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool StartTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTriggerRequest::response(QNetworkReply * const reply) const
{
    return new StartTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartTriggerRequestPrivate
 * \brief The StartTriggerRequestPrivate class provides private implementation for StartTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartTriggerRequestPrivate::StartTriggerRequestPrivate(
    const GlueRequest::Action action, StartTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTriggerRequest
 * class' copy constructor.
 */
StartTriggerRequestPrivate::StartTriggerRequestPrivate(
    const StartTriggerRequestPrivate &other, StartTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
