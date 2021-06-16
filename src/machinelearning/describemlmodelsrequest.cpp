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

#include "describemlmodelsrequest.h"
#include "describemlmodelsrequest_p.h"
#include "describemlmodelsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeMLModelsRequest
 * \brief The DescribeMLModelsRequest class provides an interface for MachineLearning DescribeMLModels requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeMLModels
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMLModelsRequest::DescribeMLModelsRequest(const DescribeMLModelsRequest &other)
    : MachineLearningRequest(new DescribeMLModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMLModelsRequest object.
 */
DescribeMLModelsRequest::DescribeMLModelsRequest()
    : MachineLearningRequest(new DescribeMLModelsRequestPrivate(MachineLearningRequest::DescribeMLModelsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMLModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMLModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMLModelsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMLModelsResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DescribeMLModelsRequestPrivate
 * \brief The DescribeMLModelsRequestPrivate class provides private implementation for DescribeMLModelsRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeMLModelsRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DescribeMLModelsRequestPrivate::DescribeMLModelsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeMLModelsRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMLModelsRequest
 * class' copy constructor.
 */
DescribeMLModelsRequestPrivate::DescribeMLModelsRequestPrivate(
    const DescribeMLModelsRequestPrivate &other, DescribeMLModelsRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
