/*
    Copyright 2013-2018 Paul Colby

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

#include "updateclusterrequest.h"
#include "updateclusterrequest_p.h"
#include "updateclusterresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateClusterRequest
 * \brief The UpdateClusterRequest class provides an interface for Snowball UpdateCluster requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::updateCluster
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterRequest::UpdateClusterRequest(const UpdateClusterRequest &other)
    : SnowballRequest(new UpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterRequest object.
 */
UpdateClusterRequest::UpdateClusterRequest()
    : SnowballRequest(new UpdateClusterRequestPrivate(SnowballRequest::UpdateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::UpdateClusterRequestPrivate
 * \brief The UpdateClusterRequestPrivate class provides private implementation for UpdateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateClusterRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const SnowballRequest::Action action, UpdateClusterRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterRequest
 * class' copy constructor.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const UpdateClusterRequestPrivate &other, UpdateClusterRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
