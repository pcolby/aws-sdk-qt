// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontentrequest.h"
#include "getcontentrequest_p.h"
#include "getcontentresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetContentRequest
 * \brief The GetContentRequest class provides an interface for Wisdom GetContent requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getContent
 */

/*!
 * Constructs a copy of \a other.
 */
GetContentRequest::GetContentRequest(const GetContentRequest &other)
    : WisdomRequest(new GetContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContentRequest object.
 */
GetContentRequest::GetContentRequest()
    : WisdomRequest(new GetContentRequestPrivate(WisdomRequest::GetContentAction, this))
{

}

/*!
 * \reimp
 */
bool GetContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContentRequest::response(QNetworkReply * const reply) const
{
    return new GetContentResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::GetContentRequestPrivate
 * \brief The GetContentRequestPrivate class provides private implementation for GetContentRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetContentRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
GetContentRequestPrivate::GetContentRequestPrivate(
    const WisdomRequest::Action action, GetContentRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContentRequest
 * class' copy constructor.
 */
GetContentRequestPrivate::GetContentRequestPrivate(
    const GetContentRequestPrivate &other, GetContentRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
