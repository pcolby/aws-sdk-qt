// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listscenesrequest.h"
#include "listscenesrequest_p.h"
#include "listscenesresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListScenesRequest
 * \brief The ListScenesRequest class provides an interface for IoTTwinMaker ListScenes requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listScenes
 */

/*!
 * Constructs a copy of \a other.
 */
ListScenesRequest::ListScenesRequest(const ListScenesRequest &other)
    : IoTTwinMakerRequest(new ListScenesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListScenesRequest object.
 */
ListScenesRequest::ListScenesRequest()
    : IoTTwinMakerRequest(new ListScenesRequestPrivate(IoTTwinMakerRequest::ListScenesAction, this))
{

}

/*!
 * \reimp
 */
bool ListScenesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListScenesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListScenesRequest::response(QNetworkReply * const reply) const
{
    return new ListScenesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::ListScenesRequestPrivate
 * \brief The ListScenesRequestPrivate class provides private implementation for ListScenesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListScenesRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
ListScenesRequestPrivate::ListScenesRequestPrivate(
    const IoTTwinMakerRequest::Action action, ListScenesRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListScenesRequest
 * class' copy constructor.
 */
ListScenesRequestPrivate::ListScenesRequestPrivate(
    const ListScenesRequestPrivate &other, ListScenesRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
