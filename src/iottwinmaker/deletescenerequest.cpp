// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletescenerequest.h"
#include "deletescenerequest_p.h"
#include "deletesceneresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::DeleteSceneRequest
 * \brief The DeleteSceneRequest class provides an interface for IoTTwinMaker DeleteScene requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::deleteScene
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSceneRequest::DeleteSceneRequest(const DeleteSceneRequest &other)
    : IoTTwinMakerRequest(new DeleteSceneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSceneRequest object.
 */
DeleteSceneRequest::DeleteSceneRequest()
    : IoTTwinMakerRequest(new DeleteSceneRequestPrivate(IoTTwinMakerRequest::DeleteSceneAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSceneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSceneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSceneRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSceneResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::DeleteSceneRequestPrivate
 * \brief The DeleteSceneRequestPrivate class provides private implementation for DeleteSceneRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a DeleteSceneRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
DeleteSceneRequestPrivate::DeleteSceneRequestPrivate(
    const IoTTwinMakerRequest::Action action, DeleteSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSceneRequest
 * class' copy constructor.
 */
DeleteSceneRequestPrivate::DeleteSceneRequestPrivate(
    const DeleteSceneRequestPrivate &other, DeleteSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
