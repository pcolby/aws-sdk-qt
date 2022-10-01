// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsimulationjobbatchesrequest.h"
#include "listsimulationjobbatchesrequest_p.h"
#include "listsimulationjobbatchesresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationJobBatchesRequest
 * \brief The ListSimulationJobBatchesRequest class provides an interface for RoboMaker ListSimulationJobBatches requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationJobBatches
 */

/*!
 * Constructs a copy of \a other.
 */
ListSimulationJobBatchesRequest::ListSimulationJobBatchesRequest(const ListSimulationJobBatchesRequest &other)
    : RoboMakerRequest(new ListSimulationJobBatchesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSimulationJobBatchesRequest object.
 */
ListSimulationJobBatchesRequest::ListSimulationJobBatchesRequest()
    : RoboMakerRequest(new ListSimulationJobBatchesRequestPrivate(RoboMakerRequest::ListSimulationJobBatchesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSimulationJobBatchesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSimulationJobBatchesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSimulationJobBatchesRequest::response(QNetworkReply * const reply) const
{
    return new ListSimulationJobBatchesResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListSimulationJobBatchesRequestPrivate
 * \brief The ListSimulationJobBatchesRequestPrivate class provides private implementation for ListSimulationJobBatchesRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationJobBatchesRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListSimulationJobBatchesRequestPrivate::ListSimulationJobBatchesRequestPrivate(
    const RoboMakerRequest::Action action, ListSimulationJobBatchesRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSimulationJobBatchesRequest
 * class' copy constructor.
 */
ListSimulationJobBatchesRequestPrivate::ListSimulationJobBatchesRequestPrivate(
    const ListSimulationJobBatchesRequestPrivate &other, ListSimulationJobBatchesRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
