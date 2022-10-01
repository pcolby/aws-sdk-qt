// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getemailtemplaterequest.h"
#include "getemailtemplaterequest_p.h"
#include "getemailtemplateresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetEmailTemplateRequest
 * \brief The GetEmailTemplateRequest class provides an interface for SESv2 GetEmailTemplate requests.
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
 * \sa SESv2Client::getEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetEmailTemplateRequest::GetEmailTemplateRequest(const GetEmailTemplateRequest &other)
    : SESv2Request(new GetEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEmailTemplateRequest object.
 */
GetEmailTemplateRequest::GetEmailTemplateRequest()
    : SESv2Request(new GetEmailTemplateRequestPrivate(SESv2Request::GetEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetEmailTemplateRequestPrivate
 * \brief The GetEmailTemplateRequestPrivate class provides private implementation for GetEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetEmailTemplateRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetEmailTemplateRequestPrivate::GetEmailTemplateRequestPrivate(
    const SESv2Request::Action action, GetEmailTemplateRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEmailTemplateRequest
 * class' copy constructor.
 */
GetEmailTemplateRequestPrivate::GetEmailTemplateRequestPrivate(
    const GetEmailTemplateRequestPrivate &other, GetEmailTemplateRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
