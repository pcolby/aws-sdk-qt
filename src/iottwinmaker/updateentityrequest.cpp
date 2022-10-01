// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateentityrequest.h"
#include "updateentityrequest_p.h"
#include "updateentityresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateEntityRequest
 * \brief The UpdateEntityRequest class provides an interface for IoTTwinMaker UpdateEntity requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateEntity
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEntityRequest::UpdateEntityRequest(const UpdateEntityRequest &other)
    : IoTTwinMakerRequest(new UpdateEntityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEntityRequest object.
 */
UpdateEntityRequest::UpdateEntityRequest()
    : IoTTwinMakerRequest(new UpdateEntityRequestPrivate(IoTTwinMakerRequest::UpdateEntityAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEntityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEntityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEntityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEntityResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateEntityRequestPrivate
 * \brief The UpdateEntityRequestPrivate class provides private implementation for UpdateEntityRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateEntityRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
UpdateEntityRequestPrivate::UpdateEntityRequestPrivate(
    const IoTTwinMakerRequest::Action action, UpdateEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEntityRequest
 * class' copy constructor.
 */
UpdateEntityRequestPrivate::UpdateEntityRequestPrivate(
    const UpdateEntityRequestPrivate &other, UpdateEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
