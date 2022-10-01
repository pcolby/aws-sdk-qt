// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomverificationemailtemplaterequest.h"
#include "getcustomverificationemailtemplaterequest_p.h"
#include "getcustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetCustomVerificationEmailTemplateRequest
 * \brief The GetCustomVerificationEmailTemplateRequest class provides an interface for Ses GetCustomVerificationEmailTemplate requests.
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
 * \sa SesClient::getCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest(const GetCustomVerificationEmailTemplateRequest &other)
    : SesRequest(new GetCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCustomVerificationEmailTemplateRequest object.
 */
GetCustomVerificationEmailTemplateRequest::GetCustomVerificationEmailTemplateRequest()
    : SesRequest(new GetCustomVerificationEmailTemplateRequestPrivate(SesRequest::GetCustomVerificationEmailTemplateAction, this))
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
 * \class QtAws::Ses::GetCustomVerificationEmailTemplateRequestPrivate
 * \brief The GetCustomVerificationEmailTemplateRequestPrivate class provides private implementation for GetCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetCustomVerificationEmailTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetCustomVerificationEmailTemplateRequestPrivate::GetCustomVerificationEmailTemplateRequestPrivate(
    const SesRequest::Action action, GetCustomVerificationEmailTemplateRequest * const q)
    : SesRequestPrivate(action, q)
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
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
