// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcustomverificationemailtemplaterequest.h"
#include "createcustomverificationemailtemplaterequest_p.h"
#include "createcustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateCustomVerificationEmailTemplateRequest
 * \brief The CreateCustomVerificationEmailTemplateRequest class provides an interface for Ses CreateCustomVerificationEmailTemplate requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::createCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCustomVerificationEmailTemplateRequest::CreateCustomVerificationEmailTemplateRequest(const CreateCustomVerificationEmailTemplateRequest &other)
    : SesRequest(new CreateCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCustomVerificationEmailTemplateRequest object.
 */
CreateCustomVerificationEmailTemplateRequest::CreateCustomVerificationEmailTemplateRequest()
    : SesRequest(new CreateCustomVerificationEmailTemplateRequestPrivate(SesRequest::CreateCustomVerificationEmailTemplateAction, this))
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
 * \class QtAws::Ses::CreateCustomVerificationEmailTemplateRequestPrivate
 * \brief The CreateCustomVerificationEmailTemplateRequestPrivate class provides private implementation for CreateCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateCustomVerificationEmailTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CreateCustomVerificationEmailTemplateRequestPrivate::CreateCustomVerificationEmailTemplateRequestPrivate(
    const SesRequest::Action action, CreateCustomVerificationEmailTemplateRequest * const q)
    : SesRequestPrivate(action, q)
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
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
