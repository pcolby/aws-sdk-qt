// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterrequest.h"
#include "deleteclusterrequest_p.h"
#include "deleteclusterresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DeleteClusterRequest
 * \brief The DeleteClusterRequest class provides an interface for CloudHsmV2 DeleteCluster requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::deleteCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClusterRequest::DeleteClusterRequest(const DeleteClusterRequest &other)
    : CloudHsmV2Request(new DeleteClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClusterRequest object.
 */
DeleteClusterRequest::DeleteClusterRequest()
    : CloudHsmV2Request(new DeleteClusterRequestPrivate(CloudHsmV2Request::DeleteClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsmV2::DeleteClusterRequestPrivate
 * \brief The DeleteClusterRequestPrivate class provides private implementation for DeleteClusterRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DeleteClusterRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const CloudHsmV2Request::Action action, DeleteClusterRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterRequest
 * class' copy constructor.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const DeleteClusterRequestPrivate &other, DeleteClusterRequest * const q)
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
