/*
    Copyright 2013-2020 Paul Colby

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

#include "listtriggersrequest.h"
#include "listtriggersrequest_p.h"
#include "listtriggersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListTriggersRequest
 * \brief The ListTriggersRequest class provides an interface for Glue ListTriggers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listTriggers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTriggersRequest::ListTriggersRequest(const ListTriggersRequest &other)
    : GlueRequest(new ListTriggersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTriggersRequest object.
 */
ListTriggersRequest::ListTriggersRequest()
    : GlueRequest(new ListTriggersRequestPrivate(GlueRequest::ListTriggersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTriggersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTriggersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTriggersRequest::response(QNetworkReply * const reply) const
{
    return new ListTriggersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListTriggersRequestPrivate
 * \brief The ListTriggersRequestPrivate class provides private implementation for ListTriggersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListTriggersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListTriggersRequestPrivate::ListTriggersRequestPrivate(
    const GlueRequest::Action action, ListTriggersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTriggersRequest
 * class' copy constructor.
 */
ListTriggersRequestPrivate::ListTriggersRequestPrivate(
    const ListTriggersRequestPrivate &other, ListTriggersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
