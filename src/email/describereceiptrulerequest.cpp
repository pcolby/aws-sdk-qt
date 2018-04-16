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

#include "describereceiptrulerequest.h"
#include "describereceiptrulerequest_p.h"
#include "describereceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DescribeReceiptRuleRequest
 *
 * \brief The DescribeReceiptRuleRequest class encapsulates SES DescribeReceiptRule requests.
 *
 * \ingroup SES
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
 * \sa SESClient::describeReceiptRule
 */

/*!
 * @brief  Constructs a new DescribeReceiptRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReceiptRuleRequest::DescribeReceiptRuleRequest(const DescribeReceiptRuleRequest &other)
    : SESRequest(new DescribeReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeReceiptRuleRequest object.
 */
DescribeReceiptRuleRequest::DescribeReceiptRuleRequest()
    : SESRequest(new DescribeReceiptRuleRequestPrivate(SESRequest::DescribeReceiptRuleAction, this))
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
 * @brief  Construct an DescribeReceiptRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReceiptRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReceiptRuleResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeReceiptRuleRequestPrivate
 *
 * @brief  Private implementation for DescribeReceiptRuleRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeReceiptRuleRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DescribeReceiptRuleRequest instance.
 */
DescribeReceiptRuleRequestPrivate::DescribeReceiptRuleRequestPrivate(
    const SESRequest::Action action, DescribeReceiptRuleRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeReceiptRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReceiptRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReceiptRuleRequest instance.
 */
DescribeReceiptRuleRequestPrivate::DescribeReceiptRuleRequestPrivate(
    const DescribeReceiptRuleRequestPrivate &other, DescribeReceiptRuleRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
