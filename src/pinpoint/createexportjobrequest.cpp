/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createexportjobrequest.h"
#include "createexportjobrequest_p.h"
#include "createexportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateExportJobRequest
 * \brief The CreateExportJobRequest class provides an interface for Pinpoint CreateExportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::createExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExportJobRequest::CreateExportJobRequest(const CreateExportJobRequest &other)
    : PinpointRequest(new CreateExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExportJobRequest object.
 */
CreateExportJobRequest::CreateExportJobRequest()
    : PinpointRequest(new CreateExportJobRequestPrivate(PinpointRequest::CreateExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateExportJobRequestPrivate
 * \brief The CreateExportJobRequestPrivate class provides private implementation for CreateExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateExportJobRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateExportJobRequestPrivate::CreateExportJobRequestPrivate(
    const PinpointRequest::Action action, CreateExportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExportJobRequest
 * class' copy constructor.
 */
CreateExportJobRequestPrivate::CreateExportJobRequestPrivate(
    const CreateExportJobRequestPrivate &other, CreateExportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
