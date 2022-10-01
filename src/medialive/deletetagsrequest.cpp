// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetagsrequest.h"
#include "deletetagsrequest_p.h"
#include "deletetagsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteTagsRequest
 * \brief The DeleteTagsRequest class provides an interface for MediaLive DeleteTags requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteTags
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTagsRequest::DeleteTagsRequest(const DeleteTagsRequest &other)
    : MediaLiveRequest(new DeleteTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTagsRequest object.
 */
DeleteTagsRequest::DeleteTagsRequest()
    : MediaLiveRequest(new DeleteTagsRequestPrivate(MediaLiveRequest::DeleteTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteTagsRequestPrivate
 * \brief The DeleteTagsRequestPrivate class provides private implementation for DeleteTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteTagsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const MediaLiveRequest::Action action, DeleteTagsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagsRequest
 * class' copy constructor.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const DeleteTagsRequestPrivate &other, DeleteTagsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
