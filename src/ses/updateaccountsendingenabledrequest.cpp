// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccountsendingenabledrequest.h"
#include "updateaccountsendingenabledrequest_p.h"
#include "updateaccountsendingenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateAccountSendingEnabledRequest
 * \brief The UpdateAccountSendingEnabledRequest class provides an interface for Ses UpdateAccountSendingEnabled requests.
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
 * \sa SesClient::updateAccountSendingEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccountSendingEnabledRequest::UpdateAccountSendingEnabledRequest(const UpdateAccountSendingEnabledRequest &other)
    : SesRequest(new UpdateAccountSendingEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccountSendingEnabledRequest object.
 */
UpdateAccountSendingEnabledRequest::UpdateAccountSendingEnabledRequest()
    : SesRequest(new UpdateAccountSendingEnabledRequestPrivate(SesRequest::UpdateAccountSendingEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccountSendingEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccountSendingEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccountSendingEnabledRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountSendingEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::UpdateAccountSendingEnabledRequestPrivate
 * \brief The UpdateAccountSendingEnabledRequestPrivate class provides private implementation for UpdateAccountSendingEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateAccountSendingEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
UpdateAccountSendingEnabledRequestPrivate::UpdateAccountSendingEnabledRequestPrivate(
    const SesRequest::Action action, UpdateAccountSendingEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountSendingEnabledRequest
 * class' copy constructor.
 */
UpdateAccountSendingEnabledRequestPrivate::UpdateAccountSendingEnabledRequestPrivate(
    const UpdateAccountSendingEnabledRequestPrivate &other, UpdateAccountSendingEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
