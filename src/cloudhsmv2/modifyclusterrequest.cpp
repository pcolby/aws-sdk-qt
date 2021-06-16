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

#include "modifyclusterrequest.h"
#include "modifyclusterrequest_p.h"
#include "modifyclusterresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::ModifyClusterRequest
 * \brief The ModifyClusterRequest class provides an interface for CloudHSMV2 ModifyCluster requests.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::modifyCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyClusterRequest::ModifyClusterRequest(const ModifyClusterRequest &other)
    : CloudHSMV2Request(new ModifyClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyClusterRequest object.
 */
ModifyClusterRequest::ModifyClusterRequest()
    : CloudHSMV2Request(new ModifyClusterRequestPrivate(CloudHSMV2Request::ModifyClusterAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClusterResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSMV2::ModifyClusterRequestPrivate
 * \brief The ModifyClusterRequestPrivate class provides private implementation for ModifyClusterRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a ModifyClusterRequestPrivate object for CloudHSMV2 \a action,
 * with public implementation \a q.
 */
ModifyClusterRequestPrivate::ModifyClusterRequestPrivate(
    const CloudHSMV2Request::Action action, ModifyClusterRequest * const q)
    : CloudHSMV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyClusterRequest
 * class' copy constructor.
 */
ModifyClusterRequestPrivate::ModifyClusterRequestPrivate(
    const ModifyClusterRequestPrivate &other, ModifyClusterRequest * const q)
    : CloudHSMV2RequestPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
