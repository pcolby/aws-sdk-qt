// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesmstemplaterequest.h"
#include "updatesmstemplaterequest_p.h"
#include "updatesmstemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateRequest
 * \brief The UpdateSmsTemplateRequest class provides an interface for Pinpoint UpdateSmsTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSmsTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSmsTemplateRequest::UpdateSmsTemplateRequest(const UpdateSmsTemplateRequest &other)
    : PinpointRequest(new UpdateSmsTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSmsTemplateRequest object.
 */
UpdateSmsTemplateRequest::UpdateSmsTemplateRequest()
    : PinpointRequest(new UpdateSmsTemplateRequestPrivate(PinpointRequest::UpdateSmsTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSmsTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSmsTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSmsTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSmsTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateRequestPrivate
 * \brief The UpdateSmsTemplateRequestPrivate class provides private implementation for UpdateSmsTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateSmsTemplateRequestPrivate::UpdateSmsTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateSmsTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSmsTemplateRequest
 * class' copy constructor.
 */
UpdateSmsTemplateRequestPrivate::UpdateSmsTemplateRequestPrivate(
    const UpdateSmsTemplateRequestPrivate &other, UpdateSmsTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
