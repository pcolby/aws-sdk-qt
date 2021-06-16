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

#include "cancelworldgenerationjobrequest.h"
#include "cancelworldgenerationjobrequest_p.h"
#include "cancelworldgenerationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobRequest
 * \brief The CancelWorldGenerationJobRequest class provides an interface for RoboMaker CancelWorldGenerationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelWorldGenerationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelWorldGenerationJobRequest::CancelWorldGenerationJobRequest(const CancelWorldGenerationJobRequest &other)
    : RoboMakerRequest(new CancelWorldGenerationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelWorldGenerationJobRequest object.
 */
CancelWorldGenerationJobRequest::CancelWorldGenerationJobRequest()
    : RoboMakerRequest(new CancelWorldGenerationJobRequestPrivate(RoboMakerRequest::CancelWorldGenerationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelWorldGenerationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelWorldGenerationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelWorldGenerationJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelWorldGenerationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobRequestPrivate
 * \brief The CancelWorldGenerationJobRequestPrivate class provides private implementation for CancelWorldGenerationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelWorldGenerationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CancelWorldGenerationJobRequestPrivate::CancelWorldGenerationJobRequestPrivate(
    const RoboMakerRequest::Action action, CancelWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelWorldGenerationJobRequest
 * class' copy constructor.
 */
CancelWorldGenerationJobRequestPrivate::CancelWorldGenerationJobRequestPrivate(
    const CancelWorldGenerationJobRequestPrivate &other, CancelWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
