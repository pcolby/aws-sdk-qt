// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchquantumtasksrequest.h"
#include "searchquantumtasksrequest_p.h"
#include "searchquantumtasksresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchQuantumTasksRequest
 * \brief The SearchQuantumTasksRequest class provides an interface for Braket SearchQuantumTasks requests.
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
 * \sa BraketClient::searchQuantumTasks
 */

/*!
 * Constructs a copy of \a other.
 */
SearchQuantumTasksRequest::SearchQuantumTasksRequest(const SearchQuantumTasksRequest &other)
    : BraketRequest(new SearchQuantumTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchQuantumTasksRequest object.
 */
SearchQuantumTasksRequest::SearchQuantumTasksRequest()
    : BraketRequest(new SearchQuantumTasksRequestPrivate(BraketRequest::SearchQuantumTasksAction, this))
{

}

/*!
 * \reimp
 */
bool SearchQuantumTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchQuantumTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchQuantumTasksRequest::response(QNetworkReply * const reply) const
{
    return new SearchQuantumTasksResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::SearchQuantumTasksRequestPrivate
 * \brief The SearchQuantumTasksRequestPrivate class provides private implementation for SearchQuantumTasksRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchQuantumTasksRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
SearchQuantumTasksRequestPrivate::SearchQuantumTasksRequestPrivate(
    const BraketRequest::Action action, SearchQuantumTasksRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchQuantumTasksRequest
 * class' copy constructor.
 */
SearchQuantumTasksRequestPrivate::SearchQuantumTasksRequestPrivate(
    const SearchQuantumTasksRequestPrivate &other, SearchQuantumTasksRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
