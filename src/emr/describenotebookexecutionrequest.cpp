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

#include "describenotebookexecutionrequest.h"
#include "describenotebookexecutionrequest_p.h"
#include "describenotebookexecutionresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeNotebookExecutionRequest
 * \brief The DescribeNotebookExecutionRequest class provides an interface for Emr DescribeNotebookExecution requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeNotebookExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotebookExecutionRequest::DescribeNotebookExecutionRequest(const DescribeNotebookExecutionRequest &other)
    : EmrRequest(new DescribeNotebookExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotebookExecutionRequest object.
 */
DescribeNotebookExecutionRequest::DescribeNotebookExecutionRequest()
    : EmrRequest(new DescribeNotebookExecutionRequestPrivate(EmrRequest::DescribeNotebookExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotebookExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotebookExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotebookExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotebookExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DescribeNotebookExecutionRequestPrivate
 * \brief The DescribeNotebookExecutionRequestPrivate class provides private implementation for DescribeNotebookExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeNotebookExecutionRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeNotebookExecutionRequestPrivate::DescribeNotebookExecutionRequestPrivate(
    const EmrRequest::Action action, DescribeNotebookExecutionRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotebookExecutionRequest
 * class' copy constructor.
 */
DescribeNotebookExecutionRequestPrivate::DescribeNotebookExecutionRequestPrivate(
    const DescribeNotebookExecutionRequestPrivate &other, DescribeNotebookExecutionRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
