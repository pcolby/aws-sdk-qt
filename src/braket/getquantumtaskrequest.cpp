// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getquantumtaskrequest.h"
#include "getquantumtaskrequest_p.h"
#include "getquantumtaskresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::GetQuantumTaskRequest
 * \brief The GetQuantumTaskRequest class provides an interface for Braket GetQuantumTask requests.
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
 * \sa BraketClient::getQuantumTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetQuantumTaskRequest::GetQuantumTaskRequest(const GetQuantumTaskRequest &other)
    : BraketRequest(new GetQuantumTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQuantumTaskRequest object.
 */
GetQuantumTaskRequest::GetQuantumTaskRequest()
    : BraketRequest(new GetQuantumTaskRequestPrivate(BraketRequest::GetQuantumTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetQuantumTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQuantumTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQuantumTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetQuantumTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::GetQuantumTaskRequestPrivate
 * \brief The GetQuantumTaskRequestPrivate class provides private implementation for GetQuantumTaskRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a GetQuantumTaskRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
GetQuantumTaskRequestPrivate::GetQuantumTaskRequestPrivate(
    const BraketRequest::Action action, GetQuantumTaskRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQuantumTaskRequest
 * class' copy constructor.
 */
GetQuantumTaskRequestPrivate::GetQuantumTaskRequestPrivate(
    const GetQuantumTaskRequestPrivate &other, GetQuantumTaskRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
