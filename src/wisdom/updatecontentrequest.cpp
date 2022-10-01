// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontentrequest.h"
#include "updatecontentrequest_p.h"
#include "updatecontentresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::UpdateContentRequest
 * \brief The UpdateContentRequest class provides an interface for Wisdom UpdateContent requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::updateContent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateContentRequest::UpdateContentRequest(const UpdateContentRequest &other)
    : WisdomRequest(new UpdateContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateContentRequest object.
 */
UpdateContentRequest::UpdateContentRequest()
    : WisdomRequest(new UpdateContentRequestPrivate(WisdomRequest::UpdateContentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateContentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContentResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::UpdateContentRequestPrivate
 * \brief The UpdateContentRequestPrivate class provides private implementation for UpdateContentRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a UpdateContentRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
UpdateContentRequestPrivate::UpdateContentRequestPrivate(
    const WisdomRequest::Action action, UpdateContentRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateContentRequest
 * class' copy constructor.
 */
UpdateContentRequestPrivate::UpdateContentRequestPrivate(
    const UpdateContentRequestPrivate &other, UpdateContentRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
