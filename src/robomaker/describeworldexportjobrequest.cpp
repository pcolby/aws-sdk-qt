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

#include "describeworldexportjobrequest.h"
#include "describeworldexportjobrequest_p.h"
#include "describeworldexportjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldExportJobRequest
 * \brief The DescribeWorldExportJobRequest class provides an interface for RoboMaker DescribeWorldExportJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorldExportJobRequest::DescribeWorldExportJobRequest(const DescribeWorldExportJobRequest &other)
    : RoboMakerRequest(new DescribeWorldExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorldExportJobRequest object.
 */
DescribeWorldExportJobRequest::DescribeWorldExportJobRequest()
    : RoboMakerRequest(new DescribeWorldExportJobRequestPrivate(RoboMakerRequest::DescribeWorldExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorldExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorldExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorldExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorldExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldExportJobRequestPrivate
 * \brief The DescribeWorldExportJobRequestPrivate class provides private implementation for DescribeWorldExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldExportJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeWorldExportJobRequestPrivate::DescribeWorldExportJobRequestPrivate(
    const RoboMakerRequest::Action action, DescribeWorldExportJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorldExportJobRequest
 * class' copy constructor.
 */
DescribeWorldExportJobRequestPrivate::DescribeWorldExportJobRequestPrivate(
    const DescribeWorldExportJobRequestPrivate &other, DescribeWorldExportJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
