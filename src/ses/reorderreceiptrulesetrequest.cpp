// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reorderreceiptrulesetrequest.h"
#include "reorderreceiptrulesetrequest_p.h"
#include "reorderreceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ReorderReceiptRuleSetRequest
 * \brief The ReorderReceiptRuleSetRequest class provides an interface for Ses ReorderReceiptRuleSet requests.
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
 * \sa SesClient::reorderReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
ReorderReceiptRuleSetRequest::ReorderReceiptRuleSetRequest(const ReorderReceiptRuleSetRequest &other)
    : SesRequest(new ReorderReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReorderReceiptRuleSetRequest object.
 */
ReorderReceiptRuleSetRequest::ReorderReceiptRuleSetRequest()
    : SesRequest(new ReorderReceiptRuleSetRequestPrivate(SesRequest::ReorderReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool ReorderReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReorderReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReorderReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new ReorderReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ReorderReceiptRuleSetRequestPrivate
 * \brief The ReorderReceiptRuleSetRequestPrivate class provides private implementation for ReorderReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ReorderReceiptRuleSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ReorderReceiptRuleSetRequestPrivate::ReorderReceiptRuleSetRequestPrivate(
    const SesRequest::Action action, ReorderReceiptRuleSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReorderReceiptRuleSetRequest
 * class' copy constructor.
 */
ReorderReceiptRuleSetRequestPrivate::ReorderReceiptRuleSetRequestPrivate(
    const ReorderReceiptRuleSetRequestPrivate &other, ReorderReceiptRuleSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
