// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebaiduchannelrequest.h"
#include "deletebaiduchannelrequest_p.h"
#include "deletebaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelRequest
 * \brief The DeleteBaiduChannelRequest class provides an interface for Pinpoint DeleteBaiduChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteBaiduChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBaiduChannelRequest::DeleteBaiduChannelRequest(const DeleteBaiduChannelRequest &other)
    : PinpointRequest(new DeleteBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBaiduChannelRequest object.
 */
DeleteBaiduChannelRequest::DeleteBaiduChannelRequest()
    : PinpointRequest(new DeleteBaiduChannelRequestPrivate(PinpointRequest::DeleteBaiduChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBaiduChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBaiduChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBaiduChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelRequestPrivate
 * \brief The DeleteBaiduChannelRequestPrivate class provides private implementation for DeleteBaiduChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteBaiduChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteBaiduChannelRequestPrivate::DeleteBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteBaiduChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBaiduChannelRequest
 * class' copy constructor.
 */
DeleteBaiduChannelRequestPrivate::DeleteBaiduChannelRequestPrivate(
    const DeleteBaiduChannelRequestPrivate &other, DeleteBaiduChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
