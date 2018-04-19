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

#include "getimportjobrequest.h"
#include "getimportjobrequest_p.h"
#include "getimportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobRequest
 * \brief The GetImportJobRequest class provides an interface for Pinpoint GetImportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportJobRequest::GetImportJobRequest(const GetImportJobRequest &other)
    : PinpointRequest(new GetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportJobRequest object.
 */
GetImportJobRequest::GetImportJobRequest()
    : PinpointRequest(new GetImportJobRequestPrivate(PinpointRequest::GetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new GetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetImportJobRequestPrivate
 * \brief The GetImportJobRequestPrivate class provides private implementation for GetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a GetImportJobRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const PinpointRequest::Action action, GetImportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportJobRequest
 * class' copy constructor.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const GetImportJobRequestPrivate &other, GetImportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
