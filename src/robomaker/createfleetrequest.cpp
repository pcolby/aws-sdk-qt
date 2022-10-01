// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfleetrequest.h"
#include "createfleetrequest_p.h"
#include "createfleetresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateFleetRequest
 * \brief The CreateFleetRequest class provides an interface for RoboMaker CreateFleet requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createFleet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFleetRequest::CreateFleetRequest(const CreateFleetRequest &other)
    : RoboMakerRequest(new CreateFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFleetRequest object.
 */
CreateFleetRequest::CreateFleetRequest()
    : RoboMakerRequest(new CreateFleetRequestPrivate(RoboMakerRequest::CreateFleetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFleetRequest::response(QNetworkReply * const reply) const
{
    return new CreateFleetResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateFleetRequestPrivate
 * \brief The CreateFleetRequestPrivate class provides private implementation for CreateFleetRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateFleetRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const RoboMakerRequest::Action action, CreateFleetRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFleetRequest
 * class' copy constructor.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const CreateFleetRequestPrivate &other, CreateFleetRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
