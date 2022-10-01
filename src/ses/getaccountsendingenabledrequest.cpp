// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountsendingenabledrequest.h"
#include "getaccountsendingenabledrequest_p.h"
#include "getaccountsendingenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetAccountSendingEnabledRequest
 * \brief The GetAccountSendingEnabledRequest class provides an interface for Ses GetAccountSendingEnabled requests.
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
 * \sa SesClient::getAccountSendingEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountSendingEnabledRequest::GetAccountSendingEnabledRequest(const GetAccountSendingEnabledRequest &other)
    : SesRequest(new GetAccountSendingEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountSendingEnabledRequest object.
 */
GetAccountSendingEnabledRequest::GetAccountSendingEnabledRequest()
    : SesRequest(new GetAccountSendingEnabledRequestPrivate(SesRequest::GetAccountSendingEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountSendingEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountSendingEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountSendingEnabledRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountSendingEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetAccountSendingEnabledRequestPrivate
 * \brief The GetAccountSendingEnabledRequestPrivate class provides private implementation for GetAccountSendingEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetAccountSendingEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetAccountSendingEnabledRequestPrivate::GetAccountSendingEnabledRequestPrivate(
    const SesRequest::Action action, GetAccountSendingEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountSendingEnabledRequest
 * class' copy constructor.
 */
GetAccountSendingEnabledRequestPrivate::GetAccountSendingEnabledRequestPrivate(
    const GetAccountSendingEnabledRequestPrivate &other, GetAccountSendingEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
