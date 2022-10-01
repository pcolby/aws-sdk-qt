// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigurationsetrequest.h"
#include "deleteconfigurationsetrequest_p.h"
#include "deleteconfigurationsetresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::DeleteConfigurationSetRequest
 * \brief The DeleteConfigurationSetRequest class provides an interface for PinpointSmsVoice DeleteConfigurationSet requests.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::deleteConfigurationSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConfigurationSetRequest::DeleteConfigurationSetRequest(const DeleteConfigurationSetRequest &other)
    : PinpointSmsVoiceRequest(new DeleteConfigurationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConfigurationSetRequest object.
 */
DeleteConfigurationSetRequest::DeleteConfigurationSetRequest()
    : PinpointSmsVoiceRequest(new DeleteConfigurationSetRequestPrivate(PinpointSmsVoiceRequest::DeleteConfigurationSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConfigurationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConfigurationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationSetResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoice::DeleteConfigurationSetRequestPrivate
 * \brief The DeleteConfigurationSetRequestPrivate class provides private implementation for DeleteConfigurationSetRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a DeleteConfigurationSetRequestPrivate object for PinpointSmsVoice \a action,
 * with public implementation \a q.
 */
DeleteConfigurationSetRequestPrivate::DeleteConfigurationSetRequestPrivate(
    const PinpointSmsVoiceRequest::Action action, DeleteConfigurationSetRequest * const q)
    : PinpointSmsVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationSetRequest
 * class' copy constructor.
 */
DeleteConfigurationSetRequestPrivate::DeleteConfigurationSetRequestPrivate(
    const DeleteConfigurationSetRequestPrivate &other, DeleteConfigurationSetRequest * const q)
    : PinpointSmsVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoice
} // namespace QtAws
