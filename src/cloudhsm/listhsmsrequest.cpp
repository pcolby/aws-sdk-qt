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

#include "listhsmsrequest.h"
#include "listhsmsrequest_p.h"
#include "listhsmsresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ListHsmsRequest
 *
 * \brief The ListHsmsRequest class encapsulates CloudHSM ListHsms requests.
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
 * \sa CloudHSMClient::listHsms
 */

/*!
 * @brief  Constructs a new ListHsmsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHsmsRequest::ListHsmsRequest(const ListHsmsRequest &other)
    : CloudHSMRequest(new ListHsmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListHsmsRequest object.
 */
ListHsmsRequest::ListHsmsRequest()
    : CloudHSMRequest(new ListHsmsRequestPrivate(CloudHSMRequest::ListHsmsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHsmsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListHsmsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHsmsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHsmsRequest::response(QNetworkReply * const reply) const
{
    return new ListHsmsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListHsmsRequestPrivate
 *
 * @brief  Private implementation for ListHsmsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListHsmsRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ListHsmsRequest instance.
 */
ListHsmsRequestPrivate::ListHsmsRequestPrivate(
    const CloudHSMRequest::Action action, ListHsmsRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListHsmsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHsmsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHsmsRequest instance.
 */
ListHsmsRequestPrivate::ListHsmsRequestPrivate(
    const ListHsmsRequestPrivate &other, ListHsmsRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
