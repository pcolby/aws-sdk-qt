// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclusterrequest.h"
#include "describeclusterrequest_p.h"
#include "describeclusterresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeClusterRequest
 * \brief The DescribeClusterRequest class provides an interface for Emr DescribeCluster requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClusterRequest::DescribeClusterRequest(const DescribeClusterRequest &other)
    : EmrRequest(new DescribeClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClusterRequest object.
 */
DescribeClusterRequest::DescribeClusterRequest()
    : EmrRequest(new DescribeClusterRequestPrivate(EmrRequest::DescribeClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClusterRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DescribeClusterRequestPrivate
 * \brief The DescribeClusterRequestPrivate class provides private implementation for DescribeClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeClusterRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeClusterRequestPrivate::DescribeClusterRequestPrivate(
    const EmrRequest::Action action, DescribeClusterRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterRequest
 * class' copy constructor.
 */
DescribeClusterRequestPrivate::DescribeClusterRequestPrivate(
    const DescribeClusterRequestPrivate &other, DescribeClusterRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
