// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsimulationapplicationversionrequest.h"
#include "createsimulationapplicationversionrequest_p.h"
#include "createsimulationapplicationversionresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionRequest
 * \brief The CreateSimulationApplicationVersionRequest class provides an interface for RoboMaker CreateSimulationApplicationVersion requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplicationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSimulationApplicationVersionRequest::CreateSimulationApplicationVersionRequest(const CreateSimulationApplicationVersionRequest &other)
    : RoboMakerRequest(new CreateSimulationApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSimulationApplicationVersionRequest object.
 */
CreateSimulationApplicationVersionRequest::CreateSimulationApplicationVersionRequest()
    : RoboMakerRequest(new CreateSimulationApplicationVersionRequestPrivate(RoboMakerRequest::CreateSimulationApplicationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSimulationApplicationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSimulationApplicationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSimulationApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSimulationApplicationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionRequestPrivate
 * \brief The CreateSimulationApplicationVersionRequestPrivate class provides private implementation for CreateSimulationApplicationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationVersionRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateSimulationApplicationVersionRequestPrivate::CreateSimulationApplicationVersionRequestPrivate(
    const RoboMakerRequest::Action action, CreateSimulationApplicationVersionRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSimulationApplicationVersionRequest
 * class' copy constructor.
 */
CreateSimulationApplicationVersionRequestPrivate::CreateSimulationApplicationVersionRequestPrivate(
    const CreateSimulationApplicationVersionRequestPrivate &other, CreateSimulationApplicationVersionRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
