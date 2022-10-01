// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsuiterunsrequest.h"
#include "listsuiterunsrequest_p.h"
#include "listsuiterunsresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::ListSuiteRunsRequest
 * \brief The ListSuiteRunsRequest class provides an interface for IotDeviceAdvisor ListSuiteRuns requests.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 *
 * \sa IotDeviceAdvisorClient::listSuiteRuns
 */

/*!
 * Constructs a copy of \a other.
 */
ListSuiteRunsRequest::ListSuiteRunsRequest(const ListSuiteRunsRequest &other)
    : IotDeviceAdvisorRequest(new ListSuiteRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSuiteRunsRequest object.
 */
ListSuiteRunsRequest::ListSuiteRunsRequest()
    : IotDeviceAdvisorRequest(new ListSuiteRunsRequestPrivate(IotDeviceAdvisorRequest::ListSuiteRunsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSuiteRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSuiteRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSuiteRunsRequest::response(QNetworkReply * const reply) const
{
    return new ListSuiteRunsResponse(*this, reply);
}

/*!
 * \class QtAws::IotDeviceAdvisor::ListSuiteRunsRequestPrivate
 * \brief The ListSuiteRunsRequestPrivate class provides private implementation for ListSuiteRunsRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a ListSuiteRunsRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
ListSuiteRunsRequestPrivate::ListSuiteRunsRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, ListSuiteRunsRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSuiteRunsRequest
 * class' copy constructor.
 */
ListSuiteRunsRequestPrivate::ListSuiteRunsRequestPrivate(
    const ListSuiteRunsRequestPrivate &other, ListSuiteRunsRequest * const q)
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
