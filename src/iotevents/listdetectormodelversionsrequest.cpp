// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdetectormodelversionsrequest.h"
#include "listdetectormodelversionsrequest_p.h"
#include "listdetectormodelversionsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListDetectorModelVersionsRequest
 * \brief The ListDetectorModelVersionsRequest class provides an interface for IoTEvents ListDetectorModelVersions requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listDetectorModelVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDetectorModelVersionsRequest::ListDetectorModelVersionsRequest(const ListDetectorModelVersionsRequest &other)
    : IoTEventsRequest(new ListDetectorModelVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDetectorModelVersionsRequest object.
 */
ListDetectorModelVersionsRequest::ListDetectorModelVersionsRequest()
    : IoTEventsRequest(new ListDetectorModelVersionsRequestPrivate(IoTEventsRequest::ListDetectorModelVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorModelVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDetectorModelVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorModelVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorModelVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListDetectorModelVersionsRequestPrivate
 * \brief The ListDetectorModelVersionsRequestPrivate class provides private implementation for ListDetectorModelVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListDetectorModelVersionsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListDetectorModelVersionsRequestPrivate::ListDetectorModelVersionsRequestPrivate(
    const IoTEventsRequest::Action action, ListDetectorModelVersionsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorModelVersionsRequest
 * class' copy constructor.
 */
ListDetectorModelVersionsRequestPrivate::ListDetectorModelVersionsRequestPrivate(
    const ListDetectorModelVersionsRequestPrivate &other, ListDetectorModelVersionsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
