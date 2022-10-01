// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcomponenttypesrequest.h"
#include "listcomponenttypesrequest_p.h"
#include "listcomponenttypesresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListComponentTypesRequest
 * \brief The ListComponentTypesRequest class provides an interface for IoTTwinMaker ListComponentTypes requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listComponentTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentTypesRequest::ListComponentTypesRequest(const ListComponentTypesRequest &other)
    : IoTTwinMakerRequest(new ListComponentTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentTypesRequest object.
 */
ListComponentTypesRequest::ListComponentTypesRequest()
    : IoTTwinMakerRequest(new ListComponentTypesRequestPrivate(IoTTwinMakerRequest::ListComponentTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentTypesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::ListComponentTypesRequestPrivate
 * \brief The ListComponentTypesRequestPrivate class provides private implementation for ListComponentTypesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListComponentTypesRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
ListComponentTypesRequestPrivate::ListComponentTypesRequestPrivate(
    const IoTTwinMakerRequest::Action action, ListComponentTypesRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentTypesRequest
 * class' copy constructor.
 */
ListComponentTypesRequestPrivate::ListComponentTypesRequestPrivate(
    const ListComponentTypesRequestPrivate &other, ListComponentTypesRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
