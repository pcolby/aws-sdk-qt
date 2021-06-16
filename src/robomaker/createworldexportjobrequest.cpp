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

#include "createworldexportjobrequest.h"
#include "createworldexportjobrequest_p.h"
#include "createworldexportjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldExportJobRequest
 * \brief The CreateWorldExportJobRequest class provides an interface for RoboMaker CreateWorldExportJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorldExportJobRequest::CreateWorldExportJobRequest(const CreateWorldExportJobRequest &other)
    : RoboMakerRequest(new CreateWorldExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorldExportJobRequest object.
 */
CreateWorldExportJobRequest::CreateWorldExportJobRequest()
    : RoboMakerRequest(new CreateWorldExportJobRequestPrivate(RoboMakerRequest::CreateWorldExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorldExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorldExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorldExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorldExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateWorldExportJobRequestPrivate
 * \brief The CreateWorldExportJobRequestPrivate class provides private implementation for CreateWorldExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldExportJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateWorldExportJobRequestPrivate::CreateWorldExportJobRequestPrivate(
    const RoboMakerRequest::Action action, CreateWorldExportJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorldExportJobRequest
 * class' copy constructor.
 */
CreateWorldExportJobRequestPrivate::CreateWorldExportJobRequestPrivate(
    const CreateWorldExportJobRequestPrivate &other, CreateWorldExportJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
