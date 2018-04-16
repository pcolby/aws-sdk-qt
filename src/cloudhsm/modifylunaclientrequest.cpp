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

#include "modifylunaclientrequest.h"
#include "modifylunaclientrequest_p.h"
#include "modifylunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ModifyLunaClientRequest
 *
 * \brief The ModifyLunaClientRequest class encapsulates CloudHSM ModifyLunaClient requests.
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
 * \sa CloudHSMClient::modifyLunaClient
 */

/*!
 * @brief  Constructs a new ModifyLunaClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyLunaClientRequest::ModifyLunaClientRequest(const ModifyLunaClientRequest &other)
    : CloudHSMRequest(new ModifyLunaClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifyLunaClientRequest object.
 */
ModifyLunaClientRequest::ModifyLunaClientRequest()
    : CloudHSMRequest(new ModifyLunaClientRequestPrivate(CloudHSMRequest::ModifyLunaClientAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyLunaClientRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifyLunaClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyLunaClientResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new ModifyLunaClientResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifyLunaClientRequestPrivate
 *
 * @brief  Private implementation for ModifyLunaClientRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyLunaClientRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ModifyLunaClientRequest instance.
 */
ModifyLunaClientRequestPrivate::ModifyLunaClientRequestPrivate(
    const CloudHSMRequest::Action action, ModifyLunaClientRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyLunaClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyLunaClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyLunaClientRequest instance.
 */
ModifyLunaClientRequestPrivate::ModifyLunaClientRequestPrivate(
    const ModifyLunaClientRequestPrivate &other, ModifyLunaClientRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
