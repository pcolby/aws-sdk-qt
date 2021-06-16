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

#include "cancelquantumtaskrequest.h"
#include "cancelquantumtaskrequest_p.h"
#include "cancelquantumtaskresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::CancelQuantumTaskRequest
 * \brief The CancelQuantumTaskRequest class provides an interface for Braket CancelQuantumTask requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::cancelQuantumTask
 */

/*!
 * Constructs a copy of \a other.
 */
CancelQuantumTaskRequest::CancelQuantumTaskRequest(const CancelQuantumTaskRequest &other)
    : BraketRequest(new CancelQuantumTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelQuantumTaskRequest object.
 */
CancelQuantumTaskRequest::CancelQuantumTaskRequest()
    : BraketRequest(new CancelQuantumTaskRequestPrivate(BraketRequest::CancelQuantumTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CancelQuantumTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelQuantumTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelQuantumTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelQuantumTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::CancelQuantumTaskRequestPrivate
 * \brief The CancelQuantumTaskRequestPrivate class provides private implementation for CancelQuantumTaskRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a CancelQuantumTaskRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
CancelQuantumTaskRequestPrivate::CancelQuantumTaskRequestPrivate(
    const BraketRequest::Action action, CancelQuantumTaskRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelQuantumTaskRequest
 * class' copy constructor.
 */
CancelQuantumTaskRequestPrivate::CancelQuantumTaskRequestPrivate(
    const CancelQuantumTaskRequestPrivate &other, CancelQuantumTaskRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
