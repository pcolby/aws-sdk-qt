// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinapptemplaterequest.h"
#include "updateinapptemplaterequest_p.h"
#include "updateinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateRequest
 * \brief The UpdateInAppTemplateRequest class provides an interface for Pinpoint UpdateInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInAppTemplateRequest::UpdateInAppTemplateRequest(const UpdateInAppTemplateRequest &other)
    : PinpointRequest(new UpdateInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInAppTemplateRequest object.
 */
UpdateInAppTemplateRequest::UpdateInAppTemplateRequest()
    : PinpointRequest(new UpdateInAppTemplateRequestPrivate(PinpointRequest::UpdateInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateRequestPrivate
 * \brief The UpdateInAppTemplateRequestPrivate class provides private implementation for UpdateInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateInAppTemplateRequestPrivate::UpdateInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, UpdateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInAppTemplateRequest
 * class' copy constructor.
 */
UpdateInAppTemplateRequestPrivate::UpdateInAppTemplateRequestPrivate(
    const UpdateInAppTemplateRequestPrivate &other, UpdateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
