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

#include "listextensiblesourceserversrequest.h"
#include "listextensiblesourceserversrequest_p.h"
#include "listextensiblesourceserversresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersRequest
 * \brief The ListExtensibleSourceServersRequest class provides an interface for Drs ListExtensibleSourceServers requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::listExtensibleSourceServers
 */

/*!
 * Constructs a copy of \a other.
 */
ListExtensibleSourceServersRequest::ListExtensibleSourceServersRequest(const ListExtensibleSourceServersRequest &other)
    : DrsRequest(new ListExtensibleSourceServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExtensibleSourceServersRequest object.
 */
ListExtensibleSourceServersRequest::ListExtensibleSourceServersRequest()
    : DrsRequest(new ListExtensibleSourceServersRequestPrivate(DrsRequest::ListExtensibleSourceServersAction, this))
{

}

/*!
 * \reimp
 */
bool ListExtensibleSourceServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExtensibleSourceServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExtensibleSourceServersRequest::response(QNetworkReply * const reply) const
{
    return new ListExtensibleSourceServersResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersRequestPrivate
 * \brief The ListExtensibleSourceServersRequestPrivate class provides private implementation for ListExtensibleSourceServersRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a ListExtensibleSourceServersRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
ListExtensibleSourceServersRequestPrivate::ListExtensibleSourceServersRequestPrivate(
    const DrsRequest::Action action, ListExtensibleSourceServersRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExtensibleSourceServersRequest
 * class' copy constructor.
 */
ListExtensibleSourceServersRequestPrivate::ListExtensibleSourceServersRequestPrivate(
    const ListExtensibleSourceServersRequestPrivate &other, ListExtensibleSourceServersRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
