/*
    Copyright 2013-2018 Paul Colby

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

#include "resendvalidationemailrequest.h"
#include "resendvalidationemailrequest_p.h"
#include "resendvalidationemailresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ResendValidationEmailRequest
 * \brief The ResendValidationEmailRequest class provides an interface for ACM ResendValidationEmail requests.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 *  Guide</i>
 *
 * \sa AcmClient::resendValidationEmail
 */

/*!
 * Constructs a copy of \a other.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest(const ResendValidationEmailRequest &other)
    : AcmRequest(new ResendValidationEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResendValidationEmailRequest object.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest()
    : AcmRequest(new ResendValidationEmailRequestPrivate(AcmRequest::ResendValidationEmailAction, this))
{

}

/*!
 * \reimp
 */
bool ResendValidationEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResendValidationEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResendValidationEmailRequest::response(QNetworkReply * const reply) const
{
    return new ResendValidationEmailResponse(*this, reply);
}

/*!
 * \class QtAws::ACM::ResendValidationEmailRequestPrivate
 * \brief The ResendValidationEmailRequestPrivate class provides private implementation for ResendValidationEmailRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a ResendValidationEmailRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const AcmRequest::Action action, ResendValidationEmailRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResendValidationEmailRequest
 * class' copy constructor.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const ResendValidationEmailRequestPrivate &other, ResendValidationEmailRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
