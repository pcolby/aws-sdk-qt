// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
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
