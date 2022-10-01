// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
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
