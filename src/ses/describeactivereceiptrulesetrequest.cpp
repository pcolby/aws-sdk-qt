/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeactivereceiptrulesetrequest.h"
#include "describeactivereceiptrulesetrequest_p.h"
#include "describeactivereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DescribeActiveReceiptRuleSetRequest
 * \brief The DescribeActiveReceiptRuleSetRequest class provides an interface for SES DescribeActiveReceiptRuleSet requests.
 *
 * \inmodule QtAwsSES
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
 * \class QtAws::SES::DescribeActiveReceiptRuleSetRequestPrivate
 * \brief The DescribeActiveReceiptRuleSetRequestPrivate class provides private implementation for DescribeActiveReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
