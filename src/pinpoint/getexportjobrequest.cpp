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

#include "getexportjobrequest.h"
#include "getexportjobrequest_p.h"
#include "getexportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetExportJobRequest
 * \brief The GetExportJobRequest class provides an interface for Pinpoint GetExportJob requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetExportJobRequest::GetExportJobRequest(const GetExportJobRequest &other)
    : PinpointRequest(new GetExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExportJobRequest object.
 */
GetExportJobRequest::GetExportJobRequest()
    : PinpointRequest(new GetExportJobRequestPrivate(PinpointRequest::GetExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportJobRequest::response(QNetworkReply * const reply) const
{
    return new GetExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetExportJobRequestPrivate
 * \brief The GetExportJobRequestPrivate class provides private implementation for GetExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetExportJobRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetExportJobRequestPrivate::GetExportJobRequestPrivate(
    const PinpointRequest::Action action, GetExportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExportJobRequest
 * class' copy constructor.
 */
GetExportJobRequestPrivate::GetExportJobRequestPrivate(
    const GetExportJobRequestPrivate &other, GetExportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
