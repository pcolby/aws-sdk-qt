// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevoicetemplaterequest.h"
#include "deletevoicetemplaterequest_p.h"
#include "deletevoicetemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateRequest
 * \brief The DeleteVoiceTemplateRequest class provides an interface for Pinpoint DeleteVoiceTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteVoiceTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVoiceTemplateRequest::DeleteVoiceTemplateRequest(const DeleteVoiceTemplateRequest &other)
    : PinpointRequest(new DeleteVoiceTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVoiceTemplateRequest object.
 */
DeleteVoiceTemplateRequest::DeleteVoiceTemplateRequest()
    : PinpointRequest(new DeleteVoiceTemplateRequestPrivate(PinpointRequest::DeleteVoiceTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVoiceTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVoiceTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVoiceTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVoiceTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateRequestPrivate
 * \brief The DeleteVoiceTemplateRequestPrivate class provides private implementation for DeleteVoiceTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteVoiceTemplateRequestPrivate::DeleteVoiceTemplateRequestPrivate(
    const PinpointRequest::Action action, DeleteVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVoiceTemplateRequest
 * class' copy constructor.
 */
DeleteVoiceTemplateRequestPrivate::DeleteVoiceTemplateRequestPrivate(
    const DeleteVoiceTemplateRequestPrivate &other, DeleteVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
