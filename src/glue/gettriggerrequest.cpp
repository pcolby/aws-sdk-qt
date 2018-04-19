/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gettriggerrequest.h"
#include "gettriggerrequest_p.h"
#include "gettriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggerRequest
 * \brief The GetTriggerRequest class provides an interface for Glue GetTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
GetTriggerRequest::GetTriggerRequest(const GetTriggerRequest &other)
    : GlueRequest(new GetTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTriggerRequest object.
 */
GetTriggerRequest::GetTriggerRequest()
    : GlueRequest(new GetTriggerRequestPrivate(GlueRequest::GetTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool GetTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTriggerRequest::response(QNetworkReply * const reply) const
{
    return new GetTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTriggerRequestPrivate
 * \brief The GetTriggerRequestPrivate class provides private implementation for GetTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTriggerRequestPrivate::GetTriggerRequestPrivate(
    const GlueRequest::Action action, GetTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTriggerRequest
 * class' copy constructor.
 */
GetTriggerRequestPrivate::GetTriggerRequestPrivate(
    const GetTriggerRequestPrivate &other, GetTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
