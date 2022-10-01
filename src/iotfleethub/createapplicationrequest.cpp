// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationrequest.h"
#include "createapplicationrequest_p.h"
#include "createapplicationresponse.h"
#include "iotfleethubrequest_p.h"

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::CreateApplicationRequest
 * \brief The CreateApplicationRequest class provides an interface for IoTFleetHub CreateApplication requests.
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
 * \sa IoTFleetHubClient::createApplication
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationRequest::CreateApplicationRequest(const CreateApplicationRequest &other)
    : IoTFleetHubRequest(new CreateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationRequest object.
 */
CreateApplicationRequest::CreateApplicationRequest()
    : IoTFleetHubRequest(new CreateApplicationRequestPrivate(IoTFleetHubRequest::CreateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTFleetHub::CreateApplicationRequestPrivate
 * \brief The CreateApplicationRequestPrivate class provides private implementation for CreateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a CreateApplicationRequestPrivate object for IoTFleetHub \a action,
 * with public implementation \a q.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const IoTFleetHubRequest::Action action, CreateApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationRequest
 * class' copy constructor.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const CreateApplicationRequestPrivate &other, CreateApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(other, q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
