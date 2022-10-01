// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetagsrequest.h"
#include "describetagsrequest_p.h"
#include "describetagsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeTagsRequest
 * \brief The DescribeTagsRequest class provides an interface for MachineLearning DescribeTags requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeTags
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTagsRequest::DescribeTagsRequest(const DescribeTagsRequest &other)
    : MachineLearningRequest(new DescribeTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTagsRequest object.
 */
DescribeTagsRequest::DescribeTagsRequest()
    : MachineLearningRequest(new DescribeTagsRequestPrivate(MachineLearningRequest::DescribeTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTagsResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DescribeTagsRequestPrivate
 * \brief The DescribeTagsRequestPrivate class provides private implementation for DescribeTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeTagsRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeTagsRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTagsRequest
 * class' copy constructor.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const DescribeTagsRequestPrivate &other, DescribeTagsRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
