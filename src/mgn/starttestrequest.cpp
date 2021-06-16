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

#include "starttestrequest.h"
#include "starttestrequest_p.h"
#include "starttestresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::StartTestRequest
 * \brief The StartTestRequest class provides an interface for mgn StartTest requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::startTest
 */

/*!
 * Constructs a copy of \a other.
 */
StartTestRequest::StartTestRequest(const StartTestRequest &other)
    : mgnRequest(new StartTestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTestRequest object.
 */
StartTestRequest::StartTestRequest()
    : mgnRequest(new StartTestRequestPrivate(mgnRequest::StartTestAction, this))
{

}

/*!
 * \reimp
 */
bool StartTestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTestRequest::response(QNetworkReply * const reply) const
{
    return new StartTestResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::StartTestRequestPrivate
 * \brief The StartTestRequestPrivate class provides private implementation for StartTestRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a StartTestRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
StartTestRequestPrivate::StartTestRequestPrivate(
    const mgnRequest::Action action, StartTestRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTestRequest
 * class' copy constructor.
 */
StartTestRequestPrivate::StartTestRequestPrivate(
    const StartTestRequestPrivate &other, StartTestRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
