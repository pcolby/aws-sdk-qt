// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
