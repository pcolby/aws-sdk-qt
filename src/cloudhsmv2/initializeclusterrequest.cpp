// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initializeclusterrequest.h"
#include "initializeclusterrequest_p.h"
#include "initializeclusterresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::InitializeClusterRequest
 * \brief The InitializeClusterRequest class provides an interface for CloudHsmV2 InitializeCluster requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::initializeCluster
 */

/*!
 * Constructs a copy of \a other.
 */
InitializeClusterRequest::InitializeClusterRequest(const InitializeClusterRequest &other)
    : CloudHsmV2Request(new InitializeClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitializeClusterRequest object.
 */
InitializeClusterRequest::InitializeClusterRequest()
    : CloudHsmV2Request(new InitializeClusterRequestPrivate(CloudHsmV2Request::InitializeClusterAction, this))
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
 * \class QtAws::CloudHsmV2::InitializeClusterRequestPrivate
 * \brief The InitializeClusterRequestPrivate class provides private implementation for InitializeClusterRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a InitializeClusterRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
InitializeClusterRequestPrivate::InitializeClusterRequestPrivate(
    const CloudHsmV2Request::Action action, InitializeClusterRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
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
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
