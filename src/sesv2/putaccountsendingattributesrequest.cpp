// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountsendingattributesrequest.h"
#include "putaccountsendingattributesrequest_p.h"
#include "putaccountsendingattributesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountSendingAttributesRequest
 * \brief The PutAccountSendingAttributesRequest class provides an interface for SESv2 PutAccountSendingAttributes requests.
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
 * \sa SESv2Client::putAccountSendingAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountSendingAttributesRequest::PutAccountSendingAttributesRequest(const PutAccountSendingAttributesRequest &other)
    : SESv2Request(new PutAccountSendingAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountSendingAttributesRequest object.
 */
PutAccountSendingAttributesRequest::PutAccountSendingAttributesRequest()
    : SESv2Request(new PutAccountSendingAttributesRequestPrivate(SESv2Request::PutAccountSendingAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountSendingAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountSendingAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountSendingAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountSendingAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutAccountSendingAttributesRequestPrivate
 * \brief The PutAccountSendingAttributesRequestPrivate class provides private implementation for PutAccountSendingAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountSendingAttributesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutAccountSendingAttributesRequestPrivate::PutAccountSendingAttributesRequestPrivate(
    const SESv2Request::Action action, PutAccountSendingAttributesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountSendingAttributesRequest
 * class' copy constructor.
 */
PutAccountSendingAttributesRequestPrivate::PutAccountSendingAttributesRequestPrivate(
    const PutAccountSendingAttributesRequestPrivate &other, PutAccountSendingAttributesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
