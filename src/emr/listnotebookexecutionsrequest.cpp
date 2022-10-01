// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnotebookexecutionsrequest.h"
#include "listnotebookexecutionsrequest_p.h"
#include "listnotebookexecutionsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListNotebookExecutionsRequest
 * \brief The ListNotebookExecutionsRequest class provides an interface for Emr ListNotebookExecutions requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listNotebookExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListNotebookExecutionsRequest::ListNotebookExecutionsRequest(const ListNotebookExecutionsRequest &other)
    : EmrRequest(new ListNotebookExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNotebookExecutionsRequest object.
 */
ListNotebookExecutionsRequest::ListNotebookExecutionsRequest()
    : EmrRequest(new ListNotebookExecutionsRequestPrivate(EmrRequest::ListNotebookExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotebookExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNotebookExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListNotebookExecutionsRequestPrivate
 * \brief The ListNotebookExecutionsRequestPrivate class provides private implementation for ListNotebookExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListNotebookExecutionsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListNotebookExecutionsRequestPrivate::ListNotebookExecutionsRequestPrivate(
    const EmrRequest::Action action, ListNotebookExecutionsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookExecutionsRequest
 * class' copy constructor.
 */
ListNotebookExecutionsRequestPrivate::ListNotebookExecutionsRequestPrivate(
    const ListNotebookExecutionsRequestPrivate &other, ListNotebookExecutionsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
