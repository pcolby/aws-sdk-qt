// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassistantassociationsrequest.h"
#include "listassistantassociationsrequest_p.h"
#include "listassistantassociationsresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListAssistantAssociationsRequest
 * \brief The ListAssistantAssociationsRequest class provides an interface for Wisdom ListAssistantAssociations requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listAssistantAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssistantAssociationsRequest::ListAssistantAssociationsRequest(const ListAssistantAssociationsRequest &other)
    : WisdomRequest(new ListAssistantAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssistantAssociationsRequest object.
 */
ListAssistantAssociationsRequest::ListAssistantAssociationsRequest()
    : WisdomRequest(new ListAssistantAssociationsRequestPrivate(WisdomRequest::ListAssistantAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssistantAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssistantAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssistantAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssistantAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::ListAssistantAssociationsRequestPrivate
 * \brief The ListAssistantAssociationsRequestPrivate class provides private implementation for ListAssistantAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListAssistantAssociationsRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
ListAssistantAssociationsRequestPrivate::ListAssistantAssociationsRequestPrivate(
    const WisdomRequest::Action action, ListAssistantAssociationsRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssistantAssociationsRequest
 * class' copy constructor.
 */
ListAssistantAssociationsRequestPrivate::ListAssistantAssociationsRequestPrivate(
    const ListAssistantAssociationsRequestPrivate &other, ListAssistantAssociationsRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
