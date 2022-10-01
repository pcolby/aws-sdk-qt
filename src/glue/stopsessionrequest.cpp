// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsessionrequest.h"
#include "stopsessionrequest_p.h"
#include "stopsessionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopSessionRequest
 * \brief The StopSessionRequest class provides an interface for Glue StopSession requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopSession
 */

/*!
 * Constructs a copy of \a other.
 */
StopSessionRequest::StopSessionRequest(const StopSessionRequest &other)
    : GlueRequest(new StopSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopSessionRequest object.
 */
StopSessionRequest::StopSessionRequest()
    : GlueRequest(new StopSessionRequestPrivate(GlueRequest::StopSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StopSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopSessionRequest::response(QNetworkReply * const reply) const
{
    return new StopSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StopSessionRequestPrivate
 * \brief The StopSessionRequestPrivate class provides private implementation for StopSessionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopSessionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StopSessionRequestPrivate::StopSessionRequestPrivate(
    const GlueRequest::Action action, StopSessionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopSessionRequest
 * class' copy constructor.
 */
StopSessionRequestPrivate::StopSessionRequestPrivate(
    const StopSessionRequestPrivate &other, StopSessionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
