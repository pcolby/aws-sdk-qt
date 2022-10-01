// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebaiduchannelrequest.h"
#include "updatebaiduchannelrequest_p.h"
#include "updatebaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelRequest
 * \brief The UpdateBaiduChannelRequest class provides an interface for Pinpoint UpdateBaiduChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateBaiduChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBaiduChannelRequest::UpdateBaiduChannelRequest(const UpdateBaiduChannelRequest &other)
    : PinpointRequest(new UpdateBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBaiduChannelRequest object.
 */
UpdateBaiduChannelRequest::UpdateBaiduChannelRequest()
    : PinpointRequest(new UpdateBaiduChannelRequestPrivate(PinpointRequest::UpdateBaiduChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBaiduChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBaiduChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBaiduChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelRequestPrivate
 * \brief The UpdateBaiduChannelRequestPrivate class provides private implementation for UpdateBaiduChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateBaiduChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateBaiduChannelRequestPrivate::UpdateBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateBaiduChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBaiduChannelRequest
 * class' copy constructor.
 */
UpdateBaiduChannelRequestPrivate::UpdateBaiduChannelRequestPrivate(
    const UpdateBaiduChannelRequestPrivate &other, UpdateBaiduChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
