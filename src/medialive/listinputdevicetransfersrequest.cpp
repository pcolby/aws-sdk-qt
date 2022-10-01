// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputdevicetransfersrequest.h"
#include "listinputdevicetransfersrequest_p.h"
#include "listinputdevicetransfersresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersRequest
 * \brief The ListInputDeviceTransfersRequest class provides an interface for MediaLive ListInputDeviceTransfers requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputDeviceTransfers
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputDeviceTransfersRequest::ListInputDeviceTransfersRequest(const ListInputDeviceTransfersRequest &other)
    : MediaLiveRequest(new ListInputDeviceTransfersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputDeviceTransfersRequest object.
 */
ListInputDeviceTransfersRequest::ListInputDeviceTransfersRequest()
    : MediaLiveRequest(new ListInputDeviceTransfersRequestPrivate(MediaLiveRequest::ListInputDeviceTransfersAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputDeviceTransfersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputDeviceTransfersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputDeviceTransfersRequest::response(QNetworkReply * const reply) const
{
    return new ListInputDeviceTransfersResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersRequestPrivate
 * \brief The ListInputDeviceTransfersRequestPrivate class provides private implementation for ListInputDeviceTransfersRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputDeviceTransfersRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListInputDeviceTransfersRequestPrivate::ListInputDeviceTransfersRequestPrivate(
    const MediaLiveRequest::Action action, ListInputDeviceTransfersRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputDeviceTransfersRequest
 * class' copy constructor.
 */
ListInputDeviceTransfersRequestPrivate::ListInputDeviceTransfersRequestPrivate(
    const ListInputDeviceTransfersRequestPrivate &other, ListInputDeviceTransfersRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
