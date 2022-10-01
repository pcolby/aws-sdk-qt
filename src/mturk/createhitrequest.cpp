// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhitrequest.h"
#include "createhitrequest_p.h"
#include "createhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITRequest
 * \brief The CreateHITRequest class provides an interface for MTurk CreateHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHIT
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHITRequest::CreateHITRequest(const CreateHITRequest &other)
    : MTurkRequest(new CreateHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHITRequest object.
 */
CreateHITRequest::CreateHITRequest()
    : MTurkRequest(new CreateHITRequestPrivate(MTurkRequest::CreateHITAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHITRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateHITRequestPrivate
 * \brief The CreateHITRequestPrivate class provides private implementation for CreateHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateHITRequestPrivate::CreateHITRequestPrivate(
    const MTurkRequest::Action action, CreateHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHITRequest
 * class' copy constructor.
 */
CreateHITRequestPrivate::CreateHITRequestPrivate(
    const CreateHITRequestPrivate &other, CreateHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
