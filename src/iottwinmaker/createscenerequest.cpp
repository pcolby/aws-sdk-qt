// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createscenerequest.h"
#include "createscenerequest_p.h"
#include "createsceneresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateSceneRequest
 * \brief The CreateSceneRequest class provides an interface for IoTTwinMaker CreateScene requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createScene
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSceneRequest::CreateSceneRequest(const CreateSceneRequest &other)
    : IoTTwinMakerRequest(new CreateSceneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSceneRequest object.
 */
CreateSceneRequest::CreateSceneRequest()
    : IoTTwinMakerRequest(new CreateSceneRequestPrivate(IoTTwinMakerRequest::CreateSceneAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSceneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSceneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSceneRequest::response(QNetworkReply * const reply) const
{
    return new CreateSceneResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::CreateSceneRequestPrivate
 * \brief The CreateSceneRequestPrivate class provides private implementation for CreateSceneRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateSceneRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
CreateSceneRequestPrivate::CreateSceneRequestPrivate(
    const IoTTwinMakerRequest::Action action, CreateSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSceneRequest
 * class' copy constructor.
 */
CreateSceneRequestPrivate::CreateSceneRequestPrivate(
    const CreateSceneRequestPrivate &other, CreateSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
