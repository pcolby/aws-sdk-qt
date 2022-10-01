// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationrequest.h"
#include "deleteapplicationrequest_p.h"
#include "deleteapplicationresponse.h"
#include "iotfleethubrequest_p.h"

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::DeleteApplicationRequest
 * \brief The DeleteApplicationRequest class provides an interface for IoTFleetHub DeleteApplication requests.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 *
 * \sa IoTFleetHubClient::deleteApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationRequest::DeleteApplicationRequest(const DeleteApplicationRequest &other)
    : IoTFleetHubRequest(new DeleteApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationRequest object.
 */
DeleteApplicationRequest::DeleteApplicationRequest()
    : IoTFleetHubRequest(new DeleteApplicationRequestPrivate(IoTFleetHubRequest::DeleteApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTFleetHub::DeleteApplicationRequestPrivate
 * \brief The DeleteApplicationRequestPrivate class provides private implementation for DeleteApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a DeleteApplicationRequestPrivate object for IoTFleetHub \a action,
 * with public implementation \a q.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const IoTFleetHubRequest::Action action, DeleteApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationRequest
 * class' copy constructor.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const DeleteApplicationRequestPrivate &other, DeleteApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(other, q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
