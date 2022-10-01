// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvoicetemplaterequest.h"
#include "createvoicetemplaterequest_p.h"
#include "createvoicetemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateRequest
 * \brief The CreateVoiceTemplateRequest class provides an interface for Pinpoint CreateVoiceTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createVoiceTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVoiceTemplateRequest::CreateVoiceTemplateRequest(const CreateVoiceTemplateRequest &other)
    : PinpointRequest(new CreateVoiceTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVoiceTemplateRequest object.
 */
CreateVoiceTemplateRequest::CreateVoiceTemplateRequest()
    : PinpointRequest(new CreateVoiceTemplateRequestPrivate(PinpointRequest::CreateVoiceTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVoiceTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVoiceTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVoiceTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateVoiceTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateRequestPrivate
 * \brief The CreateVoiceTemplateRequestPrivate class provides private implementation for CreateVoiceTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateVoiceTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateVoiceTemplateRequestPrivate::CreateVoiceTemplateRequestPrivate(
    const PinpointRequest::Action action, CreateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVoiceTemplateRequest
 * class' copy constructor.
 */
CreateVoiceTemplateRequestPrivate::CreateVoiceTemplateRequestPrivate(
    const CreateVoiceTemplateRequestPrivate &other, CreateVoiceTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
