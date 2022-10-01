// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelrequest.h"
#include "deletechannelrequest_p.h"
#include "deletechannelresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DeleteChannelRequest
 * \brief The DeleteChannelRequest class provides an interface for MediaPackage DeleteChannel requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::deleteChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteChannelRequest::DeleteChannelRequest(const DeleteChannelRequest &other)
    : MediaPackageRequest(new DeleteChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteChannelRequest object.
 */
DeleteChannelRequest::DeleteChannelRequest()
    : MediaPackageRequest(new DeleteChannelRequestPrivate(MediaPackageRequest::DeleteChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::DeleteChannelRequestPrivate
 * \brief The DeleteChannelRequestPrivate class provides private implementation for DeleteChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DeleteChannelRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const MediaPackageRequest::Action action, DeleteChannelRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelRequest
 * class' copy constructor.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const DeleteChannelRequestPrivate &other, DeleteChannelRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
