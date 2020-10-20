/*
    Copyright 2013-2020 Paul Colby

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

#include "getjobmanifestrequest.h"
#include "getjobmanifestrequest_p.h"
#include "getjobmanifestresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetJobManifestRequest
 * \brief The GetJobManifestRequest class provides an interface for Snowball GetJobManifest requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The commands described here provide
 *  access to the same functionality that is available in the AWS Snowball Management Console, which enables you to create
 *  and manage jobs for Snowball and Snowball Edge devices. To transfer data locally with a device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for
 *
 * \sa SnowballClient::getJobManifest
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobManifestRequest::GetJobManifestRequest(const GetJobManifestRequest &other)
    : SnowballRequest(new GetJobManifestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobManifestRequest object.
 */
GetJobManifestRequest::GetJobManifestRequest()
    : SnowballRequest(new GetJobManifestRequestPrivate(SnowballRequest::GetJobManifestAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobManifestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobManifestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobManifestRequest::response(QNetworkReply * const reply) const
{
    return new GetJobManifestResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::GetJobManifestRequestPrivate
 * \brief The GetJobManifestRequestPrivate class provides private implementation for GetJobManifestRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a GetJobManifestRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
GetJobManifestRequestPrivate::GetJobManifestRequestPrivate(
    const SnowballRequest::Action action, GetJobManifestRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobManifestRequest
 * class' copy constructor.
 */
GetJobManifestRequestPrivate::GetJobManifestRequestPrivate(
    const GetJobManifestRequestPrivate &other, GetJobManifestRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
