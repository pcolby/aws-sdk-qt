// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesimulationapplicationrequest.h"
#include "deletesimulationapplicationrequest_p.h"
#include "deletesimulationapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteSimulationApplicationRequest
 * \brief The DeleteSimulationApplicationRequest class provides an interface for RoboMaker DeleteSimulationApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteSimulationApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSimulationApplicationRequest::DeleteSimulationApplicationRequest(const DeleteSimulationApplicationRequest &other)
    : RoboMakerRequest(new DeleteSimulationApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSimulationApplicationRequest object.
 */
DeleteSimulationApplicationRequest::DeleteSimulationApplicationRequest()
    : RoboMakerRequest(new DeleteSimulationApplicationRequestPrivate(RoboMakerRequest::DeleteSimulationApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSimulationApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSimulationApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSimulationApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSimulationApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteSimulationApplicationRequestPrivate
 * \brief The DeleteSimulationApplicationRequestPrivate class provides private implementation for DeleteSimulationApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteSimulationApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteSimulationApplicationRequestPrivate::DeleteSimulationApplicationRequestPrivate(
    const RoboMakerRequest::Action action, DeleteSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSimulationApplicationRequest
 * class' copy constructor.
 */
DeleteSimulationApplicationRequestPrivate::DeleteSimulationApplicationRequestPrivate(
    const DeleteSimulationApplicationRequestPrivate &other, DeleteSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
