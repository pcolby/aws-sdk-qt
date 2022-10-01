// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhittyperequest.h"
#include "createhittyperequest_p.h"
#include "createhittyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITTypeRequest
 * \brief The CreateHITTypeRequest class provides an interface for MTurk CreateHITType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHITTypeRequest::CreateHITTypeRequest(const CreateHITTypeRequest &other)
    : MTurkRequest(new CreateHITTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHITTypeRequest object.
 */
CreateHITTypeRequest::CreateHITTypeRequest()
    : MTurkRequest(new CreateHITTypeRequestPrivate(MTurkRequest::CreateHITTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHITTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHITTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHITTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateHITTypeRequestPrivate
 * \brief The CreateHITTypeRequestPrivate class provides private implementation for CreateHITTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateHITTypeRequestPrivate::CreateHITTypeRequestPrivate(
    const MTurkRequest::Action action, CreateHITTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHITTypeRequest
 * class' copy constructor.
 */
CreateHITTypeRequestPrivate::CreateHITTypeRequestPrivate(
    const CreateHITTypeRequestPrivate &other, CreateHITTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
