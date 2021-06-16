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

#include "cancelworldexportjobrequest.h"
#include "cancelworldexportjobrequest_p.h"
#include "cancelworldexportjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelWorldExportJobRequest
 * \brief The CancelWorldExportJobRequest class provides an interface for RoboMaker CancelWorldExportJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelWorldExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelWorldExportJobRequest::CancelWorldExportJobRequest(const CancelWorldExportJobRequest &other)
    : RoboMakerRequest(new CancelWorldExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelWorldExportJobRequest object.
 */
CancelWorldExportJobRequest::CancelWorldExportJobRequest()
    : RoboMakerRequest(new CancelWorldExportJobRequestPrivate(RoboMakerRequest::CancelWorldExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelWorldExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelWorldExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelWorldExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelWorldExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CancelWorldExportJobRequestPrivate
 * \brief The CancelWorldExportJobRequestPrivate class provides private implementation for CancelWorldExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelWorldExportJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CancelWorldExportJobRequestPrivate::CancelWorldExportJobRequestPrivate(
    const RoboMakerRequest::Action action, CancelWorldExportJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelWorldExportJobRequest
 * class' copy constructor.
 */
CancelWorldExportJobRequestPrivate::CancelWorldExportJobRequestPrivate(
    const CancelWorldExportJobRequestPrivate &other, CancelWorldExportJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
