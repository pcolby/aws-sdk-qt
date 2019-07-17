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

#include "describereceiptrulerequest.h"
#include "describereceiptrulerequest_p.h"
#include "describereceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DescribeReceiptRuleRequest
 * \brief The DescribeReceiptRuleRequest class provides an interface for SES DescribeReceiptRule requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
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
 * \class QtAws::SES::DescribeReceiptRuleRequestPrivate
 * \brief The DescribeReceiptRuleRequestPrivate class provides private implementation for DescribeReceiptRuleRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
