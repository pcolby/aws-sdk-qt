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

#include "describeactivereceiptrulesetrequest.h"
#include "describeactivereceiptrulesetrequest_p.h"
#include "describeactivereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DescribeActiveReceiptRuleSetRequest
 *
 * \brief The DescribeActiveReceiptRuleSetRequest class encapsulates SES DescribeActiveReceiptRuleSet requests.
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
 * \sa SESClient::describeActiveReceiptRuleSet
 */

/*!
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeActiveReceiptRuleSetRequest::DescribeActiveReceiptRuleSetRequest(const DescribeActiveReceiptRuleSetRequest &other)
    : SESRequest(new DescribeActiveReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequest object.
 */
DescribeActiveReceiptRuleSetRequest::DescribeActiveReceiptRuleSetRequest()
    : SESRequest(new DescribeActiveReceiptRuleSetRequestPrivate(SESRequest::DescribeActiveReceiptRuleSetAction, this))
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
 * @brief  Construct an DescribeActiveReceiptRuleSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeActiveReceiptRuleSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeActiveReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeActiveReceiptRuleSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeActiveReceiptRuleSetRequestPrivate
 *
 * @brief  Private implementation for DescribeActiveReceiptRuleSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DescribeActiveReceiptRuleSetRequest instance.
 */
DescribeActiveReceiptRuleSetRequestPrivate::DescribeActiveReceiptRuleSetRequestPrivate(
    const SESRequest::Action action, DescribeActiveReceiptRuleSetRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeActiveReceiptRuleSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeActiveReceiptRuleSetRequest instance.
 */
DescribeActiveReceiptRuleSetRequestPrivate::DescribeActiveReceiptRuleSetRequestPrivate(
    const DescribeActiveReceiptRuleSetRequestPrivate &other, DescribeActiveReceiptRuleSetRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
