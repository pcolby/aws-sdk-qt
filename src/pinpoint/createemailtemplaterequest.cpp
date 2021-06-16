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

#include "createemailtemplaterequest.h"
#include "createemailtemplaterequest_p.h"
#include "createemailtemplateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateEmailTemplateRequest
 * \brief The CreateEmailTemplateRequest class provides an interface for Pinpoint CreateEmailTemplate requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEmailTemplateRequest::CreateEmailTemplateRequest(const CreateEmailTemplateRequest &other)
    : PinpointRequest(new CreateEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEmailTemplateRequest object.
 */
CreateEmailTemplateRequest::CreateEmailTemplateRequest()
    : PinpointRequest(new CreateEmailTemplateRequestPrivate(PinpointRequest::CreateEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateEmailTemplateRequestPrivate
 * \brief The CreateEmailTemplateRequestPrivate class provides private implementation for CreateEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateEmailTemplateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateEmailTemplateRequestPrivate::CreateEmailTemplateRequestPrivate(
    const PinpointRequest::Action action, CreateEmailTemplateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEmailTemplateRequest
 * class' copy constructor.
 */
CreateEmailTemplateRequestPrivate::CreateEmailTemplateRequestPrivate(
    const CreateEmailTemplateRequestPrivate &other, CreateEmailTemplateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
