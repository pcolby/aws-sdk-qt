// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepushtemplaterequest.h"
#include "updatepushtemplaterequest_p.h"
#include "updatepushtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateRequest
 * \brief The UpdatePushTemplateRequest class provides an interface for Pinpoint UpdatePushTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updatePushTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePushTemplateRequest::UpdatePushTemplateRequest(const UpdatePushTemplateRequest &other)
    : PinpointRequest(new UpdatePushTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePushTemplateRequest object.
 */
UpdatePushTemplateRequest::UpdatePushTemplateRequest()
    : PinpointRequest(new UpdatePushTemplateRequestPrivate(PinpointRequest::UpdatePushTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePushTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePushTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePushTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePushTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateRequestPrivate
 * \brief The UpdatePushTemplateRequestPrivate class provides private implementation for UpdatePushTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdatePushTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdatePushTemplateRequestPrivate::UpdatePushTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdatePushTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePushTemplateRequest
 * class' copy constructor.
 */
UpdatePushTemplateRequestPrivate::UpdatePushTemplateRequestPrivate(
    const UpdatePushTemplateRequestPrivate &other, UpdatePushTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
