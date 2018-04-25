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

#include "gettriggersrequest.h"
#include "gettriggersrequest_p.h"
#include "gettriggersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggersRequest
 * \brief The GetTriggersRequest class provides an interface for Glue GetTriggers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTriggers
 */

/*!
 * Constructs a copy of \a other.
 */
GetTriggersRequest::GetTriggersRequest(const GetTriggersRequest &other)
    : GlueRequest(new GetTriggersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTriggersRequest object.
 */
GetTriggersRequest::GetTriggersRequest()
    : GlueRequest(new GetTriggersRequestPrivate(GlueRequest::GetTriggersAction, this))
{

}

/*!
 * \reimp
 */
bool GetTriggersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTriggersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTriggersRequest::response(QNetworkReply * const reply) const
{
    return new GetTriggersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTriggersRequestPrivate
 * \brief The GetTriggersRequestPrivate class provides private implementation for GetTriggersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTriggersRequestPrivate::GetTriggersRequestPrivate(
    const GlueRequest::Action action, GetTriggersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTriggersRequest
 * class' copy constructor.
 */
GetTriggersRequestPrivate::GetTriggersRequestPrivate(
    const GetTriggersRequestPrivate &other, GetTriggersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
