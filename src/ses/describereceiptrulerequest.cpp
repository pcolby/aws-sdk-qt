// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereceiptrulerequest.h"
#include "describereceiptrulerequest_p.h"
#include "describereceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DescribeReceiptRuleRequest
 * \brief The DescribeReceiptRuleRequest class provides an interface for Ses DescribeReceiptRule requests.
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
 * \sa SesClient::describeReceiptRule
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReceiptRuleRequest::DescribeReceiptRuleRequest(const DescribeReceiptRuleRequest &other)
    : SesRequest(new DescribeReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReceiptRuleRequest object.
 */
DescribeReceiptRuleRequest::DescribeReceiptRuleRequest()
    : SesRequest(new DescribeReceiptRuleRequestPrivate(SesRequest::DescribeReceiptRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReceiptRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReceiptRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReceiptRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DescribeReceiptRuleRequestPrivate
 * \brief The DescribeReceiptRuleRequestPrivate class provides private implementation for DescribeReceiptRuleRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DescribeReceiptRuleRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DescribeReceiptRuleRequestPrivate::DescribeReceiptRuleRequestPrivate(
    const SesRequest::Action action, DescribeReceiptRuleRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReceiptRuleRequest
 * class' copy constructor.
 */
DescribeReceiptRuleRequestPrivate::DescribeReceiptRuleRequestPrivate(
    const DescribeReceiptRuleRequestPrivate &other, DescribeReceiptRuleRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
