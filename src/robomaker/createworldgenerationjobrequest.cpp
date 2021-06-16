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

#include "createworldgenerationjobrequest.h"
#include "createworldgenerationjobrequest_p.h"
#include "createworldgenerationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldGenerationJobRequest
 * \brief The CreateWorldGenerationJobRequest class provides an interface for RoboMaker CreateWorldGenerationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldGenerationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorldGenerationJobRequest::CreateWorldGenerationJobRequest(const CreateWorldGenerationJobRequest &other)
    : RoboMakerRequest(new CreateWorldGenerationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorldGenerationJobRequest object.
 */
CreateWorldGenerationJobRequest::CreateWorldGenerationJobRequest()
    : RoboMakerRequest(new CreateWorldGenerationJobRequestPrivate(RoboMakerRequest::CreateWorldGenerationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorldGenerationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorldGenerationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorldGenerationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorldGenerationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateWorldGenerationJobRequestPrivate
 * \brief The CreateWorldGenerationJobRequestPrivate class provides private implementation for CreateWorldGenerationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldGenerationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateWorldGenerationJobRequestPrivate::CreateWorldGenerationJobRequestPrivate(
    const RoboMakerRequest::Action action, CreateWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorldGenerationJobRequest
 * class' copy constructor.
 */
CreateWorldGenerationJobRequestPrivate::CreateWorldGenerationJobRequestPrivate(
    const CreateWorldGenerationJobRequestPrivate &other, CreateWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
