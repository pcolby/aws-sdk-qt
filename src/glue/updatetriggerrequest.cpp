/*
    Copyright 2013-2018 Paul Colby

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

#include "updatetriggerrequest.h"
#include "updatetriggerrequest_p.h"
#include "updatetriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateTriggerRequest
 * \brief The UpdateTriggerRequest class provides an interface for Glue UpdateTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTriggerRequest::UpdateTriggerRequest(const UpdateTriggerRequest &other)
    : GlueRequest(new UpdateTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTriggerRequest object.
 */
UpdateTriggerRequest::UpdateTriggerRequest()
    : GlueRequest(new UpdateTriggerRequestPrivate(GlueRequest::UpdateTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTriggerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateTriggerRequestPrivate
 * \brief The UpdateTriggerRequestPrivate class provides private implementation for UpdateTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const GlueRequest::Action action, UpdateTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTriggerRequest
 * class' copy constructor.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const UpdateTriggerRequestPrivate &other, UpdateTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
