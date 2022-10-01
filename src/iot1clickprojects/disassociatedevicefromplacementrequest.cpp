// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatedevicefromplacementrequest.h"
#include "disassociatedevicefromplacementrequest_p.h"
#include "disassociatedevicefromplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DisassociateDeviceFromPlacementRequest
 * \brief The DisassociateDeviceFromPlacementRequest class provides an interface for IoT1ClickProjects DisassociateDeviceFromPlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::disassociateDeviceFromPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateDeviceFromPlacementRequest::DisassociateDeviceFromPlacementRequest(const DisassociateDeviceFromPlacementRequest &other)
    : IoT1ClickProjectsRequest(new DisassociateDeviceFromPlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateDeviceFromPlacementRequest object.
 */
DisassociateDeviceFromPlacementRequest::DisassociateDeviceFromPlacementRequest()
    : IoT1ClickProjectsRequest(new DisassociateDeviceFromPlacementRequestPrivate(IoT1ClickProjectsRequest::DisassociateDeviceFromPlacementAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateDeviceFromPlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateDeviceFromPlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDeviceFromPlacementRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDeviceFromPlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::DisassociateDeviceFromPlacementRequestPrivate
 * \brief The DisassociateDeviceFromPlacementRequestPrivate class provides private implementation for DisassociateDeviceFromPlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DisassociateDeviceFromPlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
DisassociateDeviceFromPlacementRequestPrivate::DisassociateDeviceFromPlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, DisassociateDeviceFromPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDeviceFromPlacementRequest
 * class' copy constructor.
 */
DisassociateDeviceFromPlacementRequestPrivate::DisassociateDeviceFromPlacementRequestPrivate(
    const DisassociateDeviceFromPlacementRequestPrivate &other, DisassociateDeviceFromPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
