// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "clonereceiptrulesetrequest.h"
#include "clonereceiptrulesetrequest_p.h"
#include "clonereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CloneReceiptRuleSetRequest
 * \brief The CloneReceiptRuleSetRequest class provides an interface for Ses CloneReceiptRuleSet requests.
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
 * \sa SesClient::cloneReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
CloneReceiptRuleSetRequest::CloneReceiptRuleSetRequest(const CloneReceiptRuleSetRequest &other)
    : SesRequest(new CloneReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CloneReceiptRuleSetRequest object.
 */
CloneReceiptRuleSetRequest::CloneReceiptRuleSetRequest()
    : SesRequest(new CloneReceiptRuleSetRequestPrivate(SesRequest::CloneReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool CloneReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CloneReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CloneReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new CloneReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::CloneReceiptRuleSetRequestPrivate
 * \brief The CloneReceiptRuleSetRequestPrivate class provides private implementation for CloneReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CloneReceiptRuleSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CloneReceiptRuleSetRequestPrivate::CloneReceiptRuleSetRequestPrivate(
    const SesRequest::Action action, CloneReceiptRuleSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CloneReceiptRuleSetRequest
 * class' copy constructor.
 */
CloneReceiptRuleSetRequestPrivate::CloneReceiptRuleSetRequestPrivate(
    const CloneReceiptRuleSetRequestPrivate &other, CloneReceiptRuleSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
