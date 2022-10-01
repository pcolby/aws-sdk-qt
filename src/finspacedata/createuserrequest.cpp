// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserrequest.h"
#include "createuserrequest_p.h"
#include "createuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreateUserRequest
 * \brief The CreateUserRequest class provides an interface for FinspaceData CreateUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createUser
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserRequest::CreateUserRequest(const CreateUserRequest &other)
    : FinspaceDataRequest(new CreateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserRequest object.
 */
CreateUserRequest::CreateUserRequest()
    : FinspaceDataRequest(new CreateUserRequestPrivate(FinspaceDataRequest::CreateUserAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::CreateUserRequestPrivate
 * \brief The CreateUserRequestPrivate class provides private implementation for CreateUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreateUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const FinspaceDataRequest::Action action, CreateUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserRequest
 * class' copy constructor.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const CreateUserRequestPrivate &other, CreateUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
