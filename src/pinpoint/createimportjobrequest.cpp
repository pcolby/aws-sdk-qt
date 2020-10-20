/*
    Copyright 2013-2020 Paul Colby

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

#include "createimportjobrequest.h"
#include "createimportjobrequest_p.h"
#include "createimportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateImportJobRequest
 * \brief The CreateImportJobRequest class provides an interface for Pinpoint CreateImportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImportJobRequest::CreateImportJobRequest(const CreateImportJobRequest &other)
    : PinpointRequest(new CreateImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImportJobRequest object.
 */
CreateImportJobRequest::CreateImportJobRequest()
    : PinpointRequest(new CreateImportJobRequestPrivate(PinpointRequest::CreateImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateImportJobRequestPrivate
 * \brief The CreateImportJobRequestPrivate class provides private implementation for CreateImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateImportJobRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const PinpointRequest::Action action, CreateImportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImportJobRequest
 * class' copy constructor.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const CreateImportJobRequestPrivate &other, CreateImportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
