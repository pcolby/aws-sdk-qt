// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereceiptrulesetrequest.h"
#include "describereceiptrulesetrequest_p.h"
#include "describereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DescribeReceiptRuleSetRequest
 * \brief The DescribeReceiptRuleSetRequest class provides an interface for Ses DescribeReceiptRuleSet requests.
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
 * \sa SesClient::describeReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReceiptRuleSetRequest::DescribeReceiptRuleSetRequest(const DescribeReceiptRuleSetRequest &other)
    : SesRequest(new DescribeReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReceiptRuleSetRequest object.
 */
DescribeReceiptRuleSetRequest::DescribeReceiptRuleSetRequest()
    : SesRequest(new DescribeReceiptRuleSetRequestPrivate(SesRequest::DescribeReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DescribeReceiptRuleSetRequestPrivate
 * \brief The DescribeReceiptRuleSetRequestPrivate class provides private implementation for DescribeReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DescribeReceiptRuleSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DescribeReceiptRuleSetRequestPrivate::DescribeReceiptRuleSetRequestPrivate(
    const SesRequest::Action action, DescribeReceiptRuleSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReceiptRuleSetRequest
 * class' copy constructor.
 */
DescribeReceiptRuleSetRequestPrivate::DescribeReceiptRuleSetRequestPrivate(
    const DescribeReceiptRuleSetRequestPrivate &other, DescribeReceiptRuleSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
