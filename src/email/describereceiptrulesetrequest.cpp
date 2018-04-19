/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereceiptrulesetrequest.h"
#include "describereceiptrulesetrequest_p.h"
#include "describereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DescribeReceiptRuleSetRequest
 * \brief The DescribeReceiptRuleSetRequest class provides an interface for SES DescribeReceiptRuleSet requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::describeReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReceiptRuleSetRequest::DescribeReceiptRuleSetRequest(const DescribeReceiptRuleSetRequest &other)
    : SESRequest(new DescribeReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReceiptRuleSetRequest object.
 */
DescribeReceiptRuleSetRequest::DescribeReceiptRuleSetRequest()
    : SESRequest(new DescribeReceiptRuleSetRequestPrivate(SESRequest::DescribeReceiptRuleSetAction, this))
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
 * \class QtAws::SES::DescribeReceiptRuleSetRequestPrivate
 * \brief The DescribeReceiptRuleSetRequestPrivate class provides private implementation for DescribeReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DescribeReceiptRuleSetRequestPrivate object for SES \a action,
 * with public implementation \a q.
 */
DescribeReceiptRuleSetRequestPrivate::DescribeReceiptRuleSetRequestPrivate(
    const SESRequest::Action action, DescribeReceiptRuleSetRequest * const q)
    : SESRequestPrivate(action, q)
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
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
