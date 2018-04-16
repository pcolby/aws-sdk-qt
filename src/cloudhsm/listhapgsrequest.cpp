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

#include "listhapgsrequest.h"
#include "listhapgsrequest_p.h"
#include "listhapgsresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ListHapgsRequest
 *
 * \brief The ListHapgsRequest class encapsulates CloudHSM ListHapgs requests.
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
 * \sa CloudHSMClient::listHapgs
 */

/*!
 * @brief  Constructs a new ListHapgsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHapgsRequest::ListHapgsRequest(const ListHapgsRequest &other)
    : CloudHSMRequest(new ListHapgsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListHapgsRequest object.
 */
ListHapgsRequest::ListHapgsRequest()
    : CloudHSMRequest(new ListHapgsRequestPrivate(CloudHSMRequest::ListHapgsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHapgsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListHapgsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHapgsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHapgsRequest::response(QNetworkReply * const reply) const
{
    return new ListHapgsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListHapgsRequestPrivate
 *
 * @brief  Private implementation for ListHapgsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListHapgsRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ListHapgsRequest instance.
 */
ListHapgsRequestPrivate::ListHapgsRequestPrivate(
    const CloudHSMRequest::Action action, ListHapgsRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListHapgsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHapgsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHapgsRequest instance.
 */
ListHapgsRequestPrivate::ListHapgsRequestPrivate(
    const ListHapgsRequestPrivate &other, ListHapgsRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
