// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdetectormodelsrequest.h"
#include "listdetectormodelsrequest_p.h"
#include "listdetectormodelsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListDetectorModelsRequest
 * \brief The ListDetectorModelsRequest class provides an interface for IoTEvents ListDetectorModels requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listDetectorModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListDetectorModelsRequest::ListDetectorModelsRequest(const ListDetectorModelsRequest &other)
    : IoTEventsRequest(new ListDetectorModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDetectorModelsRequest object.
 */
ListDetectorModelsRequest::ListDetectorModelsRequest()
    : IoTEventsRequest(new ListDetectorModelsRequestPrivate(IoTEventsRequest::ListDetectorModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDetectorModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorModelsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListDetectorModelsRequestPrivate
 * \brief The ListDetectorModelsRequestPrivate class provides private implementation for ListDetectorModelsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListDetectorModelsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListDetectorModelsRequestPrivate::ListDetectorModelsRequestPrivate(
    const IoTEventsRequest::Action action, ListDetectorModelsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorModelsRequest
 * class' copy constructor.
 */
ListDetectorModelsRequestPrivate::ListDetectorModelsRequestPrivate(
    const ListDetectorModelsRequestPrivate &other, ListDetectorModelsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
