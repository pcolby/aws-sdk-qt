/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcustomverificationemailtemplaterequest.h"
#include "getcustomverificationemailtemplaterequest_p.h"
#include "getcustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetCustomVerificationEmailTemplateRequest
 * \brief The GetCustomVerificationEmailTemplateRequest class provides an interface for SES GetCustomVerificationEmailTemplate requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::getCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest(const GetCustomVerificationEmailTemplateRequest &other)
    : SESRequest(new GetCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCustomVerificationEmailTemplateRequest object.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest()
    : SESRequest(new GetCustomVerificationEmailTemplateRequestPrivate(SESRequest::GetCustomVerificationEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCustomVerificationEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetCustomVerificationEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SES::GetCustomVerificationEmailTemplateRequestPrivate
 * \brief The GetCustomVerificationEmailTemplateRequestPrivate class provides private implementation for GetCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a GetCustomVerificationEmailTemplateRequestPrivate object for SES \a action,
 * with public implementation \a q.
 */
GetCustomVerificationEmailTemplateRequestPrivate::GetCustomVerificationEmailTemplateRequestPrivate(
    const SESRequest::Action action, GetCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 */
GetCustomVerificationEmailTemplateRequestPrivate::GetCustomVerificationEmailTemplateRequestPrivate(
    const GetCustomVerificationEmailTemplateRequestPrivate &other, GetCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
