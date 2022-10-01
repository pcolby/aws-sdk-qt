// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefleetrequest.h"
#include "deletefleetrequest_p.h"
#include "deletefleetresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteFleetRequest
 * \brief The DeleteFleetRequest class provides an interface for RoboMaker DeleteFleet requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFleetRequest::DeleteFleetRequest(const DeleteFleetRequest &other)
    : RoboMakerRequest(new DeleteFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFleetRequest object.
 */
DeleteFleetRequest::DeleteFleetRequest()
    : RoboMakerRequest(new DeleteFleetRequestPrivate(RoboMakerRequest::DeleteFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFleetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFleetResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteFleetRequestPrivate
 * \brief The DeleteFleetRequestPrivate class provides private implementation for DeleteFleetRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteFleetRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const RoboMakerRequest::Action action, DeleteFleetRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFleetRequest
 * class' copy constructor.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const DeleteFleetRequestPrivate &other, DeleteFleetRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
