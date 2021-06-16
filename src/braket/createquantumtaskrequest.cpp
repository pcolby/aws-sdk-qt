/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createquantumtaskrequest.h"
#include "createquantumtaskrequest_p.h"
#include "createquantumtaskresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::CreateQuantumTaskRequest
 * \brief The CreateQuantumTaskRequest class provides an interface for Braket CreateQuantumTask requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::createQuantumTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateQuantumTaskRequest::CreateQuantumTaskRequest(const CreateQuantumTaskRequest &other)
    : BraketRequest(new CreateQuantumTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateQuantumTaskRequest object.
 */
CreateQuantumTaskRequest::CreateQuantumTaskRequest()
    : BraketRequest(new CreateQuantumTaskRequestPrivate(BraketRequest::CreateQuantumTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateQuantumTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateQuantumTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateQuantumTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateQuantumTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::CreateQuantumTaskRequestPrivate
 * \brief The CreateQuantumTaskRequestPrivate class provides private implementation for CreateQuantumTaskRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a CreateQuantumTaskRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
CreateQuantumTaskRequestPrivate::CreateQuantumTaskRequestPrivate(
    const BraketRequest::Action action, CreateQuantumTaskRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateQuantumTaskRequest
 * class' copy constructor.
 */
CreateQuantumTaskRequestPrivate::CreateQuantumTaskRequestPrivate(
    const CreateQuantumTaskRequestPrivate &other, CreateQuantumTaskRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
