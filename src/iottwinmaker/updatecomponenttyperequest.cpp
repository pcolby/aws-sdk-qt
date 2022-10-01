// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecomponenttyperequest.h"
#include "updatecomponenttyperequest_p.h"
#include "updatecomponenttyperesponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateComponentTypeRequest
 * \brief The UpdateComponentTypeRequest class provides an interface for IoTTwinMaker UpdateComponentType requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateComponentType
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateComponentTypeRequest::UpdateComponentTypeRequest(const UpdateComponentTypeRequest &other)
    : IoTTwinMakerRequest(new UpdateComponentTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateComponentTypeRequest object.
 */
UpdateComponentTypeRequest::UpdateComponentTypeRequest()
    : IoTTwinMakerRequest(new UpdateComponentTypeRequestPrivate(IoTTwinMakerRequest::UpdateComponentTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateComponentTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateComponentTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateComponentTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateComponentTypeResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateComponentTypeRequestPrivate
 * \brief The UpdateComponentTypeRequestPrivate class provides private implementation for UpdateComponentTypeRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateComponentTypeRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
UpdateComponentTypeRequestPrivate::UpdateComponentTypeRequestPrivate(
    const IoTTwinMakerRequest::Action action, UpdateComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateComponentTypeRequest
 * class' copy constructor.
 */
UpdateComponentTypeRequestPrivate::UpdateComponentTypeRequestPrivate(
    const UpdateComponentTypeRequestPrivate &other, UpdateComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
