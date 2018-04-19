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

#include "getsnowballusagerequest.h"
#include "getsnowballusagerequest_p.h"
#include "getsnowballusageresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetSnowballUsageRequest
 * \brief The GetSnowballUsageRequest class provides an interface for Snowball GetSnowballUsage requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::getSnowballUsage
 */

/*!
 * Constructs a copy of \a other.
 */
GetSnowballUsageRequest::GetSnowballUsageRequest(const GetSnowballUsageRequest &other)
    : SnowballRequest(new GetSnowballUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSnowballUsageRequest object.
 */
GetSnowballUsageRequest::GetSnowballUsageRequest()
    : SnowballRequest(new GetSnowballUsageRequestPrivate(SnowballRequest::GetSnowballUsageAction, this))
{

}

/*!
 * \reimp
 */
bool GetSnowballUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSnowballUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSnowballUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetSnowballUsageResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::GetSnowballUsageRequestPrivate
 * \brief The GetSnowballUsageRequestPrivate class provides private implementation for GetSnowballUsageRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a GetSnowballUsageRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
GetSnowballUsageRequestPrivate::GetSnowballUsageRequestPrivate(
    const SnowballRequest::Action action, GetSnowballUsageRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSnowballUsageRequest
 * class' copy constructor.
 */
GetSnowballUsageRequestPrivate::GetSnowballUsageRequestPrivate(
    const GetSnowballUsageRequestPrivate &other, GetSnowballUsageRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
