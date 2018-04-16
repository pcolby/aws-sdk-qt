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

#include "getjobunlockcoderequest.h"
#include "getjobunlockcoderequest_p.h"
#include "getjobunlockcoderesponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetJobUnlockCodeRequest
 *
 * \brief The GetJobUnlockCodeRequest class provides an interface for Snowball GetJobUnlockCode requests.
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
 * \sa SnowballClient::getJobUnlockCode
 */

/*!
 * @brief  Constructs a new GetJobUnlockCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobUnlockCodeRequest::GetJobUnlockCodeRequest(const GetJobUnlockCodeRequest &other)
    : SnowballRequest(new GetJobUnlockCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetJobUnlockCodeRequest object.
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
 * @brief  Construct an GetJobUnlockCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobUnlockCodeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SnowballClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobUnlockCodeRequest::response(QNetworkReply * const reply) const
{
    return new GetJobUnlockCodeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetJobUnlockCodeRequestPrivate
 *
 * @brief  Private implementation for GetJobUnlockCodeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetJobUnlockCodeRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public GetJobUnlockCodeRequest instance.
 */
GetJobUnlockCodeRequestPrivate::GetJobUnlockCodeRequestPrivate(
    const SnowballRequest::Action action, GetJobUnlockCodeRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetJobUnlockCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobUnlockCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobUnlockCodeRequest instance.
 */
GetJobUnlockCodeRequestPrivate::GetJobUnlockCodeRequestPrivate(
    const GetJobUnlockCodeRequestPrivate &other, GetJobUnlockCodeRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
