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

#include "listinstancegroupsrequest.h"
#include "listinstancegroupsrequest_p.h"
#include "listinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListInstanceGroupsRequest
 *
 * \brief The ListInstanceGroupsRequest class encapsulates EMR ListInstanceGroups requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::listInstanceGroups
 */

/*!
 * @brief  Constructs a new ListInstanceGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInstanceGroupsRequest::ListInstanceGroupsRequest(const ListInstanceGroupsRequest &other)
    : EMRRequest(new ListInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListInstanceGroupsRequest object.
 */
ListInstanceGroupsRequest::ListInstanceGroupsRequest()
    : EMRRequest(new ListInstanceGroupsRequestPrivate(EMRRequest::ListInstanceGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceGroupsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListInstanceGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInstanceGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceGroupsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListInstanceGroupsRequestPrivate
 *
 * @brief  Private implementation for ListInstanceGroupsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListInstanceGroupsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListInstanceGroupsRequest instance.
 */
ListInstanceGroupsRequestPrivate::ListInstanceGroupsRequestPrivate(
    const EMRRequest::Action action, ListInstanceGroupsRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListInstanceGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInstanceGroupsRequest instance.
 */
ListInstanceGroupsRequestPrivate::ListInstanceGroupsRequestPrivate(
    const ListInstanceGroupsRequestPrivate &other, ListInstanceGroupsRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
