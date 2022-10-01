// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevolumesrequest.h"
#include "describevolumesrequest_p.h"
#include "describevolumesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeVolumesRequest
 * \brief The DescribeVolumesRequest class provides an interface for FSx DescribeVolumes requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeVolumes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVolumesRequest::DescribeVolumesRequest(const DescribeVolumesRequest &other)
    : FSxRequest(new DescribeVolumesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVolumesRequest object.
 */
DescribeVolumesRequest::DescribeVolumesRequest()
    : FSxRequest(new DescribeVolumesRequestPrivate(FSxRequest::DescribeVolumesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVolumesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVolumesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVolumesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVolumesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeVolumesRequestPrivate
 * \brief The DescribeVolumesRequestPrivate class provides private implementation for DescribeVolumesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeVolumesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeVolumesRequestPrivate::DescribeVolumesRequestPrivate(
    const FSxRequest::Action action, DescribeVolumesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVolumesRequest
 * class' copy constructor.
 */
DescribeVolumesRequestPrivate::DescribeVolumesRequestPrivate(
    const DescribeVolumesRequestPrivate &other, DescribeVolumesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
