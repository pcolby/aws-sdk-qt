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
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::ModifyClusterRequest
 * \brief The ModifyClusterRequest class provides an interface for CloudHsmV2 ModifyCluster requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::modifyCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyClusterRequest::ModifyClusterRequest(const ModifyClusterRequest &other)
    : CloudHsmV2Request(new ModifyClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyClusterRequest object.
 */
ModifyClusterRequest::ModifyClusterRequest()
    : CloudHsmV2Request(new ModifyClusterRequestPrivate(CloudHsmV2Request::ModifyClusterAction, this))
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
 * \class QtAws::CloudHsmV2::ModifyClusterRequestPrivate
 * \brief The ModifyClusterRequestPrivate class provides private implementation for ModifyClusterRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a ModifyClusterRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
ModifyClusterRequestPrivate::ModifyClusterRequestPrivate(
    const CloudHsmV2Request::Action action, ModifyClusterRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
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
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
