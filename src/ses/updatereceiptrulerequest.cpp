// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereceiptrulerequest.h"
#include "updatereceiptrulerequest_p.h"
#include "updatereceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateReceiptRuleRequest
 * \brief The UpdateReceiptRuleRequest class provides an interface for Ses UpdateReceiptRule requests.
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
 * \sa SesClient::updateReceiptRule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReceiptRuleRequest::UpdateReceiptRuleRequest(const UpdateReceiptRuleRequest &other)
    : SesRequest(new UpdateReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReceiptRuleRequest object.
 */
UpdateReceiptRuleRequest::UpdateReceiptRuleRequest()
    : SesRequest(new UpdateReceiptRuleRequestPrivate(SesRequest::UpdateReceiptRuleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReceiptRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReceiptRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReceiptRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::UpdateReceiptRuleRequestPrivate
 * \brief The UpdateReceiptRuleRequestPrivate class provides private implementation for UpdateReceiptRuleRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateReceiptRuleRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
UpdateReceiptRuleRequestPrivate::UpdateReceiptRuleRequestPrivate(
    const SesRequest::Action action, UpdateReceiptRuleRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReceiptRuleRequest
 * class' copy constructor.
 */
UpdateReceiptRuleRequestPrivate::UpdateReceiptRuleRequestPrivate(
    const UpdateReceiptRuleRequestPrivate &other, UpdateReceiptRuleRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
