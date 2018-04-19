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

#include "cancelbundletaskrequest.h"
#include "cancelbundletaskrequest_p.h"
#include "cancelbundletaskresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelBundleTaskRequest
 * \brief The CancelBundleTaskRequest class provides an interface for EC2 CancelBundleTask requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::cancelBundleTask
 */

/*!
 * Constructs a copy of \a other.
 */
CancelBundleTaskRequest::CancelBundleTaskRequest(const CancelBundleTaskRequest &other)
    : EC2Request(new CancelBundleTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelBundleTaskRequest object.
 */
CancelBundleTaskRequest::CancelBundleTaskRequest()
    : EC2Request(new CancelBundleTaskRequestPrivate(EC2Request::CancelBundleTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CancelBundleTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelBundleTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelBundleTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelBundleTaskResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CancelBundleTaskRequestPrivate
 * \brief The CancelBundleTaskRequestPrivate class provides private implementation for CancelBundleTaskRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelBundleTaskRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CancelBundleTaskRequestPrivate::CancelBundleTaskRequestPrivate(
    const EC2Request::Action action, CancelBundleTaskRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelBundleTaskRequest
 * class' copy constructor.
 */
CancelBundleTaskRequestPrivate::CancelBundleTaskRequestPrivate(
    const CancelBundleTaskRequestPrivate &other, CancelBundleTaskRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
