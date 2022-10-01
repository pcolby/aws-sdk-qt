// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createentityrequest.h"
#include "createentityrequest_p.h"
#include "createentityresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateEntityRequest
 * \brief The CreateEntityRequest class provides an interface for IoTTwinMaker CreateEntity requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createEntity
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEntityRequest::CreateEntityRequest(const CreateEntityRequest &other)
    : IoTTwinMakerRequest(new CreateEntityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEntityRequest object.
 */
CreateEntityRequest::CreateEntityRequest()
    : IoTTwinMakerRequest(new CreateEntityRequestPrivate(IoTTwinMakerRequest::CreateEntityAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEntityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEntityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEntityRequest::response(QNetworkReply * const reply) const
{
    return new CreateEntityResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::CreateEntityRequestPrivate
 * \brief The CreateEntityRequestPrivate class provides private implementation for CreateEntityRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateEntityRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
CreateEntityRequestPrivate::CreateEntityRequestPrivate(
    const IoTTwinMakerRequest::Action action, CreateEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEntityRequest
 * class' copy constructor.
 */
CreateEntityRequestPrivate::CreateEntityRequestPrivate(
    const CreateEntityRequestPrivate &other, CreateEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
