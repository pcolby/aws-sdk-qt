// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkspacesrequest.h"
#include "listworkspacesrequest_p.h"
#include "listworkspacesresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListWorkspacesRequest
 * \brief The ListWorkspacesRequest class provides an interface for IoTTwinMaker ListWorkspaces requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkspacesRequest::ListWorkspacesRequest(const ListWorkspacesRequest &other)
    : IoTTwinMakerRequest(new ListWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkspacesRequest object.
 */
ListWorkspacesRequest::ListWorkspacesRequest()
    : IoTTwinMakerRequest(new ListWorkspacesRequestPrivate(IoTTwinMakerRequest::ListWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::ListWorkspacesRequestPrivate
 * \brief The ListWorkspacesRequestPrivate class provides private implementation for ListWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListWorkspacesRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const IoTTwinMakerRequest::Action action, ListWorkspacesRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkspacesRequest
 * class' copy constructor.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const ListWorkspacesRequestPrivate &other, ListWorkspacesRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
