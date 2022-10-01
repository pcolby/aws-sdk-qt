// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createadditionalassignmentsforhitrequest.h"
#include "createadditionalassignmentsforhitrequest_p.h"
#include "createadditionalassignmentsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateAdditionalAssignmentsForHITRequest
 * \brief The CreateAdditionalAssignmentsForHITRequest class provides an interface for MTurk CreateAdditionalAssignmentsForHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createAdditionalAssignmentsForHIT
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAdditionalAssignmentsForHITRequest::CreateAdditionalAssignmentsForHITRequest(const CreateAdditionalAssignmentsForHITRequest &other)
    : MTurkRequest(new CreateAdditionalAssignmentsForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAdditionalAssignmentsForHITRequest object.
 */
CreateAdditionalAssignmentsForHITRequest::CreateAdditionalAssignmentsForHITRequest()
    : MTurkRequest(new CreateAdditionalAssignmentsForHITRequestPrivate(MTurkRequest::CreateAdditionalAssignmentsForHITAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAdditionalAssignmentsForHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAdditionalAssignmentsForHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAdditionalAssignmentsForHITRequest::response(QNetworkReply * const reply) const
{
    return new CreateAdditionalAssignmentsForHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateAdditionalAssignmentsForHITRequestPrivate
 * \brief The CreateAdditionalAssignmentsForHITRequestPrivate class provides private implementation for CreateAdditionalAssignmentsForHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateAdditionalAssignmentsForHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateAdditionalAssignmentsForHITRequestPrivate::CreateAdditionalAssignmentsForHITRequestPrivate(
    const MTurkRequest::Action action, CreateAdditionalAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAdditionalAssignmentsForHITRequest
 * class' copy constructor.
 */
CreateAdditionalAssignmentsForHITRequestPrivate::CreateAdditionalAssignmentsForHITRequestPrivate(
    const CreateAdditionalAssignmentsForHITRequestPrivate &other, CreateAdditionalAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
