// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for MediaPackageVod TagResource requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : MediaPackageVodRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : MediaPackageVodRequest(new TagResourceRequestPrivate(MediaPackageVodRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a TagResourceRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const MediaPackageVodRequest::Action action, TagResourceRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
