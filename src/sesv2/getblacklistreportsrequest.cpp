// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblacklistreportsrequest.h"
#include "getblacklistreportsrequest_p.h"
#include "getblacklistreportsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetBlacklistReportsRequest
 * \brief The GetBlacklistReportsRequest class provides an interface for SESv2 GetBlacklistReports requests.
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
 * \sa SESv2Client::getBlacklistReports
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlacklistReportsRequest::GetBlacklistReportsRequest(const GetBlacklistReportsRequest &other)
    : SESv2Request(new GetBlacklistReportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlacklistReportsRequest object.
 */
GetBlacklistReportsRequest::GetBlacklistReportsRequest()
    : SESv2Request(new GetBlacklistReportsRequestPrivate(SESv2Request::GetBlacklistReportsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlacklistReportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlacklistReportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlacklistReportsRequest::response(QNetworkReply * const reply) const
{
    return new GetBlacklistReportsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetBlacklistReportsRequestPrivate
 * \brief The GetBlacklistReportsRequestPrivate class provides private implementation for GetBlacklistReportsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetBlacklistReportsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetBlacklistReportsRequestPrivate::GetBlacklistReportsRequestPrivate(
    const SESv2Request::Action action, GetBlacklistReportsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlacklistReportsRequest
 * class' copy constructor.
 */
GetBlacklistReportsRequestPrivate::GetBlacklistReportsRequestPrivate(
    const GetBlacklistReportsRequestPrivate &other, GetBlacklistReportsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
