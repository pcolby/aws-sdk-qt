// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkspacerequest.h"
#include "getworkspacerequest_p.h"
#include "getworkspaceresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetWorkspaceRequest
 * \brief The GetWorkspaceRequest class provides an interface for IoTTwinMaker GetWorkspace requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkspaceRequest::GetWorkspaceRequest(const GetWorkspaceRequest &other)
    : IoTTwinMakerRequest(new GetWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkspaceRequest object.
 */
GetWorkspaceRequest::GetWorkspaceRequest()
    : IoTTwinMakerRequest(new GetWorkspaceRequestPrivate(IoTTwinMakerRequest::GetWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::GetWorkspaceRequestPrivate
 * \brief The GetWorkspaceRequestPrivate class provides private implementation for GetWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetWorkspaceRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
GetWorkspaceRequestPrivate::GetWorkspaceRequestPrivate(
    const IoTTwinMakerRequest::Action action, GetWorkspaceRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkspaceRequest
 * class' copy constructor.
 */
GetWorkspaceRequestPrivate::GetWorkspaceRequestPrivate(
    const GetWorkspaceRequestPrivate &other, GetWorkspaceRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
