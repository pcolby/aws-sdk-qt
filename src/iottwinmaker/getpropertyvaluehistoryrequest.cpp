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

#include "getpropertyvaluehistoryrequest.h"
#include "getpropertyvaluehistoryrequest_p.h"
#include "getpropertyvaluehistoryresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueHistoryRequest
 * \brief The GetPropertyValueHistoryRequest class provides an interface for IoTTwinMaker GetPropertyValueHistory requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getPropertyValueHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetPropertyValueHistoryRequest::GetPropertyValueHistoryRequest(const GetPropertyValueHistoryRequest &other)
    : IoTTwinMakerRequest(new GetPropertyValueHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPropertyValueHistoryRequest object.
 */
GetPropertyValueHistoryRequest::GetPropertyValueHistoryRequest()
    : IoTTwinMakerRequest(new GetPropertyValueHistoryRequestPrivate(IoTTwinMakerRequest::GetPropertyValueHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetPropertyValueHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPropertyValueHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPropertyValueHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetPropertyValueHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueHistoryRequestPrivate
 * \brief The GetPropertyValueHistoryRequestPrivate class provides private implementation for GetPropertyValueHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetPropertyValueHistoryRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
GetPropertyValueHistoryRequestPrivate::GetPropertyValueHistoryRequestPrivate(
    const IoTTwinMakerRequest::Action action, GetPropertyValueHistoryRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPropertyValueHistoryRequest
 * class' copy constructor.
 */
GetPropertyValueHistoryRequestPrivate::GetPropertyValueHistoryRequestPrivate(
    const GetPropertyValueHistoryRequestPrivate &other, GetPropertyValueHistoryRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
