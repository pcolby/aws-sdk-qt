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

#include "markasarchivedrequest.h"
#include "markasarchivedrequest_p.h"
#include "markasarchivedresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::MarkAsArchivedRequest
 * \brief The MarkAsArchivedRequest class provides an interface for mgn MarkAsArchived requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::markAsArchived
 */

/*!
 * Constructs a copy of \a other.
 */
MarkAsArchivedRequest::MarkAsArchivedRequest(const MarkAsArchivedRequest &other)
    : mgnRequest(new MarkAsArchivedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MarkAsArchivedRequest object.
 */
MarkAsArchivedRequest::MarkAsArchivedRequest()
    : mgnRequest(new MarkAsArchivedRequestPrivate(mgnRequest::MarkAsArchivedAction, this))
{

}

/*!
 * \reimp
 */
bool MarkAsArchivedRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MarkAsArchivedResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MarkAsArchivedRequest::response(QNetworkReply * const reply) const
{
    return new MarkAsArchivedResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::MarkAsArchivedRequestPrivate
 * \brief The MarkAsArchivedRequestPrivate class provides private implementation for MarkAsArchivedRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a MarkAsArchivedRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
MarkAsArchivedRequestPrivate::MarkAsArchivedRequestPrivate(
    const mgnRequest::Action action, MarkAsArchivedRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MarkAsArchivedRequest
 * class' copy constructor.
 */
MarkAsArchivedRequestPrivate::MarkAsArchivedRequestPrivate(
    const MarkAsArchivedRequestPrivate &other, MarkAsArchivedRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
