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

#include "modifyhapgrequest.h"
#include "modifyhapgrequest_p.h"
#include "modifyhapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ModifyHapgRequest
 *
 * \brief The ModifyHapgRequest class provides an interface for CloudHSM ModifyHapg requests.
 *
 * \ingroup CloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::modifyHapg
 */

/*!
 * @brief  Constructs a new ModifyHapgRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyHapgRequest::ModifyHapgRequest(const ModifyHapgRequest &other)
    : CloudHSMRequest(new ModifyHapgRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifyHapgRequest object.
 */
ModifyHapgRequest::ModifyHapgRequest()
    : CloudHSMRequest(new ModifyHapgRequestPrivate(CloudHSMRequest::ModifyHapgAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyHapgRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifyHapgResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyHapgResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyHapgRequest::response(QNetworkReply * const reply) const
{
    return new ModifyHapgResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifyHapgRequestPrivate
 *
 * @brief  Private implementation for ModifyHapgRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyHapgRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ModifyHapgRequest instance.
 */
ModifyHapgRequestPrivate::ModifyHapgRequestPrivate(
    const CloudHSMRequest::Action action, ModifyHapgRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyHapgRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyHapgRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyHapgRequest instance.
 */
ModifyHapgRequestPrivate::ModifyHapgRequestPrivate(
    const ModifyHapgRequestPrivate &other, ModifyHapgRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
