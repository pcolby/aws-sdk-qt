// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailtemplaterequest.h"
#include "deleteemailtemplaterequest_p.h"
#include "deleteemailtemplateresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteEmailTemplateRequest
 * \brief The DeleteEmailTemplateRequest class provides an interface for SESv2 DeleteEmailTemplate requests.
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
 * \sa SESv2Client::deleteEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEmailTemplateRequest::DeleteEmailTemplateRequest(const DeleteEmailTemplateRequest &other)
    : SESv2Request(new DeleteEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEmailTemplateRequest object.
 */
DeleteEmailTemplateRequest::DeleteEmailTemplateRequest()
    : SESv2Request(new DeleteEmailTemplateRequestPrivate(SESv2Request::DeleteEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteEmailTemplateRequestPrivate
 * \brief The DeleteEmailTemplateRequestPrivate class provides private implementation for DeleteEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteEmailTemplateRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteEmailTemplateRequestPrivate::DeleteEmailTemplateRequestPrivate(
    const SESv2Request::Action action, DeleteEmailTemplateRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailTemplateRequest
 * class' copy constructor.
 */
DeleteEmailTemplateRequestPrivate::DeleteEmailTemplateRequestPrivate(
    const DeleteEmailTemplateRequestPrivate &other, DeleteEmailTemplateRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
