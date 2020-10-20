/*
    Copyright 2013-2020 Paul Colby

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

#include "describenotebookinstancelifecycleconfigrequest.h"
#include "describenotebookinstancelifecycleconfigrequest_p.h"
#include "describenotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigRequest
 * \brief The DescribeNotebookInstanceLifecycleConfigRequest class provides an interface for SageMaker DescribeNotebookInstanceLifecycleConfig requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotebookInstanceLifecycleConfigRequest::DescribeNotebookInstanceLifecycleConfigRequest(const DescribeNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new DescribeNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigRequest object.
 */
DescribeNotebookInstanceLifecycleConfigRequest::DescribeNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new DescribeNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::DescribeNotebookInstanceLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotebookInstanceLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigRequestPrivate
 * \brief The DescribeNotebookInstanceLifecycleConfigRequestPrivate class provides private implementation for DescribeNotebookInstanceLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeNotebookInstanceLifecycleConfigRequestPrivate::DescribeNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 */
DescribeNotebookInstanceLifecycleConfigRequestPrivate::DescribeNotebookInstanceLifecycleConfigRequestPrivate(
    const DescribeNotebookInstanceLifecycleConfigRequestPrivate &other, DescribeNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
