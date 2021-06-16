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

#include "batchdeleteworldsrequest.h"
#include "batchdeleteworldsrequest_p.h"
#include "batchdeleteworldsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::BatchDeleteWorldsRequest
 * \brief The BatchDeleteWorldsRequest class provides an interface for RoboMaker BatchDeleteWorlds requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::batchDeleteWorlds
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteWorldsRequest::BatchDeleteWorldsRequest(const BatchDeleteWorldsRequest &other)
    : RoboMakerRequest(new BatchDeleteWorldsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteWorldsRequest object.
 */
BatchDeleteWorldsRequest::BatchDeleteWorldsRequest()
    : RoboMakerRequest(new BatchDeleteWorldsRequestPrivate(RoboMakerRequest::BatchDeleteWorldsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteWorldsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteWorldsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteWorldsRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteWorldsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::BatchDeleteWorldsRequestPrivate
 * \brief The BatchDeleteWorldsRequestPrivate class provides private implementation for BatchDeleteWorldsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a BatchDeleteWorldsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
BatchDeleteWorldsRequestPrivate::BatchDeleteWorldsRequestPrivate(
    const RoboMakerRequest::Action action, BatchDeleteWorldsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteWorldsRequest
 * class' copy constructor.
 */
BatchDeleteWorldsRequestPrivate::BatchDeleteWorldsRequestPrivate(
    const BatchDeleteWorldsRequestPrivate &other, BatchDeleteWorldsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
