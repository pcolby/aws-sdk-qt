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

#include "deletehsmrequest.h"
#include "deletehsmrequest_p.h"
#include "deletehsmresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DeleteHsmRequest
 * \brief The DeleteHsmRequest class provides an interface for CloudHsmV2 DeleteHsm requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::deleteHsm
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHsmRequest::DeleteHsmRequest(const DeleteHsmRequest &other)
    : CloudHsmV2Request(new DeleteHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHsmRequest object.
 */
DeleteHsmRequest::DeleteHsmRequest()
    : CloudHsmV2Request(new DeleteHsmRequestPrivate(CloudHsmV2Request::DeleteHsmAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHsmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHsmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHsmRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHsmResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsmV2::DeleteHsmRequestPrivate
 * \brief The DeleteHsmRequestPrivate class provides private implementation for DeleteHsmRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DeleteHsmRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
DeleteHsmRequestPrivate::DeleteHsmRequestPrivate(
    const CloudHsmV2Request::Action action, DeleteHsmRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHsmRequest
 * class' copy constructor.
 */
DeleteHsmRequestPrivate::DeleteHsmRequestPrivate(
    const DeleteHsmRequestPrivate &other, DeleteHsmRequest * const q)
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
