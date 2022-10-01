// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsmstemplaterequest.h"
#include "createsmstemplaterequest_p.h"
#include "createsmstemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSmsTemplateRequest
 * \brief The CreateSmsTemplateRequest class provides an interface for Pinpoint CreateSmsTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createSmsTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSmsTemplateRequest::CreateSmsTemplateRequest(const CreateSmsTemplateRequest &other)
    : PinpointRequest(new CreateSmsTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSmsTemplateRequest object.
 */
CreateSmsTemplateRequest::CreateSmsTemplateRequest()
    : PinpointRequest(new CreateSmsTemplateRequestPrivate(PinpointRequest::CreateSmsTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSmsTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSmsTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSmsTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateSmsTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateSmsTemplateRequestPrivate
 * \brief The CreateSmsTemplateRequestPrivate class provides private implementation for CreateSmsTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateSmsTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateSmsTemplateRequestPrivate::CreateSmsTemplateRequestPrivate(
    const PinpointRequest::Action action, CreateSmsTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSmsTemplateRequest
 * class' copy constructor.
 */
CreateSmsTemplateRequestPrivate::CreateSmsTemplateRequestPrivate(
    const CreateSmsTemplateRequestPrivate &other, CreateSmsTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
