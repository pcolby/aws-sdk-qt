// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
