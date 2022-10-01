// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesimulationapplicationrequest.h"
#include "updatesimulationapplicationrequest_p.h"
#include "updatesimulationapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationRequest
 * \brief The UpdateSimulationApplicationRequest class provides an interface for RoboMaker UpdateSimulationApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateSimulationApplication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSimulationApplicationRequest::UpdateSimulationApplicationRequest(const UpdateSimulationApplicationRequest &other)
    : RoboMakerRequest(new UpdateSimulationApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSimulationApplicationRequest object.
 */
UpdateSimulationApplicationRequest::UpdateSimulationApplicationRequest()
    : RoboMakerRequest(new UpdateSimulationApplicationRequestPrivate(RoboMakerRequest::UpdateSimulationApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSimulationApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSimulationApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSimulationApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSimulationApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationRequestPrivate
 * \brief The UpdateSimulationApplicationRequestPrivate class provides private implementation for UpdateSimulationApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateSimulationApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
UpdateSimulationApplicationRequestPrivate::UpdateSimulationApplicationRequestPrivate(
    const RoboMakerRequest::Action action, UpdateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSimulationApplicationRequest
 * class' copy constructor.
 */
UpdateSimulationApplicationRequestPrivate::UpdateSimulationApplicationRequestPrivate(
    const UpdateSimulationApplicationRequestPrivate &other, UpdateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
