// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspacerequest.h"
#include "createworkspacerequest_p.h"
#include "createworkspaceresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateWorkspaceRequest
 * \brief The CreateWorkspaceRequest class provides an interface for IoTTwinMaker CreateWorkspace requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkspaceRequest::CreateWorkspaceRequest(const CreateWorkspaceRequest &other)
    : IoTTwinMakerRequest(new CreateWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkspaceRequest object.
 */
CreateWorkspaceRequest::CreateWorkspaceRequest()
    : IoTTwinMakerRequest(new CreateWorkspaceRequestPrivate(IoTTwinMakerRequest::CreateWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::CreateWorkspaceRequestPrivate
 * \brief The CreateWorkspaceRequestPrivate class provides private implementation for CreateWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateWorkspaceRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
CreateWorkspaceRequestPrivate::CreateWorkspaceRequestPrivate(
    const IoTTwinMakerRequest::Action action, CreateWorkspaceRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspaceRequest
 * class' copy constructor.
 */
CreateWorkspaceRequestPrivate::CreateWorkspaceRequestPrivate(
    const CreateWorkspaceRequestPrivate &other, CreateWorkspaceRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
