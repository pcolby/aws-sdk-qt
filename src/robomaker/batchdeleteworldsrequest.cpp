// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
