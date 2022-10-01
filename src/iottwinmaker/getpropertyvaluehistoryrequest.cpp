// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
