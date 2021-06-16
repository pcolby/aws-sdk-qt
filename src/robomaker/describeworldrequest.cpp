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

#include "describeworldrequest.h"
#include "describeworldrequest_p.h"
#include "describeworldresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldRequest
 * \brief The DescribeWorldRequest class provides an interface for RoboMaker DescribeWorld requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorld
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorldRequest::DescribeWorldRequest(const DescribeWorldRequest &other)
    : RoboMakerRequest(new DescribeWorldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorldRequest object.
 */
DescribeWorldRequest::DescribeWorldRequest()
    : RoboMakerRequest(new DescribeWorldRequestPrivate(RoboMakerRequest::DescribeWorldAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorldRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorldResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorldRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorldResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldRequestPrivate
 * \brief The DescribeWorldRequestPrivate class provides private implementation for DescribeWorldRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeWorldRequestPrivate::DescribeWorldRequestPrivate(
    const RoboMakerRequest::Action action, DescribeWorldRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorldRequest
 * class' copy constructor.
 */
DescribeWorldRequestPrivate::DescribeWorldRequestPrivate(
    const DescribeWorldRequestPrivate &other, DescribeWorldRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
