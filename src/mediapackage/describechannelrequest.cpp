// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelrequest.h"
#include "describechannelrequest_p.h"
#include "describechannelresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeChannelRequest
 * \brief The DescribeChannelRequest class provides an interface for MediaPackage DescribeChannel requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelRequest::DescribeChannelRequest(const DescribeChannelRequest &other)
    : MediaPackageRequest(new DescribeChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelRequest object.
 */
DescribeChannelRequest::DescribeChannelRequest()
    : MediaPackageRequest(new DescribeChannelRequestPrivate(MediaPackageRequest::DescribeChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::DescribeChannelRequestPrivate
 * \brief The DescribeChannelRequestPrivate class provides private implementation for DescribeChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeChannelRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const MediaPackageRequest::Action action, DescribeChannelRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelRequest
 * class' copy constructor.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const DescribeChannelRequestPrivate &other, DescribeChannelRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
