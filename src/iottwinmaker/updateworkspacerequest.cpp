// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkspacerequest.h"
#include "updateworkspacerequest_p.h"
#include "updateworkspaceresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateWorkspaceRequest
 * \brief The UpdateWorkspaceRequest class provides an interface for IoTTwinMaker UpdateWorkspace requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkspaceRequest::UpdateWorkspaceRequest(const UpdateWorkspaceRequest &other)
    : IoTTwinMakerRequest(new UpdateWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkspaceRequest object.
 */
UpdateWorkspaceRequest::UpdateWorkspaceRequest()
    : IoTTwinMakerRequest(new UpdateWorkspaceRequestPrivate(IoTTwinMakerRequest::UpdateWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateWorkspaceRequestPrivate
 * \brief The UpdateWorkspaceRequestPrivate class provides private implementation for UpdateWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateWorkspaceRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
UpdateWorkspaceRequestPrivate::UpdateWorkspaceRequestPrivate(
    const IoTTwinMakerRequest::Action action, UpdateWorkspaceRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkspaceRequest
 * class' copy constructor.
 */
UpdateWorkspaceRequestPrivate::UpdateWorkspaceRequestPrivate(
    const UpdateWorkspaceRequestPrivate &other, UpdateWorkspaceRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
