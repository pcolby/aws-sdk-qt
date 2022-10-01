// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinapptemplaterequest.h"
#include "createinapptemplaterequest_p.h"
#include "createinapptemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateRequest
 * \brief The CreateInAppTemplateRequest class provides an interface for Pinpoint CreateInAppTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createInAppTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInAppTemplateRequest::CreateInAppTemplateRequest(const CreateInAppTemplateRequest &other)
    : PinpointRequest(new CreateInAppTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInAppTemplateRequest object.
 */
CreateInAppTemplateRequest::CreateInAppTemplateRequest()
    : PinpointRequest(new CreateInAppTemplateRequestPrivate(PinpointRequest::CreateInAppTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInAppTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInAppTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInAppTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateInAppTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateRequestPrivate
 * \brief The CreateInAppTemplateRequestPrivate class provides private implementation for CreateInAppTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateInAppTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateInAppTemplateRequestPrivate::CreateInAppTemplateRequestPrivate(
    const PinpointRequest::Action action, CreateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInAppTemplateRequest
 * class' copy constructor.
 */
CreateInAppTemplateRequestPrivate::CreateInAppTemplateRequestPrivate(
    const CreateInAppTemplateRequestPrivate &other, CreateInAppTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
