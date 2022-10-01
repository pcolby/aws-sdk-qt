// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsrequest.h"
#include "listchannelsrequest_p.h"
#include "listchannelsresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListChannelsRequest
 * \brief The ListChannelsRequest class provides an interface for MediaPackage ListChannels requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listChannels
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelsRequest::ListChannelsRequest(const ListChannelsRequest &other)
    : MediaPackageRequest(new ListChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelsRequest object.
 */
ListChannelsRequest::ListChannelsRequest()
    : MediaPackageRequest(new ListChannelsRequestPrivate(MediaPackageRequest::ListChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::ListChannelsRequestPrivate
 * \brief The ListChannelsRequestPrivate class provides private implementation for ListChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListChannelsRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const MediaPackageRequest::Action action, ListChannelsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelsRequest
 * class' copy constructor.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const ListChannelsRequestPrivate &other, ListChannelsRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
