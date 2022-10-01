// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationsrequest.h"
#include "listapplicationsrequest_p.h"
#include "listapplicationsresponse.h"
#include "iotfleethubrequest_p.h"

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::ListApplicationsRequest
 * \brief The ListApplicationsRequest class provides an interface for IoTFleetHub ListApplications requests.
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
 * \sa IoTFleetHubClient::listApplications
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationsRequest::ListApplicationsRequest(const ListApplicationsRequest &other)
    : IoTFleetHubRequest(new ListApplicationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationsRequest object.
 */
ListApplicationsRequest::ListApplicationsRequest()
    : IoTFleetHubRequest(new ListApplicationsRequestPrivate(IoTFleetHubRequest::ListApplicationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTFleetHub::ListApplicationsRequestPrivate
 * \brief The ListApplicationsRequestPrivate class provides private implementation for ListApplicationsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a ListApplicationsRequestPrivate object for IoTFleetHub \a action,
 * with public implementation \a q.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const IoTFleetHubRequest::Action action, ListApplicationsRequest * const q)
    : IoTFleetHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationsRequest
 * class' copy constructor.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const ListApplicationsRequestPrivate &other, ListApplicationsRequest * const q)
    : IoTFleetHubRequestPrivate(other, q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
