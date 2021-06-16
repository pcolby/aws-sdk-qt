/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cancelclusterrequest.h"
#include "cancelclusterrequest_p.h"
#include "cancelclusterresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CancelClusterRequest
 * \brief The CancelClusterRequest class provides an interface for Snowball CancelCluster requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The commands described here provide
 *  access to the same functionality that is available in the AWS Snowball Management Console, which enables you to create
 *  and manage jobs for Snowball and Snowball Edge devices. To transfer data locally with a device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for
 *
 * \sa SnowballClient::cancelCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CancelClusterRequest::CancelClusterRequest(const CancelClusterRequest &other)
    : SnowballRequest(new CancelClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelClusterRequest object.
 */
CancelClusterRequest::CancelClusterRequest()
    : SnowballRequest(new CancelClusterRequestPrivate(SnowballRequest::CancelClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CancelClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelClusterRequest::response(QNetworkReply * const reply) const
{
    return new CancelClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::CancelClusterRequestPrivate
 * \brief The CancelClusterRequestPrivate class provides private implementation for CancelClusterRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CancelClusterRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const SnowballRequest::Action action, CancelClusterRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelClusterRequest
 * class' copy constructor.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const CancelClusterRequestPrivate &other, CancelClusterRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
