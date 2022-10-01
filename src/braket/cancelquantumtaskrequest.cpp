// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
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
