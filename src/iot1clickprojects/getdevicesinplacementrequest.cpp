// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicesinplacementrequest.h"
#include "getdevicesinplacementrequest_p.h"
#include "getdevicesinplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementRequest
 * \brief The GetDevicesInPlacementRequest class provides an interface for IoT1ClickProjects GetDevicesInPlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::getDevicesInPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicesInPlacementRequest::GetDevicesInPlacementRequest(const GetDevicesInPlacementRequest &other)
    : IoT1ClickProjectsRequest(new GetDevicesInPlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicesInPlacementRequest object.
 */
GetDevicesInPlacementRequest::GetDevicesInPlacementRequest()
    : IoT1ClickProjectsRequest(new GetDevicesInPlacementRequestPrivate(IoT1ClickProjectsRequest::GetDevicesInPlacementAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicesInPlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicesInPlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicesInPlacementRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicesInPlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementRequestPrivate
 * \brief The GetDevicesInPlacementRequestPrivate class provides private implementation for GetDevicesInPlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a GetDevicesInPlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
GetDevicesInPlacementRequestPrivate::GetDevicesInPlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, GetDevicesInPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicesInPlacementRequest
 * class' copy constructor.
 */
GetDevicesInPlacementRequestPrivate::GetDevicesInPlacementRequestPrivate(
    const GetDevicesInPlacementRequestPrivate &other, GetDevicesInPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
