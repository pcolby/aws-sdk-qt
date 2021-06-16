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

#include "finalizecutoverrequest.h"
#include "finalizecutoverrequest_p.h"
#include "finalizecutoverresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::FinalizeCutoverRequest
 * \brief The FinalizeCutoverRequest class provides an interface for mgn FinalizeCutover requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::finalizeCutover
 */

/*!
 * Constructs a copy of \a other.
 */
FinalizeCutoverRequest::FinalizeCutoverRequest(const FinalizeCutoverRequest &other)
    : mgnRequest(new FinalizeCutoverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FinalizeCutoverRequest object.
 */
FinalizeCutoverRequest::FinalizeCutoverRequest()
    : mgnRequest(new FinalizeCutoverRequestPrivate(mgnRequest::FinalizeCutoverAction, this))
{

}

/*!
 * \reimp
 */
bool FinalizeCutoverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FinalizeCutoverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FinalizeCutoverRequest::response(QNetworkReply * const reply) const
{
    return new FinalizeCutoverResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::FinalizeCutoverRequestPrivate
 * \brief The FinalizeCutoverRequestPrivate class provides private implementation for FinalizeCutoverRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a FinalizeCutoverRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
FinalizeCutoverRequestPrivate::FinalizeCutoverRequestPrivate(
    const mgnRequest::Action action, FinalizeCutoverRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FinalizeCutoverRequest
 * class' copy constructor.
 */
FinalizeCutoverRequestPrivate::FinalizeCutoverRequestPrivate(
    const FinalizeCutoverRequestPrivate &other, FinalizeCutoverRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
