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

#include "describeprotectionrequest.h"
#include "describeprotectionrequest_p.h"
#include "describeprotectionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeProtectionRequest
 *
 * \brief The DescribeProtectionRequest class provides an interface for Shield DescribeProtection requests.
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
 * \sa ShieldClient::describeProtection
 */

/*!
 * @brief  Constructs a new DescribeProtectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeProtectionRequest::DescribeProtectionRequest(const DescribeProtectionRequest &other)
    : ShieldRequest(new DescribeProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeProtectionRequest object.
 */
DescribeProtectionRequest::DescribeProtectionRequest()
    : ShieldRequest(new DescribeProtectionRequestPrivate(ShieldRequest::DescribeProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProtectionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeProtectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeProtectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ShieldClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProtectionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProtectionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeProtectionRequestPrivate
 *
 * @brief  Private implementation for DescribeProtectionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeProtectionRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public DescribeProtectionRequest instance.
 */
DescribeProtectionRequestPrivate::DescribeProtectionRequestPrivate(
    const ShieldRequest::Action action, DescribeProtectionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeProtectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeProtectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeProtectionRequest instance.
 */
DescribeProtectionRequestPrivate::DescribeProtectionRequestPrivate(
    const DescribeProtectionRequestPrivate &other, DescribeProtectionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
