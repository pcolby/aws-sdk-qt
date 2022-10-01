// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtagsrequest.h"
#include "createtagsrequest_p.h"
#include "createtagsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateTagsRequest
 * \brief The CreateTagsRequest class provides an interface for MediaLive CreateTags requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createTags
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTagsRequest::CreateTagsRequest(const CreateTagsRequest &other)
    : MediaLiveRequest(new CreateTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTagsRequest object.
 */
CreateTagsRequest::CreateTagsRequest()
    : MediaLiveRequest(new CreateTagsRequestPrivate(MediaLiveRequest::CreateTagsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateTagsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreateTagsRequestPrivate
 * \brief The CreateTagsRequestPrivate class provides private implementation for CreateTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateTagsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const MediaLiveRequest::Action action, CreateTagsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTagsRequest
 * class' copy constructor.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const CreateTagsRequestPrivate &other, CreateTagsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
