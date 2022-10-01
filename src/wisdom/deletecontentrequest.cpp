// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontentrequest.h"
#include "deletecontentrequest_p.h"
#include "deletecontentresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteContentRequest
 * \brief The DeleteContentRequest class provides an interface for Wisdom DeleteContent requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteContent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContentRequest::DeleteContentRequest(const DeleteContentRequest &other)
    : WisdomRequest(new DeleteContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContentRequest object.
 */
DeleteContentRequest::DeleteContentRequest()
    : WisdomRequest(new DeleteContentRequestPrivate(WisdomRequest::DeleteContentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContentResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::DeleteContentRequestPrivate
 * \brief The DeleteContentRequestPrivate class provides private implementation for DeleteContentRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteContentRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
DeleteContentRequestPrivate::DeleteContentRequestPrivate(
    const WisdomRequest::Action action, DeleteContentRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContentRequest
 * class' copy constructor.
 */
DeleteContentRequestPrivate::DeleteContentRequestPrivate(
    const DeleteContentRequestPrivate &other, DeleteContentRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
