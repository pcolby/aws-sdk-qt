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

#include "describenotebookinstancerequest.h"
#include "describenotebookinstancerequest_p.h"
#include "describenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceRequest
 * \brief The DescribeNotebookInstanceRequest class provides an interface for SageMaker DescribeNotebookInstance requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotebookInstanceRequest::DescribeNotebookInstanceRequest(const DescribeNotebookInstanceRequest &other)
    : SageMakerRequest(new DescribeNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotebookInstanceRequest object.
 */
DescribeNotebookInstanceRequest::DescribeNotebookInstanceRequest()
    : SageMakerRequest(new DescribeNotebookInstanceRequestPrivate(SageMakerRequest::DescribeNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceRequestPrivate
 * \brief The DescribeNotebookInstanceRequestPrivate class provides private implementation for DescribeNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeNotebookInstanceRequestPrivate::DescribeNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, DescribeNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotebookInstanceRequest
 * class' copy constructor.
 */
DescribeNotebookInstanceRequestPrivate::DescribeNotebookInstanceRequestPrivate(
    const DescribeNotebookInstanceRequestPrivate &other, DescribeNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
