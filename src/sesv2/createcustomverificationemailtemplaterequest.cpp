// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcustomverificationemailtemplaterequest.h"
#include "createcustomverificationemailtemplaterequest_p.h"
#include "createcustomverificationemailtemplateresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateCustomVerificationEmailTemplateRequest
 * \brief The CreateCustomVerificationEmailTemplateRequest class provides an interface for SESv2 CreateCustomVerificationEmailTemplate requests.
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
 * \sa SESv2Client::createCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCustomVerificationEmailTemplateRequest::CreateCustomVerificationEmailTemplateRequest(const CreateCustomVerificationEmailTemplateRequest &other)
    : SESv2Request(new CreateCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCustomVerificationEmailTemplateRequest object.
 */
CreateCustomVerificationEmailTemplateRequest::CreateCustomVerificationEmailTemplateRequest()
    : SESv2Request(new CreateCustomVerificationEmailTemplateRequestPrivate(SESv2Request::CreateCustomVerificationEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCustomVerificationEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateCustomVerificationEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::CreateCustomVerificationEmailTemplateRequestPrivate
 * \brief The CreateCustomVerificationEmailTemplateRequestPrivate class provides private implementation for CreateCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateCustomVerificationEmailTemplateRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
CreateCustomVerificationEmailTemplateRequestPrivate::CreateCustomVerificationEmailTemplateRequestPrivate(
    const SESv2Request::Action action, CreateCustomVerificationEmailTemplateRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 */
CreateCustomVerificationEmailTemplateRequestPrivate::CreateCustomVerificationEmailTemplateRequestPrivate(
    const CreateCustomVerificationEmailTemplateRequestPrivate &other, CreateCustomVerificationEmailTemplateRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
