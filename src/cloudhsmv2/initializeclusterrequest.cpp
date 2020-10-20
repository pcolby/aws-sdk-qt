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

#include "initializeclusterrequest.h"
#include "initializeclusterrequest_p.h"
#include "initializeclusterresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::InitializeClusterRequest
 * \brief The InitializeClusterRequest class provides an interface for CloudHSMV2 InitializeCluster requests.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::initializeCluster
 */

/*!
 * Constructs a copy of \a other.
 */
InitializeClusterRequest::InitializeClusterRequest(const InitializeClusterRequest &other)
    : CloudHSMV2Request(new InitializeClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitializeClusterRequest object.
 */
InitializeClusterRequest::InitializeClusterRequest()
    : CloudHSMV2Request(new InitializeClusterRequestPrivate(CloudHSMV2Request::InitializeClusterAction, this))
{

}

/*!
 * \reimp
 */
bool InitializeClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitializeClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitializeClusterRequest::response(QNetworkReply * const reply) const
{
    return new InitializeClusterResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSMV2::InitializeClusterRequestPrivate
 * \brief The InitializeClusterRequestPrivate class provides private implementation for InitializeClusterRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a InitializeClusterRequestPrivate object for CloudHSMV2 \a action,
 * with public implementation \a q.
 */
InitializeClusterRequestPrivate::InitializeClusterRequestPrivate(
    const CloudHSMV2Request::Action action, InitializeClusterRequest * const q)
    : CloudHSMV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitializeClusterRequest
 * class' copy constructor.
 */
InitializeClusterRequestPrivate::InitializeClusterRequestPrivate(
    const InitializeClusterRequestPrivate &other, InitializeClusterRequest * const q)
    : CloudHSMV2RequestPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
