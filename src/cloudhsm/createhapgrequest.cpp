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

#include "createhapgrequest.h"
#include "createhapgrequest_p.h"
#include "createhapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::CreateHapgRequest
 *
 * \brief The CreateHapgRequest class encapsulates CloudHSM CreateHapg requests.
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
 * \sa CloudHSMClient::createHapg
 */

/*!
 * @brief  Constructs a new CreateHapgRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHapgRequest::CreateHapgRequest(const CreateHapgRequest &other)
    : CloudHSMRequest(new CreateHapgRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateHapgRequest object.
 */
CreateHapgRequest::CreateHapgRequest()
    : CloudHSMRequest(new CreateHapgRequestPrivate(CloudHSMRequest::CreateHapgAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHapgRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateHapgResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHapgResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHapgRequest::response(QNetworkReply * const reply) const
{
    return new CreateHapgResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateHapgRequestPrivate
 *
 * @brief  Private implementation for CreateHapgRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHapgRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public CreateHapgRequest instance.
 */
CreateHapgRequestPrivate::CreateHapgRequestPrivate(
    const CloudHSMRequest::Action action, CreateHapgRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHapgRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHapgRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHapgRequest instance.
 */
CreateHapgRequestPrivate::CreateHapgRequestPrivate(
    const CreateHapgRequestPrivate &other, CreateHapgRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
