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

#include "putpolicyrequest.h"
#include "putpolicyrequest_p.h"
#include "putpolicyresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::PutPolicyRequest
 *
 * \brief The PutPolicyRequest class provides an interface for FMS PutPolicy requests.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::putPolicy
 */

/*!
 * @brief  Constructs a new PutPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutPolicyRequest::PutPolicyRequest(const PutPolicyRequest &other)
    : FMSRequest(new PutPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutPolicyRequest object.
 */
PutPolicyRequest::PutPolicyRequest()
    : FMSRequest(new PutPolicyRequestPrivate(FMSRequest::PutPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutPolicyRequestPrivate
 *
 * @brief  Private implementation for PutPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutPolicyRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public PutPolicyRequest instance.
 */
PutPolicyRequestPrivate::PutPolicyRequestPrivate(
    const FMSRequest::Action action, PutPolicyRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutPolicyRequest instance.
 */
PutPolicyRequestPrivate::PutPolicyRequestPrivate(
    const PutPolicyRequestPrivate &other, PutPolicyRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
