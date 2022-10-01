// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedevicewithplacementrequest.h"
#include "associatedevicewithplacementrequest_p.h"
#include "associatedevicewithplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementRequest
 * \brief The AssociateDeviceWithPlacementRequest class provides an interface for IoT1ClickProjects AssociateDeviceWithPlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::associateDeviceWithPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDeviceWithPlacementRequest::AssociateDeviceWithPlacementRequest(const AssociateDeviceWithPlacementRequest &other)
    : IoT1ClickProjectsRequest(new AssociateDeviceWithPlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDeviceWithPlacementRequest object.
 */
AssociateDeviceWithPlacementRequest::AssociateDeviceWithPlacementRequest()
    : IoT1ClickProjectsRequest(new AssociateDeviceWithPlacementRequestPrivate(IoT1ClickProjectsRequest::AssociateDeviceWithPlacementAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDeviceWithPlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDeviceWithPlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDeviceWithPlacementRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDeviceWithPlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementRequestPrivate
 * \brief The AssociateDeviceWithPlacementRequestPrivate class provides private implementation for AssociateDeviceWithPlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a AssociateDeviceWithPlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
AssociateDeviceWithPlacementRequestPrivate::AssociateDeviceWithPlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, AssociateDeviceWithPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDeviceWithPlacementRequest
 * class' copy constructor.
 */
AssociateDeviceWithPlacementRequestPrivate::AssociateDeviceWithPlacementRequestPrivate(
    const AssociateDeviceWithPlacementRequestPrivate &other, AssociateDeviceWithPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
