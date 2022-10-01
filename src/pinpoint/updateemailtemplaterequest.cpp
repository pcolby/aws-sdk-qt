// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemailtemplaterequest.h"
#include "updateemailtemplaterequest_p.h"
#include "updateemailtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateRequest
 * \brief The UpdateEmailTemplateRequest class provides an interface for Pinpoint UpdateEmailTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEmailTemplateRequest::UpdateEmailTemplateRequest(const UpdateEmailTemplateRequest &other)
    : PinpointRequest(new UpdateEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEmailTemplateRequest object.
 */
UpdateEmailTemplateRequest::UpdateEmailTemplateRequest()
    : PinpointRequest(new UpdateEmailTemplateRequestPrivate(PinpointRequest::UpdateEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateRequestPrivate
 * \brief The UpdateEmailTemplateRequestPrivate class provides private implementation for UpdateEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEmailTemplateRequestPrivate::UpdateEmailTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateEmailTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEmailTemplateRequest
 * class' copy constructor.
 */
UpdateEmailTemplateRequestPrivate::UpdateEmailTemplateRequestPrivate(
    const UpdateEmailTemplateRequestPrivate &other, UpdateEmailTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
