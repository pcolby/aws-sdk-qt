// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomverificationemailtemplaterequest.h"
#include "getcustomverificationemailtemplaterequest_p.h"
#include "getcustomverificationemailtemplateresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetCustomVerificationEmailTemplateRequest
 * \brief The GetCustomVerificationEmailTemplateRequest class provides an interface for SESv2 GetCustomVerificationEmailTemplate requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest(const GetCustomVerificationEmailTemplateRequest &other)
    : SESv2Request(new GetCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCustomVerificationEmailTemplateRequest object.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest()
    : SESv2Request(new GetCustomVerificationEmailTemplateRequestPrivate(SESv2Request::GetCustomVerificationEmailTemplateAction, this))
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
 * \class QtAws::SESv2::GetCustomVerificationEmailTemplateRequestPrivate
 * \brief The GetCustomVerificationEmailTemplateRequestPrivate class provides private implementation for GetCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetCustomVerificationEmailTemplateRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetCustomVerificationEmailTemplateRequestPrivate::GetCustomVerificationEmailTemplateRequestPrivate(
    const SESv2Request::Action action, GetCustomVerificationEmailTemplateRequest * const q)
    : SESv2RequestPrivate(action, q)
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
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
