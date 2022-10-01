// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountdetailsrequest.h"
#include "putaccountdetailsrequest_p.h"
#include "putaccountdetailsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountDetailsRequest
 * \brief The PutAccountDetailsRequest class provides an interface for SESv2 PutAccountDetails requests.
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
 * \sa SESv2Client::putAccountDetails
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountDetailsRequest::PutAccountDetailsRequest(const PutAccountDetailsRequest &other)
    : SESv2Request(new PutAccountDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountDetailsRequest object.
 */
PutAccountDetailsRequest::PutAccountDetailsRequest()
    : SESv2Request(new PutAccountDetailsRequestPrivate(SESv2Request::PutAccountDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountDetailsRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutAccountDetailsRequestPrivate
 * \brief The PutAccountDetailsRequestPrivate class provides private implementation for PutAccountDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountDetailsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutAccountDetailsRequestPrivate::PutAccountDetailsRequestPrivate(
    const SESv2Request::Action action, PutAccountDetailsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountDetailsRequest
 * class' copy constructor.
 */
PutAccountDetailsRequestPrivate::PutAccountDetailsRequestPrivate(
    const PutAccountDetailsRequestPrivate &other, PutAccountDetailsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
