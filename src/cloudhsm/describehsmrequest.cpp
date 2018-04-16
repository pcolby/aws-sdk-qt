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

#include "describehsmrequest.h"
#include "describehsmrequest_p.h"
#include "describehsmresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DescribeHsmRequest
 *
 * \brief The DescribeHsmRequest class encapsulates CloudHSM DescribeHsm requests.
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
 * \sa CloudHSMClient::describeHsm
 */

/*!
 * @brief  Constructs a new DescribeHsmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHsmRequest::DescribeHsmRequest(const DescribeHsmRequest &other)
    : CloudHSMRequest(new DescribeHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeHsmRequest object.
 */
DescribeHsmRequest::DescribeHsmRequest()
    : CloudHSMRequest(new DescribeHsmRequestPrivate(CloudHSMRequest::DescribeHsmAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHsmRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeHsmResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHsmResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHsmRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHsmResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeHsmRequestPrivate
 *
 * @brief  Private implementation for DescribeHsmRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeHsmRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public DescribeHsmRequest instance.
 */
DescribeHsmRequestPrivate::DescribeHsmRequestPrivate(
    const CloudHSMRequest::Action action, DescribeHsmRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeHsmRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHsmRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHsmRequest instance.
 */
DescribeHsmRequestPrivate::DescribeHsmRequestPrivate(
    const DescribeHsmRequestPrivate &other, DescribeHsmRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
