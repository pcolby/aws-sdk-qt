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

#include "listclustersrequest.h"
#include "listclustersrequest_p.h"
#include "listclustersresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListClustersRequest
 *
 * \brief The ListClustersRequest class encapsulates Snowball ListClusters requests.
 *
 * \ingroup Snowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::listClusters
 */

/*!
 * @brief  Constructs a new ListClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListClustersRequest::ListClustersRequest(const ListClustersRequest &other)
    : SnowballRequest(new ListClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListClustersRequest object.
 */
ListClustersRequest::ListClustersRequest()
    : SnowballRequest(new ListClustersRequestPrivate(SnowballRequest::ListClustersAction, this))
{

}

/*!
 * \reimp
 */
bool ListClustersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListClustersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListClustersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SnowballClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClustersRequest::response(QNetworkReply * const reply) const
{
    return new ListClustersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListClustersRequestPrivate
 *
 * @brief  Private implementation for ListClustersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListClustersRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public ListClustersRequest instance.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const SnowballRequest::Action action, ListClustersRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListClustersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListClustersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListClustersRequest instance.
 */
ListClustersRequestPrivate::ListClustersRequestPrivate(
    const ListClustersRequestPrivate &other, ListClustersRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
