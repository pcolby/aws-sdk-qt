// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpushtemplaterequest.h"
#include "createpushtemplaterequest_p.h"
#include "createpushtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreatePushTemplateRequest
 * \brief The CreatePushTemplateRequest class provides an interface for Pinpoint CreatePushTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createPushTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePushTemplateRequest::CreatePushTemplateRequest(const CreatePushTemplateRequest &other)
    : PinpointRequest(new CreatePushTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePushTemplateRequest object.
 */
CreatePushTemplateRequest::CreatePushTemplateRequest()
    : PinpointRequest(new CreatePushTemplateRequestPrivate(PinpointRequest::CreatePushTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePushTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePushTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePushTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreatePushTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreatePushTemplateRequestPrivate
 * \brief The CreatePushTemplateRequestPrivate class provides private implementation for CreatePushTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreatePushTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreatePushTemplateRequestPrivate::CreatePushTemplateRequestPrivate(
    const PinpointRequest::Action action, CreatePushTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePushTemplateRequest
 * class' copy constructor.
 */
CreatePushTemplateRequestPrivate::CreatePushTemplateRequestPrivate(
    const CreatePushTemplateRequestPrivate &other, CreatePushTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
