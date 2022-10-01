// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsimulationapplicationrequest.h"
#include "createsimulationapplicationrequest_p.h"
#include "createsimulationapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationRequest
 * \brief The CreateSimulationApplicationRequest class provides an interface for RoboMaker CreateSimulationApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplication
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSimulationApplicationRequest::CreateSimulationApplicationRequest(const CreateSimulationApplicationRequest &other)
    : RoboMakerRequest(new CreateSimulationApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSimulationApplicationRequest object.
 */
CreateSimulationApplicationRequest::CreateSimulationApplicationRequest()
    : RoboMakerRequest(new CreateSimulationApplicationRequestPrivate(RoboMakerRequest::CreateSimulationApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSimulationApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSimulationApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSimulationApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateSimulationApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationRequestPrivate
 * \brief The CreateSimulationApplicationRequestPrivate class provides private implementation for CreateSimulationApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateSimulationApplicationRequestPrivate::CreateSimulationApplicationRequestPrivate(
    const RoboMakerRequest::Action action, CreateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSimulationApplicationRequest
 * class' copy constructor.
 */
CreateSimulationApplicationRequestPrivate::CreateSimulationApplicationRequestPrivate(
    const CreateSimulationApplicationRequestPrivate &other, CreateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
