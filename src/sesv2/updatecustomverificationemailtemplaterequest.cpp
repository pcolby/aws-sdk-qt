// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecustomverificationemailtemplaterequest.h"
#include "updatecustomverificationemailtemplaterequest_p.h"
#include "updatecustomverificationemailtemplateresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateCustomVerificationEmailTemplateRequest
 * \brief The UpdateCustomVerificationEmailTemplateRequest class provides an interface for SESv2 UpdateCustomVerificationEmailTemplate requests.
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
 * \sa SESv2Client::updateCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCustomVerificationEmailTemplateRequest::UpdateCustomVerificationEmailTemplateRequest(const UpdateCustomVerificationEmailTemplateRequest &other)
    : SESv2Request(new UpdateCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCustomVerificationEmailTemplateRequest object.
 */
UpdateCustomVerificationEmailTemplateRequest::UpdateCustomVerificationEmailTemplateRequest()
    : SESv2Request(new UpdateCustomVerificationEmailTemplateRequestPrivate(SESv2Request::UpdateCustomVerificationEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCustomVerificationEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCustomVerificationEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::UpdateCustomVerificationEmailTemplateRequestPrivate
 * \brief The UpdateCustomVerificationEmailTemplateRequestPrivate class provides private implementation for UpdateCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateCustomVerificationEmailTemplateRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
UpdateCustomVerificationEmailTemplateRequestPrivate::UpdateCustomVerificationEmailTemplateRequestPrivate(
    const SESv2Request::Action action, UpdateCustomVerificationEmailTemplateRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 */
UpdateCustomVerificationEmailTemplateRequestPrivate::UpdateCustomVerificationEmailTemplateRequestPrivate(
    const UpdateCustomVerificationEmailTemplateRequestPrivate &other, UpdateCustomVerificationEmailTemplateRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
