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

#include "startcutoverrequest.h"
#include "startcutoverrequest_p.h"
#include "startcutoverresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::StartCutoverRequest
 * \brief The StartCutoverRequest class provides an interface for mgn StartCutover requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::startCutover
 */

/*!
 * Constructs a copy of \a other.
 */
StartCutoverRequest::StartCutoverRequest(const StartCutoverRequest &other)
    : mgnRequest(new StartCutoverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCutoverRequest object.
 */
StartCutoverRequest::StartCutoverRequest()
    : mgnRequest(new StartCutoverRequestPrivate(mgnRequest::StartCutoverAction, this))
{

}

/*!
 * \reimp
 */
bool StartCutoverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCutoverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCutoverRequest::response(QNetworkReply * const reply) const
{
    return new StartCutoverResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::StartCutoverRequestPrivate
 * \brief The StartCutoverRequestPrivate class provides private implementation for StartCutoverRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a StartCutoverRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
StartCutoverRequestPrivate::StartCutoverRequestPrivate(
    const mgnRequest::Action action, StartCutoverRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCutoverRequest
 * class' copy constructor.
 */
StartCutoverRequestPrivate::StartCutoverRequestPrivate(
    const StartCutoverRequestPrivate &other, StartCutoverRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
