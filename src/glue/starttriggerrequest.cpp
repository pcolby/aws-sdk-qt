/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
