// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontentrequest.h"
#include "createcontentrequest_p.h"
#include "createcontentresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateContentRequest
 * \brief The CreateContentRequest class provides an interface for Wisdom CreateContent requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createContent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContentRequest::CreateContentRequest(const CreateContentRequest &other)
    : WisdomRequest(new CreateContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContentRequest object.
 */
CreateContentRequest::CreateContentRequest()
    : WisdomRequest(new CreateContentRequestPrivate(WisdomRequest::CreateContentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContentRequest::response(QNetworkReply * const reply) const
{
    return new CreateContentResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::CreateContentRequestPrivate
 * \brief The CreateContentRequestPrivate class provides private implementation for CreateContentRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateContentRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
CreateContentRequestPrivate::CreateContentRequestPrivate(
    const WisdomRequest::Action action, CreateContentRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContentRequest
 * class' copy constructor.
 */
CreateContentRequestPrivate::CreateContentRequestPrivate(
    const CreateContentRequestPrivate &other, CreateContentRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
