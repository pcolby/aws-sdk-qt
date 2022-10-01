// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelrequest.h"
#include "updatechannelrequest_p.h"
#include "updatechannelresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::UpdateChannelRequest
 * \brief The UpdateChannelRequest class provides an interface for MediaPackage UpdateChannel requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::updateChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateChannelRequest::UpdateChannelRequest(const UpdateChannelRequest &other)
    : MediaPackageRequest(new UpdateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateChannelRequest object.
 */
UpdateChannelRequest::UpdateChannelRequest()
    : MediaPackageRequest(new UpdateChannelRequestPrivate(MediaPackageRequest::UpdateChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::UpdateChannelRequestPrivate
 * \brief The UpdateChannelRequestPrivate class provides private implementation for UpdateChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a UpdateChannelRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const MediaPackageRequest::Action action, UpdateChannelRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelRequest
 * class' copy constructor.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const UpdateChannelRequestPrivate &other, UpdateChannelRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
