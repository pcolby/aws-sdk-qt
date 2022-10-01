// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomverificationemailtemplaterequest.h"
#include "deletecustomverificationemailtemplaterequest_p.h"
#include "deletecustomverificationemailtemplateresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteCustomVerificationEmailTemplateRequest
 * \brief The DeleteCustomVerificationEmailTemplateRequest class provides an interface for SESv2 DeleteCustomVerificationEmailTemplate requests.
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
 * \sa SESv2Client::deleteCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCustomVerificationEmailTemplateRequest::DeleteCustomVerificationEmailTemplateRequest(const DeleteCustomVerificationEmailTemplateRequest &other)
    : SESv2Request(new DeleteCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateRequest object.
 */
DeleteCustomVerificationEmailTemplateRequest::DeleteCustomVerificationEmailTemplateRequest()
    : SESv2Request(new DeleteCustomVerificationEmailTemplateRequestPrivate(SESv2Request::DeleteCustomVerificationEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCustomVerificationEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomVerificationEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteCustomVerificationEmailTemplateRequestPrivate
 * \brief The DeleteCustomVerificationEmailTemplateRequestPrivate class provides private implementation for DeleteCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteCustomVerificationEmailTemplateRequestPrivate::DeleteCustomVerificationEmailTemplateRequestPrivate(
    const SESv2Request::Action action, DeleteCustomVerificationEmailTemplateRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 */
DeleteCustomVerificationEmailTemplateRequestPrivate::DeleteCustomVerificationEmailTemplateRequestPrivate(
    const DeleteCustomVerificationEmailTemplateRequestPrivate &other, DeleteCustomVerificationEmailTemplateRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
