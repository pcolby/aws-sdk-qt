// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putemailidentityfeedbackattributesrequest.h"
#include "putemailidentityfeedbackattributesrequest_p.h"
#include "putemailidentityfeedbackattributesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutEmailIdentityFeedbackAttributesRequest
 * \brief The PutEmailIdentityFeedbackAttributesRequest class provides an interface for SESv2 PutEmailIdentityFeedbackAttributes requests.
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
 * \sa SESv2Client::putEmailIdentityFeedbackAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
PutEmailIdentityFeedbackAttributesRequest::PutEmailIdentityFeedbackAttributesRequest(const PutEmailIdentityFeedbackAttributesRequest &other)
    : SESv2Request(new PutEmailIdentityFeedbackAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEmailIdentityFeedbackAttributesRequest object.
 */
PutEmailIdentityFeedbackAttributesRequest::PutEmailIdentityFeedbackAttributesRequest()
    : SESv2Request(new PutEmailIdentityFeedbackAttributesRequestPrivate(SESv2Request::PutEmailIdentityFeedbackAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutEmailIdentityFeedbackAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEmailIdentityFeedbackAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEmailIdentityFeedbackAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutEmailIdentityFeedbackAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutEmailIdentityFeedbackAttributesRequestPrivate
 * \brief The PutEmailIdentityFeedbackAttributesRequestPrivate class provides private implementation for PutEmailIdentityFeedbackAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutEmailIdentityFeedbackAttributesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutEmailIdentityFeedbackAttributesRequestPrivate::PutEmailIdentityFeedbackAttributesRequestPrivate(
    const SESv2Request::Action action, PutEmailIdentityFeedbackAttributesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEmailIdentityFeedbackAttributesRequest
 * class' copy constructor.
 */
PutEmailIdentityFeedbackAttributesRequestPrivate::PutEmailIdentityFeedbackAttributesRequestPrivate(
    const PutEmailIdentityFeedbackAttributesRequestPrivate &other, PutEmailIdentityFeedbackAttributesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
