// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedetectormodelrequest.h"
#include "deletedetectormodelrequest_p.h"
#include "deletedetectormodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteDetectorModelRequest
 * \brief The DeleteDetectorModelRequest class provides an interface for IoTEvents DeleteDetectorModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::deleteDetectorModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDetectorModelRequest::DeleteDetectorModelRequest(const DeleteDetectorModelRequest &other)
    : IoTEventsRequest(new DeleteDetectorModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDetectorModelRequest object.
 */
DeleteDetectorModelRequest::DeleteDetectorModelRequest()
    : IoTEventsRequest(new DeleteDetectorModelRequestPrivate(IoTEventsRequest::DeleteDetectorModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDetectorModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDetectorModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDetectorModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDetectorModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DeleteDetectorModelRequestPrivate
 * \brief The DeleteDetectorModelRequestPrivate class provides private implementation for DeleteDetectorModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteDetectorModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DeleteDetectorModelRequestPrivate::DeleteDetectorModelRequestPrivate(
    const IoTEventsRequest::Action action, DeleteDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDetectorModelRequest
 * class' copy constructor.
 */
DeleteDetectorModelRequestPrivate::DeleteDetectorModelRequestPrivate(
    const DeleteDetectorModelRequestPrivate &other, DeleteDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
