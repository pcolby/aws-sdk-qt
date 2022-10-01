// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsessionrequest.h"
#include "createsessionrequest_p.h"
#include "createsessionresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateSessionRequest
 * \brief The CreateSessionRequest class provides an interface for Wisdom CreateSession requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createSession
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSessionRequest::CreateSessionRequest(const CreateSessionRequest &other)
    : WisdomRequest(new CreateSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSessionRequest object.
 */
CreateSessionRequest::CreateSessionRequest()
    : WisdomRequest(new CreateSessionRequestPrivate(WisdomRequest::CreateSessionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::CreateSessionRequestPrivate
 * \brief The CreateSessionRequestPrivate class provides private implementation for CreateSessionRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateSessionRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
CreateSessionRequestPrivate::CreateSessionRequestPrivate(
    const WisdomRequest::Action action, CreateSessionRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSessionRequest
 * class' copy constructor.
 */
CreateSessionRequestPrivate::CreateSessionRequestPrivate(
    const CreateSessionRequestPrivate &other, CreateSessionRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
