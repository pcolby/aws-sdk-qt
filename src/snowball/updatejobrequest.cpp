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

#include "updatejobrequest.h"
#include "updatejobrequest_p.h"
#include "updatejobresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateJobRequest
 * \brief The UpdateJobRequest class provides an interface for Snowball UpdateJob requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snow Family is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snow commands described here
 *  provide access to the same functionality that is available in the AWS Snow Family Management Console, which enables you
 *  to create and manage jobs for a Snow device. To transfer data locally with a Snow device, you'll need to use the
 *  Snowball Edge client or the Amazon S3 API Interface for Snowball or AWS OpsHub for Snow Family. For more information,
 *  see the <a href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::updateJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJobRequest::UpdateJobRequest(const UpdateJobRequest &other)
    : SnowballRequest(new UpdateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJobRequest object.
 */
UpdateJobRequest::UpdateJobRequest()
    : SnowballRequest(new UpdateJobRequestPrivate(SnowballRequest::UpdateJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::UpdateJobRequestPrivate
 * \brief The UpdateJobRequestPrivate class provides private implementation for UpdateJobRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateJobRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const SnowballRequest::Action action, UpdateJobRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobRequest
 * class' copy constructor.
 */
UpdateJobRequestPrivate::UpdateJobRequestPrivate(
    const UpdateJobRequestPrivate &other, UpdateJobRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
