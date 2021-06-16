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

#include "describeworldgenerationjobrequest.h"
#include "describeworldgenerationjobrequest_p.h"
#include "describeworldgenerationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobRequest
 * \brief The DescribeWorldGenerationJobRequest class provides an interface for RoboMaker DescribeWorldGenerationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldGenerationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorldGenerationJobRequest::DescribeWorldGenerationJobRequest(const DescribeWorldGenerationJobRequest &other)
    : RoboMakerRequest(new DescribeWorldGenerationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorldGenerationJobRequest object.
 */
DescribeWorldGenerationJobRequest::DescribeWorldGenerationJobRequest()
    : RoboMakerRequest(new DescribeWorldGenerationJobRequestPrivate(RoboMakerRequest::DescribeWorldGenerationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorldGenerationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorldGenerationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorldGenerationJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorldGenerationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobRequestPrivate
 * \brief The DescribeWorldGenerationJobRequestPrivate class provides private implementation for DescribeWorldGenerationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldGenerationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeWorldGenerationJobRequestPrivate::DescribeWorldGenerationJobRequestPrivate(
    const RoboMakerRequest::Action action, DescribeWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorldGenerationJobRequest
 * class' copy constructor.
 */
DescribeWorldGenerationJobRequestPrivate::DescribeWorldGenerationJobRequestPrivate(
    const DescribeWorldGenerationJobRequestPrivate &other, DescribeWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
