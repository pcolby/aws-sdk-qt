// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for VoiceId TagResource requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : VoiceIdRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : VoiceIdRequest(new TagResourceRequestPrivate(VoiceIdRequest::TagResourceAction, this))
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
 * \class QtAws::VoiceId::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a TagResourceRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const VoiceIdRequest::Action action, TagResourceRequest * const q)
    : VoiceIdRequestPrivate(action, q)
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
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
