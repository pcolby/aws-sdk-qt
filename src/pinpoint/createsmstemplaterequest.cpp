/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
