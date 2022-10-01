// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putloggingoptionsrequest.h"
#include "putloggingoptionsrequest_p.h"
#include "putloggingoptionsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsRequest
 * \brief The PutLoggingOptionsRequest class provides an interface for IoTEvents PutLoggingOptions requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::putLoggingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutLoggingOptionsRequest::PutLoggingOptionsRequest(const PutLoggingOptionsRequest &other)
    : IoTEventsRequest(new PutLoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLoggingOptionsRequest object.
 */
PutLoggingOptionsRequest::PutLoggingOptionsRequest()
    : IoTEventsRequest(new PutLoggingOptionsRequestPrivate(IoTEventsRequest::PutLoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutLoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLoggingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutLoggingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsRequestPrivate
 * \brief The PutLoggingOptionsRequestPrivate class provides private implementation for PutLoggingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a PutLoggingOptionsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
PutLoggingOptionsRequestPrivate::PutLoggingOptionsRequestPrivate(
    const IoTEventsRequest::Action action, PutLoggingOptionsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLoggingOptionsRequest
 * class' copy constructor.
 */
PutLoggingOptionsRequestPrivate::PutLoggingOptionsRequestPrivate(
    const PutLoggingOptionsRequestPrivate &other, PutLoggingOptionsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
