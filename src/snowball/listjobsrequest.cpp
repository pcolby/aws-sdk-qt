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

#include "listjobsrequest.h"
#include "listjobsrequest_p.h"
#include "listjobsresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListJobsRequest
 *
 * \brief The ListJobsRequest class encapsulates Snowball ListJobs requests.
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
 * \sa SnowballClient::listJobs
 */

/*!
 * @brief  Constructs a new ListJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobsRequest::ListJobsRequest(const ListJobsRequest &other)
    : SnowballRequest(new ListJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListJobsRequest object.
 */
ListJobsRequest::ListJobsRequest()
    : SnowballRequest(new ListJobsRequestPrivate(SnowballRequest::ListJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SnowballClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListJobsRequestPrivate
 *
 * @brief  Private implementation for ListJobsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListJobsRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public ListJobsRequest instance.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const SnowballRequest::Action action, ListJobsRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobsRequest instance.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const ListJobsRequestPrivate &other, ListJobsRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
