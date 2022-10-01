// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevoicetemplaterequest.h"
#include "updatevoicetemplaterequest_p.h"
#include "updatevoicetemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateRequest
 * \brief The UpdateVoiceTemplateRequest class provides an interface for Pinpoint UpdateVoiceTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateVoiceTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVoiceTemplateRequest::UpdateVoiceTemplateRequest(const UpdateVoiceTemplateRequest &other)
    : PinpointRequest(new UpdateVoiceTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVoiceTemplateRequest object.
 */
UpdateVoiceTemplateRequest::UpdateVoiceTemplateRequest()
    : PinpointRequest(new UpdateVoiceTemplateRequestPrivate(PinpointRequest::UpdateVoiceTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVoiceTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVoiceTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVoiceTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVoiceTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateRequestPrivate
 * \brief The UpdateVoiceTemplateRequestPrivate class provides private implementation for UpdateVoiceTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateVoiceTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateVoiceTemplateRequestPrivate::UpdateVoiceTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVoiceTemplateRequest
 * class' copy constructor.
 */
UpdateVoiceTemplateRequestPrivate::UpdateVoiceTemplateRequestPrivate(
    const UpdateVoiceTemplateRequestPrivate &other, UpdateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
