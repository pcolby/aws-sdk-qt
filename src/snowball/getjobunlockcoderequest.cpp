// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobunlockcoderequest.h"
#include "getjobunlockcoderequest_p.h"
#include "getjobunlockcoderesponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetJobUnlockCodeRequest
 * \brief The GetJobUnlockCodeRequest class provides an interface for Snowball GetJobUnlockCode requests.
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
 * \sa SnowballClient::getJobUnlockCode
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobUnlockCodeRequest::GetJobUnlockCodeRequest(const GetJobUnlockCodeRequest &other)
    : SnowballRequest(new GetJobUnlockCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobUnlockCodeRequest object.
 */
GetJobUnlockCodeRequest::GetJobUnlockCodeRequest()
    : SnowballRequest(new GetJobUnlockCodeRequestPrivate(SnowballRequest::GetJobUnlockCodeAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobUnlockCodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobUnlockCodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobUnlockCodeRequest::response(QNetworkReply * const reply) const
{
    return new GetJobUnlockCodeResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::GetJobUnlockCodeRequestPrivate
 * \brief The GetJobUnlockCodeRequestPrivate class provides private implementation for GetJobUnlockCodeRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a GetJobUnlockCodeRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
GetJobUnlockCodeRequestPrivate::GetJobUnlockCodeRequestPrivate(
    const SnowballRequest::Action action, GetJobUnlockCodeRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobUnlockCodeRequest
 * class' copy constructor.
 */
GetJobUnlockCodeRequestPrivate::GetJobUnlockCodeRequestPrivate(
    const GetJobUnlockCodeRequestPrivate &other, GetJobUnlockCodeRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
