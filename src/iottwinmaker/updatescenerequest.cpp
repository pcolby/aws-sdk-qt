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

#include "updatescenerequest.h"
#include "updatescenerequest_p.h"
#include "updatesceneresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateSceneRequest
 * \brief The UpdateSceneRequest class provides an interface for IoTTwinMaker UpdateScene requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateScene
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSceneRequest::UpdateSceneRequest(const UpdateSceneRequest &other)
    : IoTTwinMakerRequest(new UpdateSceneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSceneRequest object.
 */
UpdateSceneRequest::UpdateSceneRequest()
    : IoTTwinMakerRequest(new UpdateSceneRequestPrivate(IoTTwinMakerRequest::UpdateSceneAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSceneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSceneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSceneRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSceneResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateSceneRequestPrivate
 * \brief The UpdateSceneRequestPrivate class provides private implementation for UpdateSceneRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateSceneRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
UpdateSceneRequestPrivate::UpdateSceneRequestPrivate(
    const IoTTwinMakerRequest::Action action, UpdateSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSceneRequest
 * class' copy constructor.
 */
UpdateSceneRequestPrivate::UpdateSceneRequestPrivate(
    const UpdateSceneRequestPrivate &other, UpdateSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
