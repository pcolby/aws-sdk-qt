// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getscenerequest.h"
#include "getscenerequest_p.h"
#include "getsceneresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetSceneRequest
 * \brief The GetSceneRequest class provides an interface for IoTTwinMaker GetScene requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getScene
 */

/*!
 * Constructs a copy of \a other.
 */
GetSceneRequest::GetSceneRequest(const GetSceneRequest &other)
    : IoTTwinMakerRequest(new GetSceneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSceneRequest object.
 */
GetSceneRequest::GetSceneRequest()
    : IoTTwinMakerRequest(new GetSceneRequestPrivate(IoTTwinMakerRequest::GetSceneAction, this))
{

}

/*!
 * \reimp
 */
bool GetSceneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSceneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSceneRequest::response(QNetworkReply * const reply) const
{
    return new GetSceneResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::GetSceneRequestPrivate
 * \brief The GetSceneRequestPrivate class provides private implementation for GetSceneRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetSceneRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
GetSceneRequestPrivate::GetSceneRequestPrivate(
    const IoTTwinMakerRequest::Action action, GetSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSceneRequest
 * class' copy constructor.
 */
GetSceneRequestPrivate::GetSceneRequestPrivate(
    const GetSceneRequestPrivate &other, GetSceneRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
