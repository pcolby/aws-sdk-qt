// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhitwithhittyperequest.h"
#include "createhitwithhittyperequest_p.h"
#include "createhitwithhittyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeRequest
 * \brief The CreateHITWithHITTypeRequest class provides an interface for MTurk CreateHITWithHITType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITWithHITType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHITWithHITTypeRequest::CreateHITWithHITTypeRequest(const CreateHITWithHITTypeRequest &other)
    : MTurkRequest(new CreateHITWithHITTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHITWithHITTypeRequest object.
 */
CreateHITWithHITTypeRequest::CreateHITWithHITTypeRequest()
    : MTurkRequest(new CreateHITWithHITTypeRequestPrivate(MTurkRequest::CreateHITWithHITTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHITWithHITTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHITWithHITTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHITWithHITTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITWithHITTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeRequestPrivate
 * \brief The CreateHITWithHITTypeRequestPrivate class provides private implementation for CreateHITWithHITTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITWithHITTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateHITWithHITTypeRequestPrivate::CreateHITWithHITTypeRequestPrivate(
    const MTurkRequest::Action action, CreateHITWithHITTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHITWithHITTypeRequest
 * class' copy constructor.
 */
CreateHITWithHITTypeRequestPrivate::CreateHITWithHITTypeRequestPrivate(
    const CreateHITWithHITTypeRequestPrivate &other, CreateHITWithHITTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
