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

#include "describeattackrequest.h"
#include "describeattackrequest_p.h"
#include "describeattackresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeAttackRequest
 *
 * \brief The DescribeAttackRequest class provides an interface for Shield DescribeAttack requests.
 *
 * \ingroup Shield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 *
 * \sa ShieldClient::describeAttack
 */

/*!
 * @brief  Constructs a new DescribeAttackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAttackRequest::DescribeAttackRequest(const DescribeAttackRequest &other)
    : ShieldRequest(new DescribeAttackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeAttackRequest object.
 */
DescribeAttackRequest::DescribeAttackRequest()
    : ShieldRequest(new DescribeAttackRequestPrivate(ShieldRequest::DescribeAttackAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAttackRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeAttackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAttackResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ShieldClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAttackRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAttackResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeAttackRequestPrivate
 *
 * @brief  Private implementation for DescribeAttackRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeAttackRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public DescribeAttackRequest instance.
 */
DescribeAttackRequestPrivate::DescribeAttackRequestPrivate(
    const ShieldRequest::Action action, DescribeAttackRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeAttackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAttackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAttackRequest instance.
 */
DescribeAttackRequestPrivate::DescribeAttackRequestPrivate(
    const DescribeAttackRequestPrivate &other, DescribeAttackRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
