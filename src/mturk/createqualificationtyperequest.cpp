// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createqualificationtyperequest.h"
#include "createqualificationtyperequest_p.h"
#include "createqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateQualificationTypeRequest
 * \brief The CreateQualificationTypeRequest class provides an interface for MTurk CreateQualificationType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createQualificationType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateQualificationTypeRequest::CreateQualificationTypeRequest(const CreateQualificationTypeRequest &other)
    : MTurkRequest(new CreateQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateQualificationTypeRequest object.
 */
CreateQualificationTypeRequest::CreateQualificationTypeRequest()
    : MTurkRequest(new CreateQualificationTypeRequestPrivate(MTurkRequest::CreateQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateQualificationTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateQualificationTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateQualificationTypeRequestPrivate
 * \brief The CreateQualificationTypeRequestPrivate class provides private implementation for CreateQualificationTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateQualificationTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateQualificationTypeRequestPrivate::CreateQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, CreateQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateQualificationTypeRequest
 * class' copy constructor.
 */
CreateQualificationTypeRequestPrivate::CreateQualificationTypeRequestPrivate(
    const CreateQualificationTypeRequestPrivate &other, CreateQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
