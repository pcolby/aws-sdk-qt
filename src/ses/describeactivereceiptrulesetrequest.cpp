// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeactivereceiptrulesetrequest.h"
#include "describeactivereceiptrulesetrequest_p.h"
#include "describeactivereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DescribeActiveReceiptRuleSetRequest
 * \brief The DescribeActiveReceiptRuleSetRequest class provides an interface for Ses DescribeActiveReceiptRuleSet requests.
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
 * \sa SesClient::describeActiveReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeActiveReceiptRuleSetRequest::DescribeActiveReceiptRuleSetRequest(const DescribeActiveReceiptRuleSetRequest &other)
    : SesRequest(new DescribeActiveReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeActiveReceiptRuleSetRequest object.
 */
DescribeActiveReceiptRuleSetRequest::DescribeActiveReceiptRuleSetRequest()
    : SesRequest(new DescribeActiveReceiptRuleSetRequestPrivate(SesRequest::DescribeActiveReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeActiveReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeActiveReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeActiveReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeActiveReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DescribeActiveReceiptRuleSetRequestPrivate
 * \brief The DescribeActiveReceiptRuleSetRequestPrivate class provides private implementation for DescribeActiveReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DescribeActiveReceiptRuleSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DescribeActiveReceiptRuleSetRequestPrivate::DescribeActiveReceiptRuleSetRequestPrivate(
    const SesRequest::Action action, DescribeActiveReceiptRuleSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeActiveReceiptRuleSetRequest
 * class' copy constructor.
 */
DescribeActiveReceiptRuleSetRequestPrivate::DescribeActiveReceiptRuleSetRequestPrivate(
    const DescribeActiveReceiptRuleSetRequestPrivate &other, DescribeActiveReceiptRuleSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
