// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountrequest.h"
#include "getaccountrequest_p.h"
#include "getaccountresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetAccountRequest
 * \brief The GetAccountRequest class provides an interface for SESv2 GetAccount requests.
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
 * \sa SESv2Client::getAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountRequest::GetAccountRequest(const GetAccountRequest &other)
    : SESv2Request(new GetAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountRequest object.
 */
GetAccountRequest::GetAccountRequest()
    : SESv2Request(new GetAccountRequestPrivate(SESv2Request::GetAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetAccountRequestPrivate
 * \brief The GetAccountRequestPrivate class provides private implementation for GetAccountRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetAccountRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const SESv2Request::Action action, GetAccountRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountRequest
 * class' copy constructor.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const GetAccountRequestPrivate &other, GetAccountRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
